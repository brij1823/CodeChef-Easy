#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,b;
    string s="";
    cin>>a>>b;
    int c=a-b;
    int dup=c;

    int len=0;
    while(dup!=0)
    {
        dup=dup/10;
        len++;
    }
    int arr[len];
    for(int i=len-1;i>=0;i--)
    {
        int single=c%10;
        arr[i]=single;
        c=c/10;
    }


     for(int i=0;i<len;i++)
    {
       if(i==0)
       {
           if(arr[i]==1)
           {
               arr[i]=2;
           }
           else{
            arr[i]=1;
           }
       }
    }

     for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }




}
