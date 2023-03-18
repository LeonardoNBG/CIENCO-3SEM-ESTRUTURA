#include <iostream>

using namespace std;

int main()
{
    float imc, peso, altura;

    cout << "digite seu peso ";
    cin >> peso;


    cout << "digite seu altura ";
    cin >> altura;


    imc=peso/(altura*altura);

    if (imc<20)
    {
        cout << "voce esta a baixo do peso " << imc;
    }

    else if (imc>=20 && imc <25)
    {
        cout << "voce esta no peso ideal" << imc;
    }
    else
    {
        cout << "voce esta a cima peso " << imc;
    }


}
