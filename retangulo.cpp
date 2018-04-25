#include "retangulo.h"
#include "poligono.h"
#include "ponto.h"
#include <iostream>

using namespace std;

retangulo::retangulo(float _x, float _y, float _largura, float _altura)
{
    x = _x;
    y = _y;
    largura = _largura;
    altura = _altura;
}

float retangulo::arearet(){
    float area;
    area = largura * altura;
    return area;
}
