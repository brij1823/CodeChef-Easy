#include<iostream>
using namespace std;
int main()
{
    long long int test;
    cin>>test;

    while(test--)
    {
        long long int n,mod=1000000007;
        cin>>n;

       if(n%2==0)
       {
           long long int answer=(n/2)*(n+1);
            cout<<answer%1000000007<<endl;

       }
       else{
            long long int answer=n*((n+1)/2);
            cout<<answer%mod<<endl;

       }
    }
}
