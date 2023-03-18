#include <iostream>

using namespace std;

int main()
{
    float salario, reajuste;

    cout << "digite seu salario " << endl;
    cin >> salario;

    if (salario < 1000)
    {
        reajuste = salario+(salario * 0.15);
        cout << reajuste;
    }


    else if (salario >= 1000 && salario <= 1500)
    {
        reajuste = salario+(salario * 0.10);
        cout << reajuste ;
    }

    else
    {
        reajuste = salario+(salario * 0.05);
        cout << reajuste ;
    }
}
