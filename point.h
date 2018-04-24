#ifndef POINT_H
#define POINT_H


class Point
{

private:
    float  x,y;


public:
    void setX(float _x);
    float getX();
    void setY(float _y);
    float getY();
    void setXY(float _x, float _y);
    Point add(Point p1);
    Point sub(Point p1);
    float norma();
    Point translada (float a, float b);
    void imprime();

    Point();
};

#endif // POINT_H
