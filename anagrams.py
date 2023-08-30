def anagrams(s1, s2):
  if len(s1) != len(s2):
    return False
  unique_chars = set(s1)
  for char in unique_chars:
    if s1.count(char) != s2.count(char):
      return False
  return True
