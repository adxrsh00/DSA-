#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int n,i,m,a,c=0;
    cin >>n;// expecting user input to be less than or a 10 digit number
    m=n;
    int ar[10];
    for(i=0;i<10;i++)
    {           
        a=m%10;
        ar[i]=a;
        m=m/10;
        if(m>0)
        {
            c++;//counter to check number of digits
        }
        else
        {
        c++;
        
        break;
    }}
    
    int nn=0,x=c-1;//new number
     for(i=0;i<c;i++)
    {
      nn+=ar[i]*(pow(10,x));// extracting reversed number
       x--;
    }
    if(nn==n)
    {
        cout<<"Palindrome Number";
    }
    else
    cout<<"Not a Palindrome Number";
    
    return 0;
}
