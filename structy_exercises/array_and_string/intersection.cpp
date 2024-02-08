// Write a function, intersection, that takes in two vectors, a,b, as arguments. The function should return a new vector containing elements that are in both of the two vectors.

// You may assume that each input vector does not contain duplicate elements.

#include <vector>
#include <algorithm>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  std::vector<int> result;
  if(a == b)
    return a;
  for (const auto& element : b) {
    auto it = find(a.begin(), a.end(), element);
    if(it  != a.end())
      result.push_back(element);
  }
  return result;
}
