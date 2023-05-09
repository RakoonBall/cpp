#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    for(int i=0; i<v.size(); ++i){
        cout<< v[i] <<" ";
    }

    cout<<endl;
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it !=v.end(); ++it){
        cout <<(*it)<<endl;
    }

    // a vector of pairs
    vector<pair<int,int> > v_p = {{1,2}, {3,4}, {3,4}};
    vector<pair<int,int> > :: iterator it1;
    for(it1=v_p.begin(); it1!= v_p.end(); ++it1){
        // cout<<(*it1).first <<" "<< (*it1).second << endl;
        cout<<it1->first <<" "<< it1->second << endl; //we can also declare a iterator as we do for strutures but only for pairs
    }   
    return 0;
}//clang++ -std=c++11