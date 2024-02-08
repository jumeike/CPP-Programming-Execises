#include <array>
#include <vector>
#include <unordered_map>
using namespace std;

std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
  // creat a hash to store the previously seen keys
  unordered_map <int, int> previous;
  std::array<int, 2> result;
  int complement; //complement to compute the difference to make up the target
  for (int i=0; i<numbers.size(); i++) {
    complement = target - numbers[i];
    //find the complement in the hash map
    auto it = previous.find(complement);
    //if the key is not available in the hash map, 
    //proceed to the next item on the list and store the current value in the map
    if( it == previous.end()) {
      previous[numbers[i]] = i;
    }
    else {
      //if found, return the indices
      result[0] = it->second;
      result[1] = i;
      break;
    }
  return result;
}
