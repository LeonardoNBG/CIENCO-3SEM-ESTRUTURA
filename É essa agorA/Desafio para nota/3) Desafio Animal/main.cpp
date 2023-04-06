#include <iostream>

using namespace std;

int main()
{
    string ver,tipo, ali;

    cout << "O animal é vertebrado ou invertebrado" << endl;
    cin >> ver;

    if(ver == vertebrado)
    {
        cout << "ave ou mamifero";
        cin >> tipo;
        if(tipo == ave)
        {
            cout << "ele eh carnivoro ou onivoro"
            cin >> ali;
            if(ali == carnivoro)
            {
                cout << "aguia";
            }
        }
    }
}
