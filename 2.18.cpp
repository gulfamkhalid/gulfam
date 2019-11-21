#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter First Number :";
	cin>>a;
	cout<<"Enter Second Number :";
	cin>>b;
	if(a>b)
	{
		cout<<a<<" is larger. ";
	}
	else if(b>a)
	{
		cout<<b<<" Is Larger. ";
	}
	else if (a=b)
	{
		cout<<"Both Numbers are Equal";
	}
	else 
	cout<<"Enter Valid Numbers";
	return 0;
}
