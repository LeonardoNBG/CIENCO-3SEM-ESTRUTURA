#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "numero " << n << endl;
}

void mensagem()
{
    cout << "exemplo de sobrecarga de fun��o" << endl;
}

int main()
{
    mensagem();
    mensagem(10);
}
