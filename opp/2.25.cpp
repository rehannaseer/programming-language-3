#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	if (a%b==0)
	cout<<a<<"\tis multiple of\t"<<b;
	else
	cout<<a<<"\tis not a multiple of\t"<<b;
}
