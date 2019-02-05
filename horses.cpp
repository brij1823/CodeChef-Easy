#include<iostream>
using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int number;
        cin>>number;
        int horses[number];
        for(int i=0;i<number;i++)
        {
            cin>>horses[i];
        }

        quick_sort(horses,0,number-1);

        number--;
        int mini=horses[1]-horses[0];
        for(int i=1;i<number;i++)
        {
            int cc;
            cc=horses[i+1]-horses[i];
            if(cc<mini)
            {
                mini=cc;
            }
        }

        cout<<mini<<endl;
    }




    return 0;
}



void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
