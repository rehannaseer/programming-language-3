#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,largest,smallest;
	cout<<"Enter five numbers:\n";
	cin>>a>>b>>c>>d>>e;
	largest=a;
	smallest=a;
	if (a>largest)
	largest=a;
	if (b>largest)
	largest=b;
	if (c>largest)
	largest=c;
	if (d>largest)
	largest=d;
	if (e>largest)
	largest=e;
	if (a<smallest)
	smallest=a;
	if (b<smallest)
	smallest=b;
	if (c<smallest)
	smallest=c;
	if (d<smallest)
	smallest=d;
	if (e<smallest)
	smallest=e;
	cout<<"Largest number is:"<<largest<<"\nSmallest number is:"<<smallest;
}
