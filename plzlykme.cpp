#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int L,D,S,C;
        cin>>L>>D>>S>>C;
        if(S*pow(C+1,D-1)>=L)
        {
            cout<<"ALIVE AND KICKING"<<endl;
        }
        else{
            cout<<"DEAD AND ROTTING"<<endl;
        }


    }
}
