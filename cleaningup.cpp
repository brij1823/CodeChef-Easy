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

        int chef[m/2],assistant[m/2];
        int chef_counter=0,assistant_counter=0;
        for(int i=1;i<=m;i++)
        {
            if(i%2){
                chef[chef_counter]=i;
                chef_counter++;
            }
            else{
                assistant[assistant_counter]=i;
                assistant_counter++;
            }
        }

        int done_work[n];
        for(int i=0;i<n;i++)
        {
            cin>>done_work[i];
        }
         quick_sort(done_work,0,n-1);

        int chef_init=0,assistant_init=0;
        for(int i=0;i<n;i++)
        {
            if(done_work[i]%2)
            {

                for(int j=chef_init;j<chef_counter;j++)
                {
                    if(chef[j]==done_work[i])
                    {
                        chef[j]=0;
                        chef_init=j+1;
                    }
                }
            }
            else{

                for(int j=assistant_init;j<assistant_counter;j++)
                {
                    if(assistant[j]==done_work[i])
                    {
                        assistant[j]=0;
                        assistant_init=j+1;
                    }

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

