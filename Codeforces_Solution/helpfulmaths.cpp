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
	vector<char> v;

	for(int i=0;i<s.length();i++){
		if(s[i]!='+'){
			v.push_back(s[i]);
		}
	}

	sort(v.begin(),v.end());

	for(int i=0;i<v.size();i++){
		if(i==(v.size()-1)){
			cout<<v[i];
		}
		else cout<<v[i]<<"+";
	}

    return 0;
    }