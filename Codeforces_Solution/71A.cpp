#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n>10){
            char a = s.front();
            char b = s.back();
            cout << a << n-2 << b << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}