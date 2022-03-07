#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
        int ar[n];
        for (int i=0;i<n;i++){
            cin>>ar[i];
        }
        
        int key = ar[k-1];
            int count=0;
            for (int i=0;i<n;i++){
                if(ar[i]>=key && ar[i]>0){
                    count++;
                }
        }
            cout << count;
    return 0;
}