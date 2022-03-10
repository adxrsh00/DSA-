#include <iostream>

using namespace std;

void Divisor(int a)
{
    int i;
    cout<<"The Divisors of the number are : ";
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"input the number : ";
    cin>>n;
    Divisor(n);
    Divisor(n+1);
    return 0;
}
