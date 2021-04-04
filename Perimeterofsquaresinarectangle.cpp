#include<iostream>
using namespace std;
typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n){
    ull a = 1;
    ull b = 1;
    ull total = 2;
    ull temp;
    if(n == 1)
      return 8;
    if(n == 2)
      return 16;
    for(int i = 2; i <=n; ++i){
      temp = b;
      b = a+b;
      a = temp;
      total += b;
    }
    return total*4;
  }
};
int main()
{
    SumFct obj1;
    int s = obj1.perimeter(7);

    cout<<s;
   
}