def most_frequent_char(s):
  result = s[0]
  for char in s:
    if s.count(char) > s.count(result):
      result = char
  return result
