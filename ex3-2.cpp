#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<stdio.h>
using namespace std;

int main(void)
{
	int x,m,n,i;
	//int y;
	cout<<"please input x: \n";
	cin>>x;
	//cout<<"please input y: \n";
	//cin>>y;
	/*
		+ - * / %
		++x
		x++
		--x
		x--
		
		x=16
		x>>1
		x>>2
		x<<1
	*/
	//printf("%d + %d = %d \n ",x,y,x+y);
	//cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	//cout<<x<<" + "<<y<<" = "<<(x-1)+y<<endl;
	//printf("%d + %d = %d \n ",--x,y,x+y);
	//cout<<"Hello World"<<endl;
	m=x>>1;
	n=x>>2;
	i=x<<1;
	cout<<m<<endl<<n<<endl<<i<<endl;
}
