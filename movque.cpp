#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n,answer;
        cin>>n;
        double temp=log(n)/log(2);
        if(temp-int(temp)==0)
        {
            n=ceil(temp);
            answer=pow(2,n);
            cout<<answer<<endl;
        }
        else{
            n=ceil(temp);
            answer=pow(2,n-1);
            cout<<answer<<endl;
        }

    }
}
