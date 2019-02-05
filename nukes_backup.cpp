#include<iostream>
using namespace std;
int main()
{
    int particle,limit,chamber;

    cin>>particle>>limit>>chamber;
    int answer[chamber];

    for(int i=0;i<chamber;i++)
    {

        answer[i]=0;
    }
    int counter=0;
    int copy_chamber=chamber;
    while(chamber--)
    {

        answer[counter]=particle%(limit+1);
        particle=particle/(limit+1);
        counter++;
    }

    for(int i=0;i<copy_chamber;i++)
    {
        cout<<answer[i]<<" ";
    }


}
