#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int range;

	int* pa=&a;
	int* pb=&b;
	cin>>*pa;
	cin>>*pb;

	int* prange=&range;
	*prange=pb-pa;

	cout<<"Distance a of variables: "<< *prange <<"\n";

	cout<<"Distance in bytes: "<<sizeof(int) * *prange <<"\n";
}