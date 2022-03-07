	#include<bits/stdc++.h>
	using namespace std;

	inline void debugMode() {	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	}

	int main(){
		debugMode();
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
	long long n;
	cin>>n;
	int cntr=0;

	while(n){
		if(n%10==4 || n%10==7){
			cntr++;
		}
		n/=10;
	}
		if(cntr==4 || cntr==7){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
    return 0;
   }