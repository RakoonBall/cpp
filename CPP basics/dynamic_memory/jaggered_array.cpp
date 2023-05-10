#include<iostream>

int main() {
    int** jaggedArray; // declare the jagged array pointer
    int numRows, numCols;
    
    std::cout << "Enter the number of rows: ";
    std::cin >> numRows;
    
    jaggedArray = new int*[numRows]; // allocate the outer array
    
    for (int i = 0; i < numRows; i++) {
        std::cout << "Enter the number of columns for row " << i << ": ";
        std::cin >> numCols;
        
        jaggedArray[i] = new int[numCols]; // allocate the inner array
    }
    
    // Now you can use the jaggedArray just like any other 2D array
    // For example, you can set values like this:
    jaggedArray[0][0] = 1;
    jaggedArray[0][1] = 2;
    jaggedArray[1][0] = 3;
    
    // Don't forget to free the memory when you're done
    for (int i = 0; i < numRows; i++) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;
    
    return 0;
}
