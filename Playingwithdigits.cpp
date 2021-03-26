#include<math.h>
using namespace std;
#include<iostream>
class DigPow
{
public:
  static int digPow(int n, int p)
    {
    auto sum = 0;
    for (char digit : std::to_string(n))
      {
      sum += pow(digit-'0', p++);
    }
    return sum%n==0 ? sum/n : -1;
  }
};
int main()
{
    DigPow obj1;
    int a = obj.digPow(2,5);
    cout<<a;

}