#include<iostream>
using namespace std;
class ASum
{
  public:
  static long long findNb(long long m)
  {
      long long i = 1;
      long long sum = 0;
      do {
          sum += i * i * i;
          if (m == sum) return i;
          i++;
      } while (sum < m);
      return -1;
  }
};
int main()
{
    ASum obj1;
    int s = obj1.findNb(1071225);
    cout<<s;
}