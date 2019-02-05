#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int n,queries;
    cin>>n>>queries;
    long long int total_rows[n];
    long long int total_column[n];
    for(long long int i=0;i<n;i++)
    {
        total_rows[i]=0;
        total_column[i]=0;
    }
    for(long long int i=0;i<queries;i++)
    {
        string name;
        long long int number,k;
        cin>>name>>number>>k;
        if(name=="RowAdd")
        {
            total_rows[number]+=k;
        }
        else{
            total_column[number]+=k;
        }
    }

    long long int max=total_rows[0];
    long long int maxy=total_column[0];
    for(long long int i=0;i<n;i++)
    {
        if(total_rows[i]>max)
        {
            max=total_rows[i];
        }
        if(total_column[i]>maxy)
        {
            maxy=total_column[i];
        }
    }
    long long int answer=max+maxy;
    cout<<answer<<endl;
}
