#include<iostream>
using namespace std;
bool scramble(const std::string& s1, const std::string& s2){
  //your code here
  int count[256] = {0};
  for (int i=0; i< s1.length(); i++)
    count [s1[i]]++;
  for(int i = 0; i < s2.length(); i++)
    {
    if (count[s2[i]]==0)
      return false;
    count [s2[i]]--;
  }
  return true;
}
int main()
{
    string a = "yumyumyum";
    string b = "no";
    bool s = scramble(a,b);
    cout<<s; // displays 0
}