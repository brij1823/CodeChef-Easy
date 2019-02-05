#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
       long long int n;
        cin>>n;
       long long int segments[n];
       long long int location=0;
        long long int max=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>segments[i];

            if(i==0)
            {
                max=segments[i];
            }
            else{
                if(segments[i]>=max)
                {
                    max=segments[i];
                    location=i;
                }
            }
        }

        cout<<max+location<<endl;

    }
}
