#include<iostream>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int lower_limit=1+n+1;
    long long int upper_limit=n+2*n;
    for(long long int i=0;i<m;i++)
    {
        long long int temp;
        cin>>temp;
        int counter=1;
        int flag=0;
        if(temp>=lower_limit && temp<=upper_limit)
        {
            long long int mid=(lower_limit+upper_limit)/2;
            if(temp<=mid){
                cout<<temp-lower_limit+1<<endl;
            }
            else{
                cout<<upper_limit-temp+1<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}
