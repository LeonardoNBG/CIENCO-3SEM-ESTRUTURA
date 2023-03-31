#include <iostream>
#include <string>

#define ani 10

using namespace std;

typedef struct animal
{
    string nome;
    string especie;
    int idade;
    float peso;

}Animal;

typedef struct listaanimal
{
    Animal lista;

}Lista;

int main()
{
    Lista animall[ani];

    for(int i = 0; i < ani; i++)
    {
        cout << "escreva o nome do animal: " << endl;
        getline(cin, animall[i].lista.nome);

        cout << "escreva a especie do animal: " << endl;
        getline(cin, animall[i].lista.especie);

        cout << "escreva a idade do animal: " << endl;
        cin >> animall[i].lista.idade;

        cout << "escreva o peso do animal: " << endl;
        cin >> animall[i].lista.peso;

        cin.ignore();
    }

    for(int i = 0; i < ani; i++)
    {
        cout << "o nome do animal eh " << animall[i].lista.nome << " a especie do anumal eh " << animall[i].lista.especie << " a idade do animal eh " << animall[i].lista.idade
                << " o peso do animal eh " << animall[i].lista.peso << endl;
    }
}
