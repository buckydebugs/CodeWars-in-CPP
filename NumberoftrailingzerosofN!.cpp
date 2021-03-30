#include<iostream>
using namespace std;
long zeros(long n) {
  
  long count = 0;
  
  for (long i = 5; n / i >= 1; i *= 5) count += n / i;       
  
  return count;

}
int main()
{
    long s = zeros(12);
    cout<<s; //displays 2
}