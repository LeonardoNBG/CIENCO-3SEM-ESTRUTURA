#include <iostream>

using namespace std;

void altera(int & n1, int & n2)
{
    n1 = 100;
    n2 = 200;
}

int main()
{
    int n1, n2;

    cout << "digite dois numeros " << endl;
    cin >> n1 >>n2;

    cout << "o primeiro numero digitado foi " << n1 << " o segundo foi " << n2 << endl;

    altera(n1, n2);
    cout << "o primeiro numero alterado foi " << n1 << " o segundo numero alterado foi " << n2 << endl;

}
