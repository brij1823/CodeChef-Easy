#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
    }
    int rhs=(n*(n+1))/2;

    if(sum>=rhs){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
