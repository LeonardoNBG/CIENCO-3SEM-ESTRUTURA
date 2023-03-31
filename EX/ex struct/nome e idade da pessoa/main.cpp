#include <iostream>


using namespace std;

struct pessoa
{
    string nome;
    int idade;
};

int main()
{
    pessoa p;

    cout << "qual seu nome " << endl;
    getline(cin, p.nome);

    cout << "quantos anos voce tem " << endl;
    cin >> p.idade;

    cout << "idade " << p.idade << " anos" << endl;
    cout << "nome " << p.nome << endl;

}
