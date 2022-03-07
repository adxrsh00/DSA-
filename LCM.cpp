#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
        cin>>a;
        cin>>b;
    int n = max(a,b);
    
    while(true)
    {
        if(n%a==0 && n%b==0)
        {
            cout<<n; // printing LCM
            return n;
        }
        else
        n++;
    }
    return 0;
}
