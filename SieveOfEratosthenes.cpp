#include <iostream>
#include <vector>

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

void sieve (int n)
{
    vector<bool> isPrime(n+1,true);// declaring the whole array of size number+1 as true first

    for(int i=2;(i*i)<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            isPrime[j]=false;// decalring the multiples as false as they are non prime, hence excluding from the array
        }
    }
    for(int i=2;i<=n;i++)
    {
         if(isPrime[i])
         cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"input the number : ";
    cin>>n;
    sieve(n);
    return 0;
}
