#include<iostream>
using namespace std;
int twice_as_old(int dad, int son) {
  return abs(2*son - dad);
}
int main()
{
    int a=twice_as_old( 58, 8);
    cout<<a;
}