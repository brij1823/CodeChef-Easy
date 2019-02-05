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
        if(n%4==1)
        {
            cout<<"ALICE"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }

    }

}
