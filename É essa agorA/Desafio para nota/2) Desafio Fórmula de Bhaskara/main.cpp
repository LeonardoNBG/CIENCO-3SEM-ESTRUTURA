#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float del, a, b, c, res;

    cout << "digite os a, b, c ";
    cin >> a;
    cin >> b;
    cin >> c;

    del = b*b-4*a*c;

    if(del < 0)
    {
        cout << "nao tem valor real";
    }
    else
    {
        cout << (-1*b)+(sqrt(del))/(2*a) << endl;
        cout << (-1*b)-(sqrt(del))/(2*a) << endl;
    }
}
