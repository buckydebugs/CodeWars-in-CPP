#include <vector>
#include <iostream>
using namespace std;

int positive_sum (const std::vector<int> arr){
   int sum=0;
   for(int i =0 ; i < arr.size(); i++)
   {
    if (arr[i]>0)
     sum+=arr[i];
     }
  return sum;
}
int main()
{
    int i = positive_sum(77);
    cout<<i;
}