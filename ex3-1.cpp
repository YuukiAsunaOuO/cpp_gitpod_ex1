#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(void)
{
	int a;
	long int b;
	long long int c;
	double e;
	long double f;
	char cc[]="this is c c++ programing class , taiwan high school";
	printf("size of char = %zu bytes \n", sizeof(char));
	printf("size of int = %zu bytes \n", sizeof(a));
	printf("size of long int = %zu bytes\n", sizeof(b));
	printf("size of long long int = %zu bytes\n", sizeof(c));
	printf("size of double = %zu bytes\n", sizeof(e));
	printf("size of long double = %zu bytes\n", sizeof(f));
	printf("size of c string = %d bytes\n", sizeof(cc)/sizeof(char));
}
