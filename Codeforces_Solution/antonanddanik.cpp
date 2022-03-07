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
		
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a=0,b=0;

		for(int i=0;i<s.length();i++){
			if(s[i]=='A'){
				a++;
			}
			else{
				b++;
			}
		}

		if(a>b){
			cout<<"Anton";
		}
		else if(a<b){
			cout<<"Danik";
		}
		else{
			cout<<"Friendship";
		}

    return 0;
   }