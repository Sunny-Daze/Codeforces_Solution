#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,X=0;
    char s[4];
    cin >> t;
    while(t--){
        cin>>s;   
        if(s[1]=='+')
        X++;
        else
        X--;
    }
    cout << X;
    return 0;
}