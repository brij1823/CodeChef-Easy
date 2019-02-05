#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int starter,ending;
        cin>>starter>>ending;
        int flag=0;
        for(int i=starter;i<=ending;i++)
        {
            flag=0;
            for(int j=2;j*j<=i/2;j++)
            {
                if(i%j==0)
                {
                   flag=1;
                   break;
                }
            }

            if(flag==0)
            {
                cout<<i<<endl;
            }
        }
    }
}
