// Write a function, intersection, that takes in two vectors, a,b, as arguments. The function should return a new vector containing elements that are in both of the two vectors.

// You may assume that each input vector does not contain duplicate elements.

#include <vector>
#include <algorithm>

std::vector<int> intersection(std::vector<int> a, std::vector<int> b) {
  std::vector<int> result;
  if(a == b)
    return a;
  if (a.size() < b.size()) {
    for (const auto& element : b) {
      auto it = find(a.begin(), a.end(), element);
      if(it  != a.end())
        result.push_back(element);
    }
  }
  else {
    for (const auto& element : a) {
      auto it = find(b.begin(), b.end(), element);
      if(it  != b.end())
        result.push_back(element);
    }
  }
  return result;
}
