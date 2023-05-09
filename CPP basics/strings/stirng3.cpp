#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n;
    cin>>n;
    a[11]; // segmentation fault error when we are trying to access a memory location that we haven't defined 
    cout << a[11];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i=0; i<n;i++){
        sum+=a[i];
        cout<<sum;
    }


    return 0;
}