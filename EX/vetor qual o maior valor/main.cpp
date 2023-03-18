#include <iostream>

using namespace std;

#define tamanho 5

int maior(int a[])
{
    int i, maxm;

    maxm = a[0];
    i = 1;
    while (i < tamanho)
    {

        if (maxm < a[i])
        {
            maxm = a[i];
        }
        i = i + 1;
    }
    return maxm;

}
int main()
{
    int i, valor[tamanho];
    i=0;
    while (i < tamanho)
    {
        cout << "entre um numero ";
        cin >> valor[i];
        i = i + 1;
    }
    cout << "o maior eh " << maior(valor) << endl;
}
