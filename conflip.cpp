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
        while(n--)
        {
            long long int initial,num,answer;
            cin>>initial>>num>>answer;

            if(num%2)
            {
                if(initial==answer)
                {
                    cout<<num/2;
                }
                else{
                    cout<<num-num/2;
                }
            }
            else{
                 if(initial==answer)
                {
                    cout<<num-num/2;
                }
                else{
                    cout<<num/2;
                }
            }
            cout<<endl;
        }
    }
}
