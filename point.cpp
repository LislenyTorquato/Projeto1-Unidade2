#include "point.h";
#include <math.h>
#include <iostream>


using namespace std;

void Point::setX(float _x)
{
    x=_x;
    /**
      *@brief Recebe o x;
      */


}

float Point::getX()
{
    return x;
    /**
      *@brief Retorna o x;
      */
}

void Point::setY(float _y)
{
    y=_y;
    /**
      *@brief Recebe o y;
      */
}

float Point::getY()
{
    return y;
    /**
      *@brief Retorna o y;
      */
}

void Point::setXY(float _x, float _y)
{
    x=_x;
    y=_y;
    /**
      *@brief Recebe o x e o y.
      */
}

Point Point::add(Point p1)
{
    /**
      *@brief Adiciona as coordenadas
      * de um ponto (dado pelo  usuário) as de um ponto existente.
      */
    Point novoPonto;     //cria um novo objeto para receber um novo ponto:
    x=x+p1.getX();      //adiciona o x do ponto escolhido ao x atual
    y=y+p1.getY();      //adiciona o y do ponto escolhido ao y atual
    novoPonto.setXY(x,y); //o novo ponto recebe as novas coordenadas.
    return novoPonto;     //retorna o novo objeto;


}

Point Point::sub(Point p1)
{
    /**
      *@brief Subtrai as coordenadas
      * de um ponto (dado pelo  usuário) as de um ponto existente.
      */
    Point novoPonto;         //cria um novo objeto para receber um novo ponto:
    x=x-p1.getX();          //subtrai o x do ponto escolhido ao x atual
    y=y-p1.getY();         //subtrai o y do ponto escolhido ao y atual
    novoPonto.setXY(x,y); //o novo ponto recebe as novas coordenadas.
    return novoPonto;     //retorna o novo objeto;
}

float Point::norma()
{
    /**
      *@brief Calcula a distância do ponto para a origem do sistema de coordenadas.
      */
    return sqrt(x*x+y*y);
}

Point Point::translada(float a, float b)
{
    /**
      *@brief Translada o ponto,
      * adicionando as coordenadas
      * de um ponto (dado pelo  usuário) as de um ponto existente;
      */
    Point pontoTransladado;        //cria um novo objeto (ponto)
    x+=a;                         //add a coordenada a ao x
    y+=b;                        //add a coordenada b ao y
    pontoTransladado.setXY(x,y);//define as coordenadas do ponto transladado
    return pontoTransladado;   //retorna o ponto

}

void Point::imprime()
{
    /**
      *@brief Imprime um ponto no formato (x,y)
      */
    cout<<"("<<x<<","<<y<<")";
}

Point::Point()
{
    //inicializa o ponto (x,y)
    x=y=0;
    /**
     * @brief Construtor: inicializa o ponto.
     */
}
