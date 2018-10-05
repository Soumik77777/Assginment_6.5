#include<iostream>
using namespace std;
//taking input
int input()
{
    int b;
    cout<<"Enter the no of pair of shoes sold per week";
    cin>>b;
    return b;
}
// Salary Option_1
double optn_1(int b)
{
    double t=600;
    return t;
}
// Salary Option_2
double optn_2(int b)
{
    double t=0;
    int a=40;
    t=(7.00*a)+(0.1*(b*225));
    return t;
}
// Salary Option_3
double optn_3(int b)
{
    double t;
    t=(0.2*(b*225))+(20*b);
    return t;
}
int main()
{
    int n=input();
    //Finding the best salary
    double a=optn_1(n);
    double b=optn_2(n);
    double c=optn_3(n);
    double max;
	if(a>b&&a>c)
	{
		max=a;
	}
	if(b>a&&b>c)
	{
		max=b;
	}
	if(c>a&&c>b)
	{
		max=c;
	}
	cout<<"The best salary is";
	cin>>max;
}
   
    














    
    
















