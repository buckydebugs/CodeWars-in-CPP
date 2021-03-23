#include<iostream>
using namespace std;
char getGrade(int a, int b, int c) {
  int score = (a + b + c) / 3;
  if (score >= 90 && score <= 100) {
      return 'A';
  } else if (score >= 80 ) {
    return 'B';
  } else if (score >= 70 ) {
    return 'C';
  } else if (score >= 60) {
    return 'D';
  } else{
    return 'F';
  }
}
int main()
{
    char s = getGrade( 99, 77, 88);
    cout<<s;
}