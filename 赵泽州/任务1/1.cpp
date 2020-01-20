#include<bits/stdc++.h> 
#include<string>
using namespace std;

int main() {
	
	string str,ans = "";
	printf("ÇëÊäÈë×Ö·û´®:");
	getline(cin, str);
	int tmp = 0;
	for (int i = 0;i<str.length(); i++) {
		if (str[i] == ' ') {
			ans += "%20";
		}
		else ans += str[i];
	}
	cout << ans;
    return 0;
}
