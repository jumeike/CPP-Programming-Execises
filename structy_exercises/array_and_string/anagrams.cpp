// Write a function, anagrams, that takes in two strings as arguments. The function should return a boolean indicating whether or not the strings are anagrams. Anagrams are strings that contain the same characters, but in any order.

#include <string>
#include <unordered_map>

bool anagrams(std::string s1, std::string s2) {
  if(s1.size() != s2.size())
    return false;
  std::unordered_map<char, int> umap1;
  std::unordered_map<char, int> umap2;
  for(char ch : s1)
  {
    // for each character in string s1, increment the corresponding hash map count
    umap1[ch] += 1;
  }
  for(char ch : s2)
  {
    // for each character in string s1, increment the corresponding hash map count
    umap2[ch] += 1;
  }
  return umap1 == umap2;
}
