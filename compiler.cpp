#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
     long long int counter=0;
        long long int answer=0;
        long long int prefix=0;
        int flag=0;

        string name;
        cin>>name;
        long long int length=name.size();

        for(long long int i=0;i<length;i++)
        {
            if(name[i]=='<')
               {
                   counter++;
                   prefix++;

               }
            else if(name[i]=='>' && counter>0 && prefix!=0)
            {
               answer++;
                counter--;
                prefix--;
                if(prefix==0)
                {
                    flag=1;
                    break;

                }

            }

        }
        if(flag==1)
            cout<<answer*2<<endl;
        else{
            cout<<0<<endl;
        }

    }

}
