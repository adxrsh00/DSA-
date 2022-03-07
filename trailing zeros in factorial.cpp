#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==1)
    return 1;
    
    return((n)*fact(n-1));
}
int main()
{
      int n,i=0;
    cin>>n;
    int f= fact(n);
    cout<<f<<endl;
    
    while(f%10==0)
    {
        i++;
        f=f/10;
    }
    cout<<i; // number of zeros   
    }
    

   
