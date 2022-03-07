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
	unordered_map<char,int> up;

	for(int i=0;s[i]!='\0';i++){
		up[s[i]]++;
	}

	int n=up.size();

	if(n%2!=0){
		cout<<"IGNORE HIM!\n";
	}
	else{
		cout<<"CHAT WITH HER!\n";
	}

    return 0;
    }