#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string str="zyxwvutsrqponmlkjihgfedcba";
        string a="";

        if(k<=25)
        {
            for(int i=25-k;i<26;i++)
                a=a+str[i];
        }
        else if(k<=50)
        {
            k=k-25;
             for(int i=25-k;i<26;i++)
                a=a+str[i];

            a=a+str;
        }
        else if(k<=75)
        {
            k=k-50;
             for(int i=25-k;i<26;i++)
                a=a+str[i];

            a=a+str+str;
        }
        else if(k<=100)
        {
            k=k-75;
             for(int i=25-k;i<26;i++)
                a=a+str[i];

            a=a+str+str+str;
        }
        cout << a << endl;

    }
    return 0;
}
