#include <iostream>

using namespace std;

int main()
{
    string nome;
    float salario, vendas, p;

    cout << "digite seu nome " << endl;
    getline(cin, nome);

    cout << "digite seu salario mensal " << endl;
    cin >> salario;

    cout << "digite o quanto voce vendeu " << endl;
    cin >> vendas;

    p = vendas * 0.15;

    salario = salario + p;

    cout << nome << "seu reajuste de salario eh " << salario;

}
