#include<iostream>

using namespace std;
int rangeSum(int a, int b)
{
	a=a+b;
	return a;
}
int main()
{    int a,b,c;
	cin>>a;
	cin>>b;
	c=rangeSum(a,b);
	cout<<"a is "<<a<<",b is "<<b<<",sum is "<<c;
	
}