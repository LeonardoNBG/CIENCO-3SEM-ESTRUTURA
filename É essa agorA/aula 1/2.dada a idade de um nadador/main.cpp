#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "digite sua idade" << endl;

    cin >> idade;

    if (idade >= 5 && idade <=7)
    {
        cout << "infantil A";
    }


    else if (idade >= 8 && idade <=10)
    {
        cout << "infantil b";
    }

    else if (idade >= 11 && idade <=13)
    {
        cout << "juvenil a";
    }

    else if (idade >= 14 && idade <=17)
    {
        cout << "juvenil b";
    }

    else if (idade > 17)
    {
        cout << "senior";
    }

    else
    {
        cout << "voce nao pode participar";
    }

}
