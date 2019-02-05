#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=0;
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int side1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    int side2=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    int side3=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    cout<<sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    cout<<side1<<" "<<side2<<" "<<side3;

}
