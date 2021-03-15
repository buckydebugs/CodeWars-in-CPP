#include<iostream>
using namespace std;
int makeNegative(int num)
{
  if (num>0)
    {
  return -num;
    }
  else if (num == 0)
    {
    return 0;
  }
  else if ( num<0)
    {
    return num;
  }
  return 0;
}
int main()
{
    makeNegative(-3);
}