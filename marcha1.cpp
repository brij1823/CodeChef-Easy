#include<iostream>
using namespace std;
void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int m,n;
        cin>>m>>n;
        int notes[m];
        int counter=0;
        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            if(temp<=n)
            {
                notes[counter]=temp;
                counter++;
            }
        }

        quick_sort(notes,0,counter-1);

        cout<<endl<<endl<<"Notes"<<endl;
        for(int i=0;i<counter;i++)
        {
            cout<<notes[i]<<endl;
        }

        cout<<endl;
        int flag=0,sum=0;
        for(int i=0;i<counter;i++)
        {

            if(notes[i]==n)
            {
                flag=1;
                cout<<"Yes"<<endl;
                break;
            }
            sum=0;
            for(int j=0;j<=i;j++)
            {
                sum=sum+notes[j];
            }
            int storage=sum;
            for(int k=i+1;k<counter;k++)
            {
                sum=sum+notes[k];
                if(sum==n)
                {
                    flag=1;
                    cout<<"Yes"<<endl;
                    break;

                }
                sum=storage;
            }

            if(flag==1)
            {
                break;
            }

        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }



    }
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
