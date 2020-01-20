#include<bits/stdc++.h> 
#include<string>
using namespace std;
int ans = 0;
#define MAXN 0xfffffff
void count(int n) {
	if (n >= 1)  count(n - 1);
	if (n >= 2)  count(n - 2);
	if (n == 0)  ans++;
}

int main() {
	int n;
	printf("ÇëÊäÈëÌ¨½×½×Êý:");
	cin >> n;
	count(n);
	cout << ans;
	return 0;
}
