def pair_sum(numbers, target_sum):
  previous = {}
  for i in range(len(numbers)):
    complement = target_sum - numbers[i]
    if complement in previous:
      result = (previous[complement],i)
      break
    else:
      # previous.update({numbers[i]:i})
      previous[numbers[i]] =i
    
  return result
