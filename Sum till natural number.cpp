#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i= 0; i<=n;i++)
        {
            sum+=i;
        }
        cout<< sum;
}

////////////////////// using recursion ////////////////////// 


#include <iostream>

using namespace std;
int sum(int n)
{
    if(n==1)
    return 1;
    return((n)+sum(n-1));
}
int main()
{
      int n;
    cin>>n;
    cout<<sum(n);
}
    

   
