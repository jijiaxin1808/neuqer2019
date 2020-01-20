#include<iostream>
using namespace std;
int jump(int n);
int main()
{
	int n,x; 
	cin>>n;
	x=jump(n);
	cout<<x;
}
int jump(int n)
{
	if(n<0) return 0;
	if(n==0) return 1;
	if(n>0) return jump(n-1)+jump(n-2);
}
