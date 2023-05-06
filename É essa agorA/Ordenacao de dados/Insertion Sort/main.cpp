#include <iostream>

using namespace std;

void imprimirVetor(int x[])
{

    for (int i = 0; i <= 4; i++)
    {
        cout << "numero: " << x[i] << endl;
    }
}
void insertionSort(int vetor[])
{
    int j = 0, eleito = 0;

    for (int i = 0; i <= 4; i++)
    {
        eleito = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > eleito)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = eleito;
    }
}

int main()
{
    int vetor[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "digite um numero " << endl;
        cin >> vetor[i];
    }
    imprimirVetor(vetor);
    insertionSort(vetor);
    cout << endl;
    imprimirVetor(vetor);

}
