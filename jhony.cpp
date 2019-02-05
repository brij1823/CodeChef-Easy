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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int m,min=arr[0];
        int answer=0;
        int temp;
        cin>>m;
        m=arr[m-1];
        for(int i=0;i<n;i++)
        {
            min=arr[i];

            for(int j=i;j<n;j++)
            {
                if(arr[j]<=min)
                {
                    min=arr[j];
                    temp=j;
                }
            }

            if(min==m)
            {
                break;
            }

                int third;
                third=arr[i];
                arr[i]=arr[temp];
                arr[temp]=third;
                answer++;

        }

         cout<<answer+1<<endl;

    }
}


