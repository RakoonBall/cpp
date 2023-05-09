#include <iostream>
using namespace std;

class Employee {
    private:  //we can only access private things from inside only functions inside the class can access them we can't change them from elsewhere
        int a,b,c;
    public: //we can access public things  from anywhere
        int d,e;
        void setData(int a,int b,int c);//Declaration
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};
//this is okay since we are accessing private elements through Employee
void Employee :: setData(int a1, int b1 ,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(int agrc, char *argv[]){
    Employee harry;
    harry.d = 134;
    harry.e = 89;
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}