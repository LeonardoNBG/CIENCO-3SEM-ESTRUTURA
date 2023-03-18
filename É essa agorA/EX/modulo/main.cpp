#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int n = 0;

    cout << "Digite o numero para calcular ";
    cin >> n;

    cout << "fatorial de " << n << ": " fatorial(n) << endl;
    cout << "quadrado com lado " << n << ": " area_quadrado(n) << endl;
    cout << "area retangulo " << area_retangulo(n, n) << endl;

    return 0;
}
