#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    //taking Input
    cout<<"Enter a number";
    cin>>n;
    //Checking whether it is a special number
    double r=sqrt(n);
    int i=0,j=0;
    if(((int)r)==r)
    {
        i=1;
    }
    int k=1;
    int s=0;
    for(int i=1;i<=k;i++)
    {
        s=s+i;
        if(s==n)
        {
            j=1;
            break;
        }
        else if(k<=n)
        {
            k++;
        }
    }
    //Output
    if(i==1 && j==1)
    {
        cout<<"It is a number as you desire";
    }
}
    
