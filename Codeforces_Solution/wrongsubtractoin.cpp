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

	int n,k;
	cin>>n>>k;

	while(k--){
		if(n%10>0) n-=1;
		else n/=10;
	}

	cout<<n<<'\n';
	
return 0;
}