#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int number_notes,cost;
        cin>>number_notes>>cost;
        int amount_notes[number_notes];

        int sum=0;
        for(int i=0;i<number_notes;i++)
        {
            cin>>amount_notes[i];
            sum=sum+amount_notes[i];
        }
        int remains=sum%cost;
        int flag=0;
        for(int i=0;i<number_notes;i++)
        {
            if(amount_notes[i]<=remains){
                flag=1;
                cout<<-1<<endl;
                break;
            }
        }

        if(flag==0)
        {
            cout<<sum/cost<<endl;
        }
    }
}
