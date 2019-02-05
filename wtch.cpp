#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n,answer=0;
        string number;
        cin>>n;
        cin>>number;
        long long int length=number.size();
        long long int counter=0;
      if(n>=3){
        if(number[1]!='1' && number[0]!='1')
        {

            answer++;
        }
        if(number[length-2]!='1' && number[length-1]!='1')
        {
            answer++;
        }
        for(long long int i=1;i<=length-2;i++)
        {
            if(number[i]=='0')
            {
                counter++;
            }
            else{
                if(counter%2==0 && counter!=0)
                {
                    counter--;
                    answer=answer+counter/2;
                }
                else{
                    answer=answer+counter/2;
                }
                counter=0;
            }
        }

             if(counter%2==0 && counter!=0)
                {
                    counter--;
                    answer=answer+counter/2;
                }
                else{
                    answer=answer+counter/2;
                }

        cout<<answer<<endl;
      }
      else{
        if(n==1 && number[0]=='0')
        {
            cout<<1<<endl;
        }
        else if(n==1 && number[0]=='1'){
            cout<<0<<endl;
        }
        else if(n==2 && (number[0]=='0' && number[1]=='0'))
        {
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
      }

    }
}
