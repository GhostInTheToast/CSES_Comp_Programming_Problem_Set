#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
#define ll long long
 
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s;
	int n;
	
	cin >> s;
	n = s.size();
		
	int current = 1;
	int max = 1;
	
	for(int i = 1; i<n; i++){
		int last = i-1;
 
		if(s[last] == s[i]) {
			current++;
			
			if(current > max) {
				max = current;
			}
		}
		else{
			current = 1;
		}
	}
	cout << max;
}
