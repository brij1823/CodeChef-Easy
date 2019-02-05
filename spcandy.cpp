#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long int n,k;
        cin>>n>>k;
        if(k!=0)
        {
            cout<<n/k<<" "<<n%k<<endl;
        }
        else{
            cout<<"0"<<" "<<n<<endl;
        }

    }
}
