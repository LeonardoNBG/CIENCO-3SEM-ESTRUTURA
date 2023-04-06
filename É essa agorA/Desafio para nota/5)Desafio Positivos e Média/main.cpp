#include <iostream>

#define num 6

using namespace std;
//continue e break
int main()
{
    int nume=0;
    float n[num], media = 0;
    for(int i = 0; i < num; i++)
    {
        cout << "digite um numero ";
        cin >> n[i];

    }
    for(int i = 0; i < num; i++)
    {
        if(n[i] > 0)
        {
            nume++;
        }
    }
    for(int i = 0; i < num; i++)
    {
        if(n[i] > 0)
        {
            media = media + n[i];
        }
    }
    cout << "a quantia de positivos eh " << nume << " a media eh " << media/nume;


}
