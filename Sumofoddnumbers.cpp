#include<iostream>
using namespace std;
long long rowSumOddNumbers(unsigned n){
  return n * n * n;
}
int main()
{
    long long s = rowSumOddNumbers(10);
    cout<<s; //displays 1000
}