#include<iostream>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
    if(n==0||n==1)
    {
        cout<<"yes";
    }
    else{
        if(n%3==0)
        {
            cout<<"yes"<<endl;
        }
        else if((n/3)%2==0)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
