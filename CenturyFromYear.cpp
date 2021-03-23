#include<iostream>
using namespace std;
constexpr int centuryFromYear(int year) 
{
    return (year + 99) / 100;
}
int main()
{
    int s = centuryFromYear(3020);
    cout<<s;
}