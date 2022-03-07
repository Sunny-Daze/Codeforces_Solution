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

int t,maxc=0,capacity=0;
cin>>t;
while(t--){
	int a,b;
	cin>>a>>b;

	capacity-=a;
	capacity+=b;
	if(maxc<capacity) maxc=capacity;

}

cout<<maxc;
return 0;
}