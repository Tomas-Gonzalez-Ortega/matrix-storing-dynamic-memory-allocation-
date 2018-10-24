//
//  main.cpp
//  lab03Challenge
//
//  Created by Tom Nuss on 2017-09-28.
//  Copyright © 2017 Tomas Gonzalez. All rights reserved.
//  Write a program to store a matrix into memory and then prints an specific element

#include <iostream>
using namespace std;
const int ROW_SIZE = 5;
const int COLUMN_SIZE = 5;
int matrix[ROW_SIZE][COLUMN_SIZE];

int main() {
    for (int row = 0; row < ROW_SIZE; row++) { // for each row we have several columns
        for (int column = 0; column < COLUMN_SIZE; column++) {
            matrix[row][column] = rand() % 100;
        }
    }
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int column = 0; column < COLUMN_SIZE; column++) {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    } 
    system("PAUSE");
    return 0;
}
 /*
  Another option - Static allocation, waste of memory because there is tons of memory allocated for indexes that are never used
  int main() {
      int rows, cols;
      cin >> rows >> cols;
  
      for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
              cin >> matrix[i][j];
          }
      }
  
      int rowIndex, colIndex;
      cin >> rowIndex >> colIndex;
      cout << matrix[rowIndex][colIndex];
  
      system("PAUSE");
      return 0;
  }
  */

/*
 Another option - With Dynamic Memory allocation,
 
 cout << "Enter the size of the array: "; int size;
 cin >> size;
 int * list = new int[size];
 
 
 
 
 
 int main() {
 int rows, cols;
 cin >> rows >> cols;
 
 new int[rows*cols]; // you will be given 1 pointer, the start of were this is gonna be allocated
 
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 cin >> matrix[i][j];
 }
 }
 
 int rowIndex, colIndex;
 cin >> rowIndex >> colIndex;
 cout << matrix[rowIndex][colIndex];
 
 system("PAUSE");
 return 0;
 }
 */
