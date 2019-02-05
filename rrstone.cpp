#include<iostream>
using namespace std;
int main()
{
    long long int n,k,i,min_index=0;
    cin>>n>>k;

    long long int stones[n];

    for(i=0;i<n;i++)
    {
        cin>>stones[i];
    }
     if(k!=0){
    long long int max=stones[0];
    long long int min=stones[0];
    for(i=0;i<n;i++)
    {
        if(stones[i]>max)
        {
            max=stones[i];
        }
        if(stones[i]<min)
        {
            min=stones[i];
            min_index=i;
        }
    }

    long long int first[n],second[n];

    for(i=0;i<n;i++)
    {
        first[i]=max-stones[i];
    }
    min=first[min_index];
    for(i=0;i<n;i++)
    {
        second[i]=min-first[i];
    }

    if(k%2)
    {
        for(i=0;i<n-1;i++)
            {
                cout<<first[i]<<" ";
            }
            cout<<first[i];

    }
    else{
            for(i=0;i<n-1;i++)
            {
                cout<<second[i]<<" ";
            }
            cout<<second[i];
    }

    }
    else{
        for(i=0;i<n-1;i++)
        {
            cout<<stones[i]<<" ";
        }
        cout<<stones[i];


    }
}
