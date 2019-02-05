#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        int lhs=0,rhs=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(n!=1)
        {
           for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    lhs++;
                }
            }
        }

        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                rhs++;
            }
        }

        if(lhs==rhs)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        }
        else{
            cout<<"YES"<<endl;
        }


    }
}
