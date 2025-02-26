#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b,c,d,*p,*q,*w,*e;
	
	cout<<"Vediti a: ";
	cin>>a;
	cout<<"Vediti b: ";
	cin>>b;
	cout<<"Vediti c: ";
	cin>>c;
	cout<<"Vediti d: ";
	cin>>d;
	
	
	p=&a;
	q=&b;
	w=&c;
	e=&d;
	
	cout<<"seredne znacenia"<<" "<<(*p+*q+*w+*e)/4<<endl;
	if(*p>*q and *p>*w and *p>*e)
	{
		if(*q<*w and *q<*e)
		{
			cout<<*w<<" "<<*e;
		}
		if(*w<*q and *w<*e)
		{
			cout<<*q<<" "<<*e;
		}
		else
		{
			cout<<*q<<" "<<*w;
		}
	}
	if(*q>*p and *q>*w and *q>*e)
	{
		if(*p<*w and *p<*e)
		{
			cout<<*w<<" "<<*e;
		}
		if(*w<*p and *w<*e)
		{
			cout<<*p<<" "<<*e;
		}
		else
		{
			cout<<*p<<" "<<*w;
		}
	}
	if(*w>*q and *w>*p and *w>*e)
	{
		if(*q<*p and *q<*e)
		{
			cout<<*p<<" "<<*e;
		}
		if(*p<*q and *p<*e)
		{
			cout<<*q<<" "<<*e;
		}
		else
		{
			cout<<*q<<" "<<*p;
		}
	}
	if(*e>*q and *e>*w and *e>*p)
	{
		if(*q<*w and *q<*p)
		{
			cout<<*w<<" "<<*p;
		}
		if(*w<*q and *w<*p)
		{
			cout<<*q<<" "<<*p;
		}
		else
		{
			cout<<*q<<" "<<*w;
		}
	}
return 0;
}
