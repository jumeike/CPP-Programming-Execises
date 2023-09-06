def five_sort(nums):
  i = 0
  j = len(nums) - 1
  
  while (i < j):
    if nums[j] == 5:
      j -= 1
      continue
    if nums[i] != 5:
      i += 1
      continue
    temp = nums[j]
    nums[j] = nums[i]
    nums[i] = temp
  return nums
