#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int input,i=5,counter=0;
        cin>>input;
        while(input>=i)
        {
            counter=counter+input/i;
            i=i*5;
        }
        cout<<counter<<endl;


        n--;
    }
}
