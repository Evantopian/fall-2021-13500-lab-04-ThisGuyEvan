/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 04

Both the checkboard tasks.
*/

#include <iostream>
#include "checkerboards.h"


bool isEven(int x){
  return (x%2 == 0);
}

std::string checkerboard(int r, int c){
  if (!isEven(r)){
    r = (r+1)/2;
  }
  else{
    r /= 2;
  }

  std::string s = "";
  for (int i = 0; i < r; i++){
    int w = c;
    if (!isEven(i)){
      w = c-1;
      s += " ";
    }
    
    for (int j = 0; j < w; j++){
      s+= "* ";
    }
    s += "\n";
  }
  return s+="\n";
}


std::string checkerboard_3x3(int w, int h){
  std::string s = "";
  char ch;
  bool toggle = false;
  char temp;

  for (int j = 0; j < h; j++){
    // toggles the spaces.
    if (j%3== 0){
     if (toggle){
       ch = '*';
       toggle = false;
     }
     else{
       toggle = true;
       ch = ' ';
     }
    }
    
    temp = ch;
    for (int i = 0; i < w; i++){
      if (i%3 == 0){
        if (ch == '*'){
          ch = ' ';
        }
        else{
          ch = '*';
        }
      }
      s += ch;
    }
    s+= "\n";
    ch = temp;
  }

  return s += "\n";
}
