#include <cmath>
#include <iostream>
using namespace std;

double shortestDistance (double x, double y, double z) {
 double a = pow(x, 2) + pow(y, 2) + pow(z, 2);
if(x >= y && x >= z)
  a += 2*y*z;
else if(y >= x && y >= z)
  a += 2*x*z;
else
  a += 2*x*y;
return sqrt(a);
  
}
int main()
{
    int a =shortestDistance(2,3,4);
    cout<<a;

}