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
            if(temp[i]=='1')
            {
                answer++;

            }

        }
        n=answer-1;
        answer=answer+((n)*(n+1))/2;

        cout<<answer<<endl;
    }
}

