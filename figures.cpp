#include <iostream>
#include "figures.h"


void box(int r, int c){
  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      std::cout << "* ";
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}
