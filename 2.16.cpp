#include<iostream>
using namespace std;
int main()
{
	float a,b,sum,pro,diff,quo;
	cout<<"Enter First Number :";
	cin>>a;
	cout<<"Enter Second Number :";
	cin>>b;
	sum=a+b;
	pro=a*b;
	diff=a-b;
	quo=a/b;
	cout<<"The Number Are ("<<a<<") and ("<<b<<") \n";
	cout<<"There sum is ="<<sum<<"\n";
	cout<<"There product is ="<<pro<<"\n";
	cout<<"There Difference is ="<<diff<<"\n";
	cout<<"There quotient is ="<<quo<<"\n";
	return 0;
}
