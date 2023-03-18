#include <iostream>

using namespace std;

int main()
{
    int voto = 0, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0;
    float x = 0.0, percvoto2 = 0.0, percvoto3 = 0.0, percvoto4 = 0.0, pessoa = 0.0;
    voto = 1;


    while (voto > 0)
    {
    cout << "digite o voto ";
    cin >> voto;

    if(voto == 1)
    {
        voto1++;
    }
    else if(voto == 2)
    {
        voto2++;
    }


    else if(voto == 3)
    {
        voto3++;
    }


    else if(voto == 4)
    {
        voto4++;
    }

    if (voto != 0){
            pessoa++;}


    }


    x=(voto1/pessoa)*100;
    percvoto2=(voto2/pessoa)*100;
    percvoto3=(voto3/pessoa)*100;
    percvoto4=(voto4/pessoa)*100;

    cout << "candidato 1 teve " << x << "% candidato 2 teve " << percvoto2 << "% nulo foram " << percvoto3 << "% em branco foram " << percvoto4 << "%";

}
