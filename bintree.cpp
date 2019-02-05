#include<iostream>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long long int initial,ending;
        cin>>initial>>ending;
        int a_counter=0,b_counter=0;
        while(initial!=ending)
        {
            if(initial>ending)
            {
                initial=initial/2;
                a_counter++;
            }
            else{
                ending=ending/2;
                b_counter++;
            }
        }
        long long int answer=a_counter+b_counter;
        cout<<answer<<endl;
    }
}
