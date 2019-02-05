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

        int total_work[m];
        for(int i=1;i<=m;i++)
        {
            total_work[i-1]=i;
        }

        int chef[m/2],assistant[m/2];
        int chef_counter=0,assistant_counter=0;
        int done_work[n];
        for(int i=0;i<n;i++)
        {
            cin>>done_work[i];
        }
         quick_sort(done_work,0,n-1);

        int total_init=0,assistant_init=0;
        for(int i=0;i<n;i++)
        {

                for(int j=total_init;j<m;j++)
                {
                    if(total_work[j]==done_work[i])
                    {
                        total_work[j]=0;
                        total_init=j+1;
                    }
                }


        }


       int counter=1;
       for(int i=0;i<m;i++)
        {
            if(total_work[i]!=0)
            {
                if(counter%2){
                    chef[chef_counter]=total_work[i];
                    chef_counter++;
                    counter++;
                }
                else{
                    assistant[assistant_counter]=total_work[i];
                    assistant_counter++;
                    counter++;
                }
            }
        }

        int flag=0;
        for(int i=0;i<chef_counter;i++)
        {
            if(chef[i]!=0){
                  cout<<chef[i]<<" ";

            }

        }
        cout<<endl;
        for(int i=0;i<assistant_counter;i++)
        {
            if(assistant[i]!=0)
            {

                cout<<assistant[i]<<" ";
            }
        }
        cout<<endl;



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


