#include <iostream>
#include <string>
using namespace std;

typedef struct data
{
    //para n deixar a variavel negativa unsigned
    unsigned short dia;
    unsigned short mes;
    unsigned int ano;
}Data;

typedef struct aniversario
{
    string nome;
    Data nascimento;
}Aniversario;

int main()
{
    Aniversario alguem;

    cout << "digite o nome de alguem " << endl;
    getline(cin, alguem.nome);
    cout << "digite o dia q esta pessoa nasceu " << endl;
    alguem.nascimento.dia;
    cout << "digite o mes q esta pessoa nasceu " << endl;
    alguem.nascimento.mes;
    cout << "digite o ano q esta pessoa nasceu " << endl;
    alguem.nascimento.ano;

    cout << alguem.nome << endl;
    cout << "nasceu em ";
    cout << alguem.nascimento.dia << "/";
    cout << alguem.nascimento.mes << "/";
    cout << alguem.nascimento.ano << "/";


}
