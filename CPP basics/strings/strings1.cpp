#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string s;
        getline(cin,s);
        cout << s << endl;
    }
    string str1, str2;
    cin>>str1>> str2;
    string str3 = str1 + " " + str2;
    //
    // getline()
    getline(cin, str1);
    cout<< str1 << endl;
    cout << str2 << endl;

    return 0;
}