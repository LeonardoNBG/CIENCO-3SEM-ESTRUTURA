#include <iostream>

using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    Data hj;

    cout << "digite um o dia " << endl;
    cin >> hj.dia;
    cout << "digite um o mes " << endl;
    cin >> hj.mes;
    cout << "digite um o ano " << endl;
    cin >> hj.ano;

    cout << "Hoje eh " << hj.dia << "/" << hj.mes << "/" << hj.ano;

}
