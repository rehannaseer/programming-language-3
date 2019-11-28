#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"Enter First number:";
	cin>>a;
	cout<<"Enter Second number:";
	cin>>b;
	if (a==b)
	cout<<"Numbers are equal";
	if (a<b)
	cout<<b<<"\tis greater";
	if (a>b)
	cout<<a<<"\tis greater";
}
