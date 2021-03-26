#include<iostream>
using namespace std;


string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}
int main()
{
    string c = bool_to_word(1);
    cout<<c;
}