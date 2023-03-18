#include <iostream>

using namespace std;

int main()
{
    float horas, horat, salariomin, salariob, imposto, salarior;

    cout << "digite seu salario " << endl;
    cin >> salariomin;

    cout << "digite suas horas trabalhadas " << endl;
    cin >> horas;

    horat= salariomin/2;

    cout << horat << endl;


    salariob= horas * horat;

    cout << salariob << endl;

    imposto = salariob*0.3;

    cout << imposto << endl;

    salarior = salariob-imposto;

    cout << salarior << endl;


}
