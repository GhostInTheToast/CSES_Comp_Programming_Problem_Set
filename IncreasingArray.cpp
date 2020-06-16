#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
#define ll long long
 
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	ll x[200000];
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x[i];
	}
	
	ll turns = 0;
	
	if(n==1){
		cout << 0;
	}
	else{
		for(int i = 1;i<n; i++){
			if(x[i] < x[i-1]){
				turns += (x[i-1] - x[i]);
				x[i] += (x[i-1] - x[i]);
			}
		}
			cout << turns;
	}
}
