#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=n-i;j=j+1)
        {
        	continue;
        }
        for(int j=1;j<=2*i-1;j=j+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
