#include <iostream>

using namespace std;

#define estudantes 5

int main()
{
    int indice;
    float total, nota[estudantes];
    indice = 0;

    while (indice < estudantes)
    {
         cout << "entre com a nota do estudante " << indice + 1 << ": ";
         cin >> nota[indice];
         indice = indice + 1;
    }


    total = 0;
    int qtd = 1;

    for (int i = 0; i < estudantes; i++)
    {
        cout << "Nota " << qtd << ": " << nota[i] << endl;
        total = total + nota[i];
        qtd++;
    }
    cout << endl << "media : " << total / estudantes << endl;

}
