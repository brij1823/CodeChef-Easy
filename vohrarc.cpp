#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int n)
{
    if(n==2)
    {
        return 1;
    }
    else{
        for(int i=2;i<n;i++)
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
    long long int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        long long int upper_limit=n/2;
        long long int pro=1;
        long long int counter=0;
        for(long long int i=2;i<=upper_limit;i++)
        {
            counter=0;
            if(isPrime(i))
            {
                while(n%i==0)
                {
                    n=n/i;
                    counter++;
                }
               pro=pro*(counter+1);
            }
             if(n==1)
                break;
        }
        if(pro>3 && pro%2!=0)
        {
            cout<<"Yes"<<endl;
        }
        else{
                cout<<"No"<<endl;
        }

    }
}
