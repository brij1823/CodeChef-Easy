#include<iostream>
using namespace std;

void swap(long long int* a, long long int* b,long long int *c,long long int *d)
{
    long long int t = *a;
    long long int t2=*c;
    *a = *b;
    *c=*d;
    *b = t;
    *d=t2;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
long long int partition (long long int arrival[],long long int departure[], long long int low, long long int high)
{
    long long int pivot = arrival[high];    // pivot
    long long int i = (low - 1);  // Index of smaller element

    for (long long int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arrival[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arrival[i],&arrival[j],&departure[i],&departure[j]);
        }
    }
    swap(&arrival[i + 1], &arrival[high],&departure[i + 1],&departure[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(long long int arrival[],long long int departure[], long long int low, long long int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        long long int pi = partition(arrival,departure, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arrival,departure, low, pi - 1);
        quickSort(arrival,departure, pi + 1, high);
    }
}

int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long long int guest;
        cin>>guest;
        long long int arrival[guest],departure[guest];
        for(long long int i=0;i<guest;i++){
            cin>>arrival[i];
        }

        for(long long int j=0;j<guest;j++)
        {
            cin>>departure[j];
        }

        quickSort(arrival,departure,0,guest-1);

        long long int chairs=1;
        long long int hold[guest];
        long long int x=0;
        for(long long int i=1;i<guest;i++)
        {
            long long int flag=0;
            if(departure[i-1]>arrival[i])
            {
                hold[x]=departure[i-1];
                x++;

                for(long long int j=0;j<x-1;j++)
                {
                    if(arrival[i]>=hold[j])
                    {
                        hold[j]=0;
                        flag=1;
                        break;
                    }

                }
                if(flag==0)
                {
                    chairs++;
                }
            }
            else{

            }
        }
        cout<<chairs<<endl;

    }
}
