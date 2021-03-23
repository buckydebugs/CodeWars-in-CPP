#include <iostream>
using namespace std;
bool hero(int bullets, int dragons) {
  return (bullets >= 2*dragons) ? true : false;
}
int main()
{
    hero(4, 8);
    cout<<hero;
}
