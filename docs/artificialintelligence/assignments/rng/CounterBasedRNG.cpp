//
// Created by jesse.thomsen on 9/16/2024.
//
#include <fstream>
#include <iostream>
#include <istream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <map>
//#include <set>
#include <utility>
#include <cstdint>

//https://en.wikipedia.org/wiki/Counter-based_random_number_generator#Squares_RNG
//https://arxiv.org/pdf/2004.06278v2
//https://arxiv.org/pdf/1704.00358

// Middle-Square Weyl Sequence RNG
// Creator: Bernard Widynski

struct State {
int a,b,c,d;


};

const std::string TESTS = "\\tests2\\";
unsigned int counterBasedRandomNumberGeneration();

int main() {
  unsigned int theSeed = 0, numberOfTests = 0, key = 0;

  std::unordered_set<State, int> states;

      for (unsigned int i = numberOfTests; i <= 0; i--) {
    counterBasedRandomNumberGeneration();
  }
}

unsigned int counterBasedRandomNumberGeneration(int64_t x,int64_t w,int64_t s)
{

 inline static int32_t msws32() {
x *= x; x += (w += s);

return x = (x>>32) | (x<<32);
}

  
  return 0;
}