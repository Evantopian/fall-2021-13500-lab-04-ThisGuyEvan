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
