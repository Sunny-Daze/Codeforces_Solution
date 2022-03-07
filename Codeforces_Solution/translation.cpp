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
		
		string s,t,d;
		cin>>s>>t;

		for(int i=s.length()-1;i>=0;i--){
			d=d+s[i];
		}
		if(d==t){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
    return 0;
   }