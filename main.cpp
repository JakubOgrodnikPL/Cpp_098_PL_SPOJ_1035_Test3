#include <iostream>
using namespace std;
int liczba=0, licznik=0, bufor=0;

int main()
{
    while (cin>>liczba)
    {
        if(liczba == 42 && bufor==1)
            licznik++;

        if(liczba!=42)
        {
            bufor=1;
            cout<<liczba<<endl;
        }
        else
        {
            bufor=0;
            cout<<liczba<<endl;
        }
        if(licznik==3)
            break;
    }
    return 0;
}
