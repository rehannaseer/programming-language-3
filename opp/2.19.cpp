#include<iostream>
using namespace std;
int main()
{
	int a,b,c,smallest,largest;
	cout<<"Enter Three numbers:\n";
	cin>>a>>b>>c;
	largest=a;
	if (b>largest)
	largest=b;
	if (c>largest)
	largest=c;
	smallest=a;
	if (b<smallest)
	smallest=b;
	if (c<smallest)
	smallest=c;
	cout<<"Sum is:"<<a+b+c;
	cout<<"\nAverage is:"<<(a+b+c)/3;
	cout<<"\nProduct is:"<<a*b*c;
	cout<<"\nSmallest number is:"<<smallest;
	cout<<"\nLargest number is:"<<largest;	
}
