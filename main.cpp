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
  box(5, 10);
  box(10, 5);
  box(6, 6);


  std::cout << "\nTask B:\n";
  std::cout << checkerboard(11, 6);
  std::cout << checkerboard(14, 8);
  std::cout << checkerboard(6, 3);
}
