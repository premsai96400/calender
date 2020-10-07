#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int a,c,i,x,z=0,d=1,m=1,y=1901,p;
	cin>>d>>m>>y;
	a=y-1901;
	c=y/4;
	x=a+c;
	if(m==1)
	z=0;
	else if(m==2)
	z=31;
	else if(m==3)
	z=59;
	else if(m==4)
	z=90;
	else if(m==5)
	z=120;
	else if(m==6)
	z=151;
	else if(m==7)
	z=181;
	else if(m==8)
	z=212;
	else if(m==9)
	z=243;
	else if(m==10)
	z=273;
	else if(m==11)
	z=304;
	else if(m==12)
	z=334;
	else
		printf("error");
	p=x+z+d;
	p=p%7;
	return 0;
}
