#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>

/*

 std::vector<vector<bool>>;
 bool[][]

 */

// Edge list

/*
 * GA, AG, BA, AD, DA, DC, CD, CB, BC, BF, FB, CE, EC, FE, EF
 * std::vector<std::pair<char, char>>;
 */

// Adjacency list
std::unordered_map<char, std::vector<char>>;

//optimized way!
std::unordered_map<char, std::unordered_set<char>>;

struct NodeWall {
  bool north, east;

};


int main()
{
int sideSize = 11;

  std::vector<bool> boardWalls = std::vector<bool>((sideSize+1)*(sideSize+1));



}
