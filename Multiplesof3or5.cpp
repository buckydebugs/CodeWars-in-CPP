#include<iostream>
using namespace std;
int solution(int number) 
{
  int i,sum=0;
  for(i=0;i<number;i++)
    {
        if((i%5==0)||(i%3==0))
          sum=sum+i;
    }
  return(sum);
}
int main()
{
    int s = solution(10);
    cout<<s;
}