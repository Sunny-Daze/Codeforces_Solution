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

string s;
cin>>s;

int lc=0,uc=0;
for(int i=0;i<s.length();i++){
	if(s[i]>=65&&s[i]<=90) uc++;
	else lc++;
}

if(lc<uc){
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
	cout<<s;
}
else{
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	cout<<s;
}
return 0;
}