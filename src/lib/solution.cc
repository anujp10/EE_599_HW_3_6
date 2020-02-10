#include "solution.h"
#include <iostream>

void Solution::PrintMenu(const std::vector<int> &input) {
  std::cout << "*********************************************************************" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "Vector: ";
  for (unsigned int i = 0; i < input.size(); i++) {
    std::cout << input[i] << " ";
  }
  std::cout << std::endl << "*********************************************************************" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "Please choose any of the following options:" << std::endl;
  std::cout << "\t1. What is the first element?" << std::endl;
  std::cout << "\t2. What is the last element?" << std::endl;
  std::cout << "\t3. What is the current element?" << std::endl;
  std::cout << "\t4. What is the ith element from the current location?" << std::endl;
  std::cout << "\t5. Exit" << std::endl;
  std::cout << "*********************************************************************" << std::endl;
  std::cout << "*" << std::endl;
}