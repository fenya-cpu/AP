#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c,*max,*min;
	max=&a;
	min=&a;
	if(*max<b)
	{
		max=&b;
	}
	if(*max<c)
	{
		max=&c;
	}
	if(*min>b)
	{
		min=&b;
	}
	if(*min>c)
	{
		min=&c;
	}
	cout<<"Maksimaline znacenia: "<<max<<endl;
	cout<<"Minimaline znacenia: "<<min<<endl;
	
return 0;
}
