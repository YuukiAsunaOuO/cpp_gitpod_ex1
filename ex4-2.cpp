#include<iostream>
using namespace std;
int main(void)
{
	int r;
	cin>>r;
	if(r>=0)
	{
		cout<<"圓面積："<<(r*r)*3.14<<endl<<"圓周長："<<(r*2)*3.14;
	}
	else
	{
		cout<<"半徑不能小於0";
	}
}
