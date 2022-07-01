#include<iostream>
using namespace std;
class rectangle
{
	public:
	int a;
	int b;
	int area();
};
int rectangle::area()
{
	return a*b;
}
int main(void)
{
	int x,y;
 	rectangle ans;
 	cin>>x>>y;
 	ans.a=x;
 	ans.b=y;
 	cout<<ans.area()<<endl;
}
