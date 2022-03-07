#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,p,v,t,s=0;
    cin >> a;
    while(a--){
        cin >> p >> v >> t;
        if((p==1&&v==1)||(p==1&&t==1)||(v==1&&t==1))
        s++;
        }
        cout << s;
    return 0;
}