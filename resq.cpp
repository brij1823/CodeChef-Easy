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
        int limit=cupcakes/2;

        for(int i=2;i<=limit;i++)
        {
            if(cupcakes%i==0)
            {
                int temp=abs(cupcakes/i-i);
                if(temp<min)
                {
                    min=temp;
                }
            }
        }

        cout<<min<<endl;
    }
}
