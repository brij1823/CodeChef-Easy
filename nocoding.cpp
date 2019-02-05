#include<iostream>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
       long long  int n,k;
        cin>>n>>k;
       long long int num[n];
       int checker=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]%2!=0)
                checker=1;
        }
       if(checker==0 && k==0)
       {
           cout<<"NO"<<endl;
       }
       else{


       long long int counter=0;
        long long int flag=0;
        for(long long int i=0;i<n;i++)
        {
            if(num[i]%2==0)
            {
                counter++;
                if(counter>=k)
                {
                    flag=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else{
                counter=0;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }

       }
    }
}
