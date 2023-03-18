#include <iostream>

using namespace std;

#define lin 2
#define col 2

int main()
{
    int matriz[lin][col], i, j;

    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "digite um numero inteiro ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "o valor na posicao " << i << " " << j << " eh: " << matriz[i][j] << endl;
        }
    }

}
