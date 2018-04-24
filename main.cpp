#include <iostream>
#include "retangulo.h"
#include "poligono.h"

using namespace std;

int main()
{
    /**
     * @brief No programa principal,
     * é lido um objeto da classe retangulo e os seus pontos;
     * É feita modificações em sua estrutura: translação e rotação.
     */
    Retangulo retangulo;
    float area1,area2,area3;

    //retangulo.retangulo(0,0,4,3);

    //armazenar os pontos do retangulo:
    retangulo.setVertices(0,-3);
    retangulo.setVertices(4,-3);
    retangulo.setVertices(4,0);
    retangulo.setVertices(0,0);

    cout<<"Estrutura poligonal do retangulo: "<<endl;
    retangulo.imprimr();

    cout<<"\n\nArea do retangulo: "<<retangulo.areaPoligono()<<endl;

    //calculando a area e salvando em
    //uma variavel para reutilizah-la depois
    area1=retangulo.areaPoligono();

    //chamando a funcao transladar
    retangulo.transladar(-3,4);

    cout<<"\nPontos transladados: "<<endl;
    retangulo.imprimr();

    //calculando a area e salvando em
    //uma variavel para reutilizah-la depois
    area2=retangulo.areaPoligono();

    cout<<"\n\nArea transladada:"<<area2<<endl;

    cout<<"Area antes da translacao: "<<area1<<endl<<endl;

    //chamando a funcao rotacionar
    retangulo.rotacionar(30,2,1.5);

    cout<<"Pontos rotacionados:"<<endl;
    retangulo.imprimr();

    area3=retangulo.areaPoligono();

    cout<<"\n\nArea antes da rotacao e translacao: "<<area1<<endl;

    cout<<"Area apos rotacao: "<<area3<<endl<<endl;




    return 0;
}
