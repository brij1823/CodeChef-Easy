#include<iostream>
using namespace std;

int isPrime(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int counter=18;
        int answer=0;

        if(isPrime(a)){
            answer++;
        }
        if(isPrime(b)){
            answer++;
        }
        while(counter--)
        {
            int c=a+b;
            if(isPrime(c))
            {
                answer++;
            }
            a=b;
            b=c;
        }
        cout<<answer<<endl;
    }
}
