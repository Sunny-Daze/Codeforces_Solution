#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int a[],int s){
    bool swapped;
    for(int i=0;i<s-1;i++){
        swapped =false;
        for(int j=0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

void printarray(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }

    bubblesort(a,s);   
    printarray(a,s);
}