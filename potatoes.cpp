#include<iostream>
using namespace std;
int isPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else{
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int first,second;
        cin>>first>>second;
        int sum=first+second;
        int copy_sum=sum;
        for(int i=1;i!=0;i++)
        {
            sum=sum+1;
            if(isPrime(sum)){
                cout<<sum-copy_sum<<endl;
                break;
            }
        }
    }
}
