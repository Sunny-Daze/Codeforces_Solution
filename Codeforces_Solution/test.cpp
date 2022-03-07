#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition2(int a[],int low, int high){
    int i=low-1;
    int pi=high;
    for(int j=low;j<high;j++){
        if(a[j]<a[pi]){
            i++;
            swap(&a[j],&a[i]);
        }
    }
        swap(&a[high],&a[i+1]);
    return(i+1);
}

void quicksort(int a[], int low, int high){
    if(low<high){
        int pi = partition2(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
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

    quicksort(a,0,s-1);   
    printarray(a,s);
}