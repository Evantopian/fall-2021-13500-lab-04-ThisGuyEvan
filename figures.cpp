#include <iostream>
#include "figures.h"


std::string box(int r, int c){

  std::string s = "";
  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      s += "* ";
    }
    s += "\n";
  }
  return s += "\n";
}

std::string cross(int n){
  std::string s = "";
  int inner, outer;

  for (int i = 0; i < n; i++){
    if (i < n/2){
      outer = i;
      inner = (n/2)-(i+1);
    }
    else{
      outer = n-(i+1);
      inner = i-(n/2);
    }

    //Outer bounds
    for (int j = 0; j < outer; j++){
      s += " ";
    }
    s += "*";

    // Inner bounds
    for (int k = 0; k < inner; k++){
      s += "  "; // 2 Spaces since inner bounds pushes the '*'
    }
    s += "*\n";
  }

  return s += "\n";
}


std::string lowerTriangle(int n){
  std::string s = "";

  for (int i = 1; i < n+1; i++){
    for (int j = 1; j < i+1; j++){
      s += "*";
    }
    s += "\n";
  }

  return s + "\n";
}


std::string upperTriangle(int n){
  std::string s = "";

  for (int i = n; i > 0; i--){
    for (int j = i; j > 0; j--){
      s += "*";
    }
    s += "\n";
  }


  return s + "\n";
}


std::string upsideDownTrapTri(int w, int h){

  if (w+1 < h*2){
    return "Impossible shape!\n";
  }

  std::string s = "";
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w-i; j++){
      if (j < i){
        s += " ";
      }
      else{
        s += "*";
      }
    }
    s+= "\n";
  }
  return s += "\n";
}
