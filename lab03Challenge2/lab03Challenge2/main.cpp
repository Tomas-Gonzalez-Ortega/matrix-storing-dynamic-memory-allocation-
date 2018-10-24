//
//  main.cpp
//  lab03Challenge2
//
//  Created by Tom Nuss on 2017-09-28.
//  Copyright © 2017 Tomas Gonzalez. All rights reserved.
//  We do Dynamic memory allocation for efficiency reasons

#include <iostream>
using namespace std;
int *matrix; // matrix here will be only a pointer, an address

int main() {
    int rows, cols;
    cin >> rows >> cols;

    matrix = new int[rows * cols]; // this request an address of rows*columns amount of memory for allocation

    // It may be more convenient row by row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[(i - 1) * cols + j]; // needed mapping for using single index
        }
    }

    int rowIndex, colIndex;
    cin >> rowIndex >> colIndex;
    cout << matrix[rowIndex][colIndex];

    system("PAUSE");
    delete []matrix; // flush the allocated memory
    return 0;
}

// ((i - 1) * cols) + j - 1 if the count started from 1
