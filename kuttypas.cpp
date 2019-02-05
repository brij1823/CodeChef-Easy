#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    string names[test];
    for(long long int i=0;i<test;i++)
    {
        cin>>names[i];
    }
    for(long long int i=0;i<test;i++)
    {
        long long int answer=0;
        string parent=names[i];
        for(long long int j=0;j<test;j++)
        {
            string child=names[j];
            if(parent.size()<child.size())
            {
                long long int k;
                for(k=0;k<parent.size();k++)
                {
                    if(parent[k]!=child[k])
                    {
                        break;
                    }
                }
                if(k==parent.size())
                {
                    answer++;
                }
            }
        }
        cout<<answer<<endl;
    }
}
