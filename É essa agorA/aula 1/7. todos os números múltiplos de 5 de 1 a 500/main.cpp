#include <iostream>

using namespace std;

int main()
{
    int num, res;
    num = 1;
    res=0;
    cout << "os multiplos de 5 sao" << endl;
    while (res < 500)
    {
        res=5*num;
        cout << res << endl;
        num++;
    }
}
