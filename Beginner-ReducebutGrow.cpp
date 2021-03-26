 #include <vector>
 #include<iostream>
int grow(std::vector<int> nums) {
  int n = nums.size(); 
  int i;
  int result = 1;
  for (i=0; i<n; i++)
    {
    result= result * nums[i];
    
  }
   return result;
}
int main()
{
    int a = grow(8);
    std::cout<<a;
}