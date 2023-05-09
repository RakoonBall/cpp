#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x){
    int l=0;
    int r = n-1;
    int index1, index2;
    int dif = INT_MAX;
    //two pointer algorithm
    while(l<r){
        int sum = arr[l] + arr[r];
        if(abs(sum-x)<dif){
            index1 = l;
            index2 = r;
            dif = abs(sum-x);
        }else if(sum>x){
            r--;
        } else{
            l++;
        }
    }
    cout<<"("<<arr[index1]<<" "<<arr[index2]<<") = "<<arr[index1]+arr[index2]<<endl;
}

int main(){
    int arr[5] = {1,4, 2 ,23 ,12};
    solve(arr, 5, 10);
    return 0;
}