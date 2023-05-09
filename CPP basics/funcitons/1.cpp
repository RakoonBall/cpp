#include <bits/stdc++.h>
using namespace std;

void printHello(){
    cout<<"hello world "<<endl;
}

int sum(int a, int b){
    return a+b;
}

int main(){
    printHello();
    cout<< sum(4,5)<<endl;
    int n;
    cin >> n;
    while(n){
        int digit_sum =  digit_sum + n%10;
        n/=10;
    }
    cout<< digit_sum + digit_sum<<endl;
    return 0;
}