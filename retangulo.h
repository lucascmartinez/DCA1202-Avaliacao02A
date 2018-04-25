#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "ponto.h"

/* @brief Uma subclasse de polímero que armazena um retângulo. Além das funções públicas do polígono o retângulo também inclui os pontos de sua origem, sua largura e sua altura.
 */
class retangulo : public Poligono {
private:
int n;
Ponto p[4];
float x, y, largura, altura;
public:
/* @brief O construtor de retângulo. Incluindo o armazenamento dos valores de todos os seus parâmetros próprios.
 */
    retangulo(float _x, float _y, float _largura, float _altura);
    /* @brief Função pública para calcular a área do retângulo com base na sua largura e altura;
     */
    float arearet();
};

#endif // RETANGULO_H
