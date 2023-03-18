#include <iostream>

using namespace std;

#define notas 5

float mediavalores (int vet[], int tam)
{
        float soma = 0;
        for ( int i = 0; i < notas; i ++)
        {
            soma += vet[i];

        }
        return soma / tam;

}

int main()
{
    int vet[notas], acima = 0;
    float media;

    for (int i = 0; i < notas; i++)
    {
        cout << "degite a nota " << i + 1 << ": " << endl;
        cin >> vet[i];
    }
    media = mediavalores(vet, notas);
    cout << "media: " << media << endl;

    for (int i = 0; i < notas; i++)
    {
        if (vet[i] > media)
        {
            acima++;
        }
    }
        cout << acima << endl;
        cout << notas - acima << endl;


}
