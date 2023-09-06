// Write a function, fiveSort, that takes in a vector of numbers as an argument. The function should rearrange elements of the vector such that all 5s appear at the end. Your function should perform this operation in-place by mutating the original vector. The function should return the vector.

// Elements that are not 5 can appear in any order in the output, as long as all 5s are at the end of the vector.
  
#include <vector>

std::vector<int>& fiveSort(std::vector<int> &numbers) {
  int i = 0, j = numbers.size()-1;
  
  while(i<j) {
    // as long as j is pointing to a 5, keep decrementing until you get a digit that's not '5'
    if(numbers[j] == 5){
      --j;
      continue; // decrement until you hit a non '5' digit
    }
    // as long as i is pointing to a digit that's not 5, keep incrementing until you get a '5' 
    if(numbers[i] != 5) {
      ++i;
      continue; // increment until you hit a '5'
    }
    //If we get here, then i points to a 5 and j doesn't. Now we can swap
    int temp = numbers[j];
    numbers[j] = numbers[i];
    numbers[i] = temp;
  }
  return numbers;
}
