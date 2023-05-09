#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello";
    cout << str << endl;
    string str2;
    cin >> str2;
    cout <<str2 << "hello"<<endl;
    // string str2 = "world";
    string result = str + str2; // we can contatenate strings like this in cpp 
    cout << result<<endl; 
    if(str == str2){
        cout << "equal"<<endl;
    }else{
        cout << "Not equal"<<endl;
    }

    return 0;
}