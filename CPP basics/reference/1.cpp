#include <iostream>
using namespace std;

int main(int agrc, char *argv[]){
    //same memory different names
    int i =5;
    int &j = i; //creating a reference 
    i++;
    cout<< j<< " "<< i<<endl; //7
    j++;//works with both
    cout<< j<< " "<< i<<endl; //7
    return 0;
}