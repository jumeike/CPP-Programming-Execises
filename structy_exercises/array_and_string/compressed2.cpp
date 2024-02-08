#include <string>
using namespace std;

std::string compress(std::string s) {
  int i = 0, count = 0;
  char temp;
  string result;
  for(int j=0; j<=s.length(); j++){
    if(i==j) {
      temp = s[j];
      count++;
    }
    else{
      if(s[j]==temp)
        count++;
      else{
        if(count>1)
          result = result + to_string(count) + temp;
        else
          result = result + temp;
        i=j;
        // if(j==s.length())
        //   break;
        j--;
        count=0; //reset count;
      }
    }
  }
  return result;
}
