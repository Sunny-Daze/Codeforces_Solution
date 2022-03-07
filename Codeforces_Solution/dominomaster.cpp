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

int t;
cin>>t;
while(t--){
	int n;
	string s,ans;
	cin>>n>>s;

	for(int i=0;i<n;i++){
		if(s[i]=='L'){
			ans[i]='L';
			ans+=ans[i];
		}
		else if(s[i]=='R'){
			ans[i]='R';
			ans+=ans[i];
		}
		else if(s[i]=='U'){
			ans[i]='D';
			ans+=ans[i];
		}
		else if(s[i]=='D'){
			ans[i]='U';
			ans+=ans[i];
		}
	}
	cout<<ans<<'\n';
}


return 0;
}