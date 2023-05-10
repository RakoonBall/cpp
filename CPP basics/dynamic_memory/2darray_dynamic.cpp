#include <iostream>
#include <string>
using namespace std;

int main(int agrc, char *argv[]){
    //for 1d array
    int n; cin>>n;
    int *arr1 = new int[n];
    delete [] arr1;
    //for 2d array
    int row = 2, col = 3;
    int** arr2 = new int*[row]; //this line is different from C
    for(int i=0; i<row;i++){
        arr2[i] = new int[col];
    }
    cout<<"enter elements: ";
    for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"your entered elements are: "<<"\n";
    for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            cout<<arr2[i][j]<< " ";
        }
        cout<<"\n";
    }
    for(int i=0;i<row;i++){ 
        delete[] arr2[i]; //we can put the [] with any type of spacing that works fine
    }
    delete[] arr2; //deleting is also a bit different than C
    return 0;
}