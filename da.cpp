#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int max(long long int a,long long int b)
{
    return (a>b)?a:b;
}
void LCS(string s1,string s2,long long int n1,long long int n2)
{
    int lcs[n2+1][n1+1];
    for(int i=0;i<=n2;i++)
    {
        for(int j=0;j<=n1;j++)
        {
            if(i==0||j==0)
                lcs[i][j]=0;
            else if(s2[i-1]==s1[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }
    char a[100];
    int x=0;
    for(int i=n2;i>=0;i--)
    {
        for(int j=n1;j>=0;j--)
        {
            if(s2[i-1]==s1[j-1])
            {
                a[x]=s2[i-1];
                x++;
                i=i-1;
            }
            else{
                int a=lcs[i][j-1];
                int b=lcs[i-1][j];
                if(b>=a){
                    i=i-1;
                    j=j+1;
                }
            }
        }
    }
    if(x-1>=100)
    {
        x=101;
    }
    cout<<x-1<<endl;

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
         string s1,s2;
  cin>>s1;
  cin>>s2;
  long long int n1=s1.length();
  long long int n2=s2.length();
  LCS(s1,s2,n1,n2);

    }

}
