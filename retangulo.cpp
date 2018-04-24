#include "retangulo.h"
#include "poligono.h"
#include <iostream>

using namespace std;

Retangulo::retangulo(float x, float y, float largura, float altura)
{
    /**
     * @brief Construtor com quatro argumento que define os vertices do retangulo.
     */
    Poligono retangulo;//cria um novo objeto
    float a=0,b=0;

    b=x+largura;//adicona largura ao x

    if(y<=0){//em caso do y ser zero ou negativo
        a=y-altura;//subtrai a altura

    }
    else {
        a=y+altura;
    }
    //adiciona os pontos do retangulo
       retangulo.setVertices(x,a);
       retangulo.setVertices(b,a);
       retangulo.setVertices(b,y);
       retangulo.setVertices(x,y);


}
