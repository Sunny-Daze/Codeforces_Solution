#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a,ans1,ans2;
    cin >> n >> m >> a;

    if(n%a==0){
        ans1 = n/a;
    }
    else{
        ans1 = (n/a)+1;
    }

    
    if(m%a==0){
        ans2 = m/a;
    }
    else{
        ans2 = (m/a)+1;
    }

    cout << ans1*ans2;

    return 0;
}