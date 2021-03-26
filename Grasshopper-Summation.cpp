#include<iostream>
using namespace std;


int summation(int num){
  int res;
res = (num * (num+1)) / 2;
  return res;
}
int main()
{
    int i = summation(2);
    cout<<i;
}