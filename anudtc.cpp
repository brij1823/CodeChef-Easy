#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="";
        int a=0,b=0,c=0;
        int n;
        cin>>n;
        if(360%n==0)
        {
            s=s+"y ";
        }
        else{
            s=s+"n ";
        }
        if(n<=360)
        {
            s=s+"y ";
        }
        else{
            s=s+"n ";
        }
        if(n*(n+1)/2 <= 360)
        {
            s=s+"y ";
        }
        else{
            s=s+"n ";
        }
        cout<<s<<endl;

    }

}
