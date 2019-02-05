#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string code;
        cin>>code;
        long long int length=code.size(),i;
        string answer="";
        for(i=0;i<length;i++)
        {
            int d=code[i]-48;
            if(d<=4)
            {
                d=9-d;
                char temp=d+48;
                answer=answer+temp;
            }
            else{
                char temp=d+48;
                answer=answer+temp;
            }
        }
        cout<<answer<<endl;
    }
}

