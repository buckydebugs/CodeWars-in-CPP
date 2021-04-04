#include<iostream>
using namespace std;
int getPerimeter(int length, int width) {
  return 2 * (length + width);
}
int main()
{
    int s =getPerimeter(5,6);
    cout <<s;
}