#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
#define ll long long
 
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//int arr[] = {2,1,3,5,4};
	//int size = sizeof(arr)/sizeof(arr[0]);
	//sort(arr, arr+size);
	//for(int x:arr) {
	//	cout << x << " ";
	//}
	 
	ll n, a, ar[1000000];
	cin >> n;
	a = n-1;
	
	for(ll i = 0; i<a+1; i++) {
		cin >> ar[i];
	}
	
	sort(ar, ar+a);
	
	if(ar[0] != 1){
		cout << "1";
	}
	else{
		for (ll i = 0; i<a+1; i++){
				if(ar[i] != i+1){
					cout << i+1;
					break;
				}
		}
	}
}
