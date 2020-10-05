#include<iostream>
using namespace std;
int main()
{
	int a,c,i,x,z=0,d=1,m=1,y=1901,p;
	cin>>d>>m>>y;
	// Contributer's code //
	a=y-1901;
	c=y/4;
	x=a+c;
	if(m==1)
	z=0;
	if(m==2)
	z=31;
	if(m==3)
	z=59;
	if(m==4)
	z=90;
	if(m==5)
	z=120;
	if(m==6)
	z=151;
	if(m==7)
	z=181;
	if(m==8)
	z=212;
	if(m==9)
	z=243;
	if(m==10)
	z=273;
	if(m==11)
	z=304;
	if(m==12)
	z=334;
	p=x+z+d;
	p=p%7;
}
