#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        string building;
        cin>>building;
        int answer=0;
        if(building[0]=='0' && building[1]=='0')
                answer=answer+1;
        if(building[n-1]=='0' && building[n-2]=='0')
                answer=answer+1;

        for(int i=1;i<=n-1;i++)
        {
                if(building[i]=='0' && building[i-1] =='0' && building[i+1]=='0' )
            answer=answer+1;

        }
        if(n==1 && building[0]=='0')
        {
           answer+=1;
        }
            cout<<answer<<endl;
    }
}
