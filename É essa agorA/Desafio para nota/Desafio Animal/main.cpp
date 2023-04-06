#include <iostream>

using namespace std;

int main()
{
    string ver,tipo, ali;

    cout << "O animal é vertebrado ou invertebrado" << endl;
    cin >> ver;

    if(ver == "vertebrado")
    {
        cout << "ave ou mamifero ";
        cin >> tipo;

        if(tipo == "ave")
        {
            cout << "ele eh carnivoro ou onivoro ";
            cin >> ali;

            if(ali == "carnivoro")
            {
                cout << "aguia";
            }

            else if(ali == "onivoro")
            {
                cout << "pomba";
            }
        }

        else if(tipo == "mamifero")
        {
            cout << "ele eh onivoro ou herbivoro ";
            cin >> ali;

            if(ali == "onivoro")
            {
                cout << "homem";
            }

            else if(ali == "herbivoro")
            {
                cout << "vaca";
            }
        }
    }

    if(ver == "invertebrado")
    {
        cout << "inseto ou anelideo ";
        cin >> tipo;

        if(tipo == "inseto")
        {
            cout << "ele eh hermatofago ou herbivoro ";
            cin >> ali;

            if(ali == "hermatofago")
            {
                cout << "pulga";
            }

            else if(ali == "herbivoro")
            {
                cout << "lagarta";
            }
        }

        else if(tipo == "anelideo")
        {
            cout << "ele eh hermatofago ou onivoro ";
            cin >> ali;

            if(ali == "hermatofago")
            {
                cout << "sanguessuga";
            }

            else if(ali == "onivoro")
            {
                cout << "minhoca";
            }
        }
    }
}
