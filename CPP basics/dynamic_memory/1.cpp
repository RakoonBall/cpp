#include <iostream>
using namespace std;

int main(int agrc, char *argv[]){
    int * p = new int ; //alloacates memory and returns the memory location as well 
    *p = 5;
    delete p;
    p = new int(10);

    return 0;   
}