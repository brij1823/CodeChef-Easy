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
        cout<<n+n*(n+1)/2<<endl;
    }
}
