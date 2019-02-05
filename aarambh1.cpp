#include<iostream>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long long int total;
        cin>>total;
        if(total>=6)
        {
            total=(total+3);
            if(total%3==0){
                 total=total/3;
            cout<<total<<" "<<total-1<<" "<<total-2<<endl;

            }
            else{
                cout<<"0 0 0"<<endl;
            }



        }
        else{
             cout<<"0 0 0"<<endl;

        }


    }
}
