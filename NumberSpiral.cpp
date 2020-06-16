// Coded by: Bilal Shahid Mahmood
// github: GhostInTheToast

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define ll long long

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t, y, x;
	ll number;
	
	cin >> t;
	
	for(ll i = 0; i<t; i++) {
		cin >> y >> x;
		
		if(x <= y) {
			if(y%2 == 0){	
				number = (y*y) - x + 1;
			}
			else{
				number = ((y-1)*(y-1) +1) + x - 1;
			}
		}
		else{
			if(x%2 == 1) {
				number = (x*x) - y + 1; 
			}
			else{
				number = ((x-1)*(x-1) +1) + y - 1;
			}
		}
	cout << number << endl;
	}
}
