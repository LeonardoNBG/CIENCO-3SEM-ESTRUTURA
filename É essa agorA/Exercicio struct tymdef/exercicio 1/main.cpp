#include <iostream>
#include <string>
using namespace std;
#define num 5

struct pessoa
{
    string nome;
    string endereco;
    int idade;
    int cpf;

};


int main()
{
    pessoa p[num];

    for(int i = 0; i < num; i++)
    {
        cout << "digite o nome ";
        getline(cin, p[i].nome);

        cout << "digite o endereco ";
        getline(cin, p[i].endereco);

        cout << "digite a idade ";
        cin >> p[i].idade;

        cout << "digite o cpf ";
        cin >> p[i].cpf;
        cin.ignore();
    }
    cout << endl;
    for(int i = 0; i < num; i++)
    {
        cout << "digite o nome eh" << p[i].nome;
        cout << "digite o endereco eh" << p[i].endereco;
        cout << "digite a idade eh" << p[i].idade;
        cout << "digite o cpf eh" << p[i].cpf;
        cin.ignore();
        cout << endl;
    }

}
