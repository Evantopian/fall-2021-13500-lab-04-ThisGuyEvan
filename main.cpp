/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 04
 
Compliation of test cases for Lab 04 Tasks.
*/
 
#include <iostream>
#include "figures.h"
#include "checkerboards.h"


int main(){

  std::cout << "Task A:\n";
  std::cout << box(5, 10);
  std::cout << box(10, 5);
  std::cout << box(6, 6);


  std::cout << "\nTask B:\n";
  std::cout << checkerboard(11, 6);
  std::cout << checkerboard(14, 8);
  std::cout << checkerboard(6, 3);


  std::cout << "\nTask C:\n";
  std::cout << cross(4);
  std::cout << cross(8);
  std::cout << cross(12);


  std::cout << "\nTask D:\n";
  std::cout << lowerTriangle(3);
  std::cout << lowerTriangle(5);
  std::cout << lowerTriangle(9);

  std::cout << "\nTask E:\n";
  std::cout << upperTriangle(3);
  std::cout << upperTriangle(5);
  std::cout << upperTriangle(9);


  std::cout << "\nTask F:\n";
  std::cout << upsideDownTrapTri(12, 5);
  std::cout << upsideDownTrapTri(5, 3);
  std::cout << upsideDownTrapTri(12, 7);


}
