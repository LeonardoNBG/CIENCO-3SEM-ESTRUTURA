#include <iostream>

using namespace std;

int troca(int & n1, int & n2);

int main()
{
    /*int n1, n2, temp;

    cout << "entre com 2 numeros" << endl;
    cin >> n1 >> n2;

    cout << "voce entrou com " << n1 << " e " << n2 << endl;
    temp = n1;
    n1 = n2;
    n2= temp;
    cout << "trocados eles sao " << n1 << " e " << n2 << endl;
    */
    int n1, n2, res;

    cout << "entre com 2 numeros" << endl;
    cin >> n1 >> n2;
    cout << "voce entrou com " << n1 << " e " << n2 << endl;
    res = troca(n1, n2);
    cout << "trocados eles sao " << n1 << " e " << n2 << endl;


}
int troca(int & n1, int & n2)
{
    int temp= 0;
    temp = n1;
    n1 = n2;
    n2= temp;

}
