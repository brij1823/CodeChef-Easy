#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
 int t,i;
  cin>>t;
 while(t--)
{
int r=0,n=0;
string s;
cin>>s;
for(i=0;i<s.size();i++)
{
	if(s[i]=='<')
	r++;
	else
	r--;
	if(r==0)
	n=i+1;
	else if(r<0)
	break;
}
cout<<n<<endl;
}
     return 0;
}
