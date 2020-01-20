#include <bits/stdc++.h> 
using namespace std;
int a(int n);
int main()
{
	int n;
	cin>>n;
    cout<<a(n)<<endl;
	
	return 0;
 } 
 
 int a(int n)
 {
 	if ( n == 1)
    return 1;
	if ( n == 2)
	return 2;  
	int first = 1;    
	int second = 2;    
 	for (int i = 3; i <= n; i++)
	{        
	  int third = first + second;      
	  first = second;
	  second = third;    
	}    
	return second;
 }
