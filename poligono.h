#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono
{
    Point vertices[100];
    int qtdpts=0;

public:
    Poligono();
    void setVertices(float _x, float _y);
    int getVertices();
    float areaPoligono();
    Point transladar(float _x,float _y);
    Point rotacionar(float teta, float _x,float _y);
    float imprimr();
};

#endif // POLIGONO_H
