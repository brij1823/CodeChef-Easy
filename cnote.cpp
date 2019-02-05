#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int pages[n],cost[n];
        int required_pages=x-y;

        for(int i=0;i<n;i++)
        {
            cin>>pages[i]>>cost[i];
        }
        if(y>=x)
        {
            cout<<"LuckyChef"<<endl;
        }
        else{
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(cost[i]<=k)
                {
                    if(pages[i]>=required_pages)
                    {
                        flag=1;
                        cout<<"LuckyChef"<<endl;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                 cout<<"UnluckyChef"<<endl;
            }
        }

    }
}
