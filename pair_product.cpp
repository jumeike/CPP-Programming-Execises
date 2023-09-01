// Write a function, pairProduct, that takes in a vector of numbers and a target product as arguments. The function should return a std::array containing a pair of indices whose elements multiply to the given target. The indices returned must be unique.

// Be sure to return the indices, not the elements themselves.

// There is guaranteed to be one such pair whose product is the target.

std::array<int, 2> pairProduct(std::vector<int> numbers, int target) {
  std::array<int,2> result;
  std::unordered_map<int, int> previous;
  int complement;
  for (int i=0; i < numbers.size(); ++i) {
    if(target%numbers[i] != 0)
      continue;
    complement = target/numbers[i];
    previous[numbers[i]] = i;
    for (auto& pair : previous) {
      if (pair.first == complement) {
        result[0] = pair.second;
        result[1] = i;
        break;
      } 
    }
    // auto it = previous.find(complement);
    // if(it == previous.end())
    //   previous[numbers[i]] = i;
    // else {
    //   result[0] = it->second;
    //   result[1] =i;
    //   break;
    // }
  }
  return result;
}
