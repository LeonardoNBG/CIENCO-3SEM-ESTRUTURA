#include <iostream>
#include <locale.h>

using namespace std;

bool par(int num);
void mensagem();


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 0;

    mensagem();

    cout << "digite um numero " << endl;
    cin >> n;

    if (par(n))
    {
        cout << "o numero " << n << " eh par";
    }
    else
    {
        cout << "o numero " << n << " eh impar";
    }

}
bool par(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}
void mensagem()
{
    cout << "aula do modulo 2" << endl;
    cout << endl;
}
