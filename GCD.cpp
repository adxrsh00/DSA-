#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
        cin>>a;
        cin>>b;
    int n = min(a,b);
    
    while(true)
    {
        if(a%n==0 && b%n==0)
        {
            cout<<n; // printing GCD
            return n;
        }
        else
        n--;
    }
    return 0;
}
