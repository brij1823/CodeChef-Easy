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
        int goals[n];
        for(int i=0;i<n;i++)
        {
            cin>>goals[i];
        }
        int min=goals[0];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(goals[i]<min)
            {
                min=goals[i];
            }
            else if(goals[i]>min && goals[i]-min>k)
            {
                k=goals[i]-min;
            }
        }

        if(k==0)
        {
            cout<<"UNFIT"<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
}
