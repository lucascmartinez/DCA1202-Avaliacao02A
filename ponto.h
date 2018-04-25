#ifndef PONTO_H
#define PONTO_H

/** @brief Uma classe para representar um ponto no espaço, composta de dois elementos: 'x' e 'a'
 *
 * */

class Ponto
{
private:
    float x, y;
public:
    /** @brief Construtor padrão da classe ponto.
     * @param float x é a coordenada em x do ponto. Por padrão o construtor a dá o valor de 0;
     * @param float y é a coordenada em y do ponto. Por padrão o construtor a dá o valor de 0;
     * */
    Ponto(float _x=0, float _y=0);
    /** @brief Função pública para definir o valor de x;
     * @param Um float para se inserir o valor de x;
     */
    void setX(float _x);
    /** @brief Função pública para definir o valor de y;
     * @param Um float para se inserir o valor de y;
     */
    void setY(float _y);
    /** @brief Função pública para definir o valor de x e y;
     * @param Um float para se inserir o valor de x;
     * @param um Float para se inserir o valor de y;
     */
    void setXY(float _x, float y);
    /** @brief Função pública para se obter o valor armazenado em x;
     */
    float getX();
    /** @brief Função pública para se obter o valor armazenado em y;
     */
    float getY();
    /** @brief Função pública para se somar os valores de um ponto a outro ponto;
     * @param Um ponto com os valores a serem somados;
     */
    Ponto add(Ponto p1);
    /** @brief Função pública para se subtrair os valores de um ponto a outro ponto;
     * @param Um ponto com os valores a serem subtraídos;
     */
    Ponto sub(Ponto p1);
    /** @brief Função pública para se calcular a norma da origem até o ponto;
     * */
    float norma();
    /** @brief Função pública para transladar o valor de um ponto;
     * @param Um float que armazena o valor que será somado a x;
     * @param Um float que armazena o valor que será somado a y;
     */
    void translada(float a, float b);
    /** @brief Função pública para imprimir na tela os valores do ponto;
     */
    void imprime();
};

#endif // PONTO_H
