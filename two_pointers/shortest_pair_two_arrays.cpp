#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int arr1[], int n, int m, int x){
    int ind1,ind2, l,r, sum=0;
    l=0, r=m-1;
    int dif = INT_MAX;
    while(l<n && r>=0){
        sum = arr[l]+arr1[r]; // this line is only different 
        if(abs(sum-x)<dif){
            ind1 = l;
            ind2 = r;
            dif = abs(sum - x);
        }else if(sum > x){
            r--;
        }else{
            l++;
        }
    }
    cout<<"("<<arr[ind1]<<" ,"<<arr1[ind2]<< ") = "<<sum<<endl;
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {1,2,3,4,5,7};
    solve(a, b,5,6,10);
    return 0;
}
