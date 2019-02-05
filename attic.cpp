#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string path;
        cin>>path;
        int length=path.size();
        int counter=0;
        int max=0;
        int jump=0;
        for(int i=0;i<length;i++)
        {
            if(path[i]=='.')
            {
                counter++;
            }
            else{
                if(counter>max)
                  {
                      jump++;
                    max=counter;
                  }
                counter=0;
            }
        }
        cout<<jump<<endl;
    }
}
