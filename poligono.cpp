#include "poligono.h"
#include <iostream>
#include "ponto.h"

using namespace std;


/* @brief Construtor da classe polígono. Ele não realiza nada.
 */

Poligono::Poligono()
{

}

/* @brief Função pública para armazenar a quantidade de vértices desejados para y;
 * @param A quantidade de vértices desejados.
 */

void Poligono::setn (int _n)
{
    n = _n;
}

/* @brief Função pública para se definir os valores dos pontos do polígono.
 * @param A quantidade de vértices desejados.
 */

void Poligono:: setv (int _n)
{
    float a,b;
    for (int i=0; i<_n; i++){
        cout << "Insira o " << i << " vertice: " << endl << ">>";
        cin >> a;
        cin >> b;
        p[i].setXY(a,b);
        cout << endl;
    }

}

/* @brief Função pública para se obter a quantidade de vértices do polígono.
 */

int Poligono::getn()
{
    return n;
}

/* @brief Função pública para se transladar todos os pontos um dado polígono.
 * @param Valor a ser somado a todos os pontos 'x' do polígono;
 * @param Valor a ser somado a todos os pontos 'y' do polígono;
 */

void Poligono::translarp(float a, float b){
    for (int i=0; i< n; i++){
        p[i].translada(a,b);
    }
}

/* @brief Função pública para se imprimir na tela todos os vértices do polígono, no formato (x1,y1)->(x2,y2)-> e assim por diante.
 */

void Poligono::printpoli(){
    for (int i=0; i < n; i++){
    cout << "(" << p[i].getX() << "," << " " << p[i].getY() << ")->";
    }
}

/* @brief Função para calcular a área do polímero através do método do cadarço.
 */

float Poligono::areapoli(){
    float area=0;
    int j = n -1;
    for (int i = 0; i<n;i++){
        area+= (p[j].getX()+p[i].getX())*(p[j].getY() - p[i].getY());
        j = i;
    }

    return area/2;
}
