std::string compress(std::string s) {
  int count=0;
  string result;
  char temp;
  bool flag=true;
  while (flag) {
    temp = s[0];
    cout << "temp: " << temp << endl;
    count++;
    for(int i=1; i < s.length(); ++i) {
      cout << "s.length(): " << s.length() << endl;
      if(temp == s[i]) {
        cout << "isequal" << endl;
        count++;
        flag = false;
      }
      else {
        if(count > 1) {
          result = result + to_string(count) + temp;
          cout << "count1: " << count << endl;
          cout << "result1: " << result << endl;
        }
        else {
          result = result + temp;
          cout << "count2: " << count << endl;
          cout << "result2: " << result << endl;
        }
        temp = s[i];
        s = s.substr(i,s.length()-i);
        i=s.length();
        cout << "new s: " << s << endl;
        count = 0;
        flag = true;
      }
    }
    //append the last string
    if(!flag) //means that the last count is greater than 1
      result = result + to_string(count) + temp;
    else if (flag && s.length()==1) {
      result = result + temp;
      flag = false;
    } 
  }
  return result;
}
