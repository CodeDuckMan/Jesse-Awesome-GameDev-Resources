//
// Created by jesse.thomsen on 9/16/2024.
//
#include <fstream>
#include <iostream>
#include <istream>
#include <map>
#include <set>

//https://en.wikipedia.org/wiki/Counter-based_random_number_generator#Squares_RNG
//https://arxiv.org/pdf/2004.06278v2

const std::string TESTS = "\\tests\\";
unsigned int counterBasedRandomNumberGeneration();

int main() {
  unsigned int theSeed, numberOfTests, key;
  std::cin >> theSeed >> numberOfTests >> key >> key;

  for (int i = numberOfTests; i >= 0; i--) {
    counterBasedRandomNumberGeneration();
  }
}

unsigned int counterBasedRandomNumberGeneration()
{

  return 0;
}