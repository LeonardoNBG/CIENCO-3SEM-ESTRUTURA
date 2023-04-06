#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3, media = 0;

    cout << "digite a primeira nota" << endl;
    cin >> n1;
    cout << "digite a segunda nota" << endl;
    cin >> n2;
    cout << "digite a terceira nota" << endl;
    cin >> n3;
    n1 = n1 * 2 / (2+3+5);
    n2 = n2  * 3 / (2+3+5);
    n3 = n3 * 5 / (2+3+5);

    media = (n1 + n2 + n3);

    cout << "Media " << media;

}
