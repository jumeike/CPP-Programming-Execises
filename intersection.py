# Write a function, intersection, that takes in two lists, a,b, as arguments. The function should return a new list containing elements that are in both of the two lists.

# You may assume that each input list does not contain duplicate elements.

def intersection(a, b):
  result = []
  if a == b:
    return a
  if len(a) > len(b):
    for element in a:
      if element in b:
        result.append(element)
  else:
    for element in b:
      if element in a:
        result.append(element)
  return result
