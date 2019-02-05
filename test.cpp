// Date : 18/01/2019
// https://www.codechef.com/problems/TEST

#include<iostream>
using namespace std;
int main()
{
    int flag=0,input;
    int counter=0;
    int x=0;
    while(flag==0)
    {
        cin>>input;
        if(input==42)
        {
            flag=1;
        }
        else{
            cout<<input<<endl;
        }
    }
    return 0;

}
