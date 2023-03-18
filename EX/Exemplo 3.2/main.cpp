#include <iostream>

using namespace std;

    int obtem_valor()
    {
        int valor;
        cout << "entre um valor " << endl;
        cin >> valor;
        return valor;
    }

int main()
{
    int a, b;

    a = obtem_valor();
    b = obtem_valor();

    cout << "soma = " << a + b << endl;
}
