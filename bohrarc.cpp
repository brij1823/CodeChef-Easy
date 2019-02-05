#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(long double num)
{
    long double ans=sqrt(num);
    return ((ans - floor(ans)) == 0);
}

bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
}
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long double chip;
        cin>>chip;

        if(chip<=15)
        {
            cout<<"No"<<endl;
        }
        else{
            int cmp=sqrt(chip);
            if(isPerfectSquare(chip) && !isPrime(cmp))
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }


    }
}
