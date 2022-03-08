#include <iostream>

using namespace std;

int main()
{
    int n;
        cin>>n;
      
    int i, flag=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
              flag++;
        }
        if(flag==0)
        {
            cout<<"is prime";
        }
        else
            cout<<"is not prime";
    
    return 0;
}
