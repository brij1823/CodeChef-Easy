#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int particle,limit,chamber;
    cin>>particle>>limit>>chamber;

    int limitation=pow(limit+1,chamber)-1;

    if(particle<limitation)
    {




    int answer[chamber];

    for(int i=0;i<chamber;i++)
    {
        answer[i]=0;
    }
    int counter=0;
    for(int i=0;i<particle;i++)
    {
        if(answer[counter]<limit)
        {
            answer[counter]++;
        }
        else{
            answer[counter]=0;
            int flag=0;
            for(int j=counter+1;j<chamber;j++)
            {
                if(answer[j]>=limit)
                {
                    answer[j]=0;
                }
                else{

                    answer[j]++;
                    break;
                }
            }
        }
    }

    for(int i=0;i<chamber;i++)
    {
        cout<<answer[i];
    }

    }

    else{
         for(int i=0;i<chamber;i++)
    {
        cout<<limit;
    }
    }

}
