#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float vet[100], veta[100];

    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(4);

    for(int i = 0; i < 1; i++)
    {
        cout << "digite um numero " << endl;
        cin >> vet[i];
    }

    for(int i = 0; i < 99; i++)
    {
        veta[i] = vet[i] * 0.5;
        vet[i+1]=veta[i];
    }
    for(int i = 0; i < 99; i++)
    {
        cout << veta[i] << endl;
    }

}
