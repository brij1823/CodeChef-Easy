#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int cupcakes;
        cin>>cupcakes;
        int min=cupcakes-1;
        int limit=sqrt(cupcakes);

        for(int i=limit;i>=1;i--)
        {
            if(cupcakes%i==0)
            {
                int temp=abs(cupcakes/i-i);
                cout<<temp;
                break;
            }
        }

    }
}

