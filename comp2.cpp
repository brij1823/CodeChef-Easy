#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int speed,distance,time;
        cin>>speed>>distance>>time;

        if(speed*time>=distance)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
