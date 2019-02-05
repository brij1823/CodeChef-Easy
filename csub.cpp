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
        int arr[n];
        int answer=0;
        string temp;
        cin>>temp;

        int flag=0;
        for(int i=0;i<n;i++)
        {
            flag=0;
            if(temp[i]=='1')
            {
                answer++;
                for(int j=i+1;j<n;j++)
                    {
                            if(temp[j]=='1'){
                                flag=1;
                                answer++;

                            }
                    }
                    if(flag==0)
                    {
                        break;
                    }
            }
            else{
                 continue;
            }

        }

        cout<<answer<<endl;
    }
}
