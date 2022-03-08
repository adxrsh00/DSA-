#include <iostream>

using namespace std;

bool isPrime(int m)
{
    if (m <= 1)
        return false;
    
    int i;
        for(i=2;i<m;i++)
        {
            if(m%i==0)
             return false;
        }
        return true;
}

void primeFact(int a)
{
    int j;
     cout<<"The prime factors are : ";
     for(j=2;j<a;j++)
        {
            if(isPrime(j))
            {
                int x=j;
                while(a%x==0)
                {
                    cout<<j<<" ";
                    x=x*j;
                }
           }   
      }
}

int main()
{
    int n;
        cin>>n;
        if(isPrime(n))
        {
            cout<<"Its a prime Number, it doesnt have prime factors";
        }
        else
        {
            primeFact(n) ;
        }          
             return 0;
}
