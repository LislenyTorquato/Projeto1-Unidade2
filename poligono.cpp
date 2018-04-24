#include "poligono.h"
#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

Poligono::Poligono()
{ /**
      *@brief Construtor: inicializa o ponto.
      */
    vertices[qtdpts].setXY(0,0);//inicializa o ponto no vertice 0.


}

void Poligono::setVertices(float _x, float _y)
{
    /**
      *@brief Adiciona os pontos (x,y) aos vértices;
      */
    vertices[qtdpts].setXY(_x,_y);//adiciona o pontos (x,y) aos vertices
    qtdpts++;                    //Contador de pontos para adicionar a qtd certa de pts.
}

int Poligono::getVertices()
{ /**
      *@brief Retorna a quantidade de vértices;
      */
    return qtdpts;
}

float Poligono::areaPoligono()
{
    /**
      *@brief Calcula a área do poligono, pela formula shoelace;
      */
    float soma1=0,soma2=0,total=0, a=0,b=0;

    //alocando o (x,y) inicial para usar na formula
    a=vertices[0].getX();

    b=vertices[0].getY();

    //ultimo ponto recebe o ponto inicial
    vertices[qtdpts].setXY(a,b);

    for(int i=0;i<qtdpts;i++){
        soma1=soma1+(vertices[i].getX()*vertices[i+1].getY());//soma da primeira parcela
    }

    for(int i=0;i<qtdpts;i++){
        soma2=soma2+(vertices[i].getY()*vertices[i+1].getX());//soma da segunda parcela
    }
    if(soma2<0){
        soma2=soma2*(-1);//se a segunda parcela for negativa fica positiva
     }
    if(soma1>soma2){
        total=(soma1-soma2)/2;//se a primeira parcela for a maior subtrai da menor
    }else{
        total=(soma2-soma1)/2;//se a segunda parcela for a maior subtrai da menor
    }
    return total;

}

Point Poligono::transladar(float _x, float _y)
{
    /**
      *@brief Translada todos os pontos do poligono;
      */
    for(int i=0;i<qtdpts;i++)  {
          vertices[i].translada(_x,_y);         
    }

}

Point Poligono::rotacionar(float teta, float _x, float _y)
{
    /**
      *@brief O usuário fornece o angulo e o ponto que deseja rotacionar o poligono.
      */
    int novoX=0, novoY=0;
    Point p1;
    p1.setXY(_x,_y);

    //colocando os pontos na origem
    for(int i=0;i<qtdpts;i++)  {
        vertices[i].sub(p1);
    }

    //rotacionando os pontos
    for(int i=0;i<qtdpts;i++)  {
        novoX=(vertices[i].getX()*cos(teta))-(vertices[i].getY()*sin(teta));
        novoY=(vertices[i].getX()*sin(teta))+(vertices[i].getY()*cos(teta));
        vertices[i].setXY(novoX,novoY);
    }

    //somando o ponto aos vertices
    for(int i=0;i<qtdpts;i++){
     return vertices[i].add(p1);
    }

}

float Poligono::imprimr()
{
    /**
      *@brief Imprime todos os pontos, no formato (Xo,Yo)->(X1,Y1)->...
      */
    for(int i=0;i<qtdpts;i++){
       vertices[i].imprime();
       cout<<"->";
    }

}
