#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    retangulo v1 (0,0,3,4);
    v1.printpoli();
    v1.areapoli();
    v1.arearet();
    v1.translarp(-3,4);

    return 0;
}
