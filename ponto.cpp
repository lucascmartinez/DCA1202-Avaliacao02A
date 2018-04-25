#include "ponto.h"
#include <iostream>
#include "math.h"

using namespace std;

    Ponto::Ponto(float _x, float _y)
    {
      x = _x; y = _y;
    }

    void Ponto::setX(float _x){
      x = _x;
    }

    void Ponto::setY(float _x){
      x = _x;
    }

    void Ponto::setXY(float _x, float _y){
        x = _x;
        y = _y;
    }
    float Ponto::getX(){
        return x;
    }
    float Ponto::getY(){
        return y;
    }
    float Ponto::norma(){
        float n;
        n = sqrt(x*x+y*y);
        return n;
    }
    void Ponto::translada(float a, float b){
        x = x+a;
        y = y+b;
    }
    void Ponto::imprime(){
        cout << "(" << x << "," << " " << y << ")" << endl;
    }

Ponto Ponto::add(Ponto p1){
        return Ponto(x + p1.x, y + p1.y);
    }
Ponto Ponto::sub(Ponto p1){
        return Ponto(x-p1.x, y-p1.y);
}
