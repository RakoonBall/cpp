#include <iostream>
using namespace std;

class binary{
    string s;
public: 
    void read(void);
    void chk_bin(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"the number is not binary";
        }
    }
}

int main(int agrc, char *argv[]){
    //class --> extention of structures in c
    //structures had limitations
    /*members are public  no methods*/
    binary b;
    b.read();
    b.chk_bin();
    
    return 0;
}