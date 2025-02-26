#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	float a,c,*p;
	a=2.17;
	c=4.4;
	p=&a;
	*p=*p*3;
	*p=*p+c;
	
	cout<<&a<<" "<<&c<<" "<<&p<<" "<<p<<" "<<a<<" "<<c<<" "<<*p;
	
return 0;
}
