#include <iostream>

using namespace std;

int main()
{     
    int a;
    int t[121];
    
        for(int i = 0; i < 121; i++)
    {
        cout<<"Podaj liczbę 1-119 ";
        cin>>a;
    }

    if(a<1 && a>119)
    {
        return 0;
    }
     

t[a]=100;
t[a-1]=10;
t[a+1]=10;

        for(int i=121; i>=0; i--)
    {
        cout<<t[i]<<"";
        cin>>t[i];
    }

return 0;
}