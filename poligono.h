#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
/**
 * @brief Classe polígono.
*/
class Poligono
{   int n;
    Ponto p[100];
public:
    /** @brief Construtor da classe polígono. Ele não realiza nada.
     */
    Poligono();
    /** @brief Função pública para armazenar a quantidade de vértices desejados para y;
     * @param A quantidade de vértices desejados.
     */
    void setn (int _n);
    /** @brief Função pública para se definir os valores dos pontos do polígono.
     * @param A quantidade de vértices desejados.
     */
    void setv(int _n);
    /** @brief Função pública para se obter a quantidade de vértices do polígono.
     */
    int getn ();
    /** @brief Função pública para se transladar todos os pontos um dado polígono.
     * @param Valor a ser somado a todos os pontos 'x' do polígono;
     * @param Valor a ser somado a todos os pontos 'y' do polígono;
     */
    void translarp(float a, float b);
    /** @brief Função pública para se imprimir na tela todos os vértices do polígono, no formato (x1,y1)->(x2,y2)-> e assim por diante.
     */
    void printpoli();
    /** @brief Função para calcular a área do polímero através do método do cadarço.
     */
    float areapoli();

};

#endif // POLIGONO_H

