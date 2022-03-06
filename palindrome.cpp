#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int n,i,m,a,c=0,nn;
    cin >>n;// expecting user input to be less than or a 10 digit number
    m=n;
    int ar[10];
    for(i=0;i<10;i++)
    {   
        
        a=m%10;
        if(a==0)
        {
        break;
        }
        ar[i]=a;
        m=m/10;
        nn=nn*10+a;
      if(nn==n)
       {
        cout<<"Palindrome Number";
       }
       else
          cout<<"Not a Palindrome Number";
    
    return 0;
}
