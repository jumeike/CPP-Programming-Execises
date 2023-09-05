
// Write a function, mostFrequentChar, that takes in a string as an argument. The function should return the most frequent character of the string. If there are ties, return the character that appears earlier in the string.

// You can assume that the input string is non-empty.

#include <string>
#include <map>
char mostFrequentChar(std::string s) {
  std::map<char,int>map;
  
  for (char c : s) {
    map[c]++;
  }
  char most_freq = s[0];
  int freq;
  auto it = map.find(most_freq);
  if (it != map.end())
    freq = it->second;
  
  for (const auto& pair : map) {
    if(pair.second > freq) {
      most_freq = pair.first;
      freq = pair.second;
    }
  }
  
  return most_freq;
}
