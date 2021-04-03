#include <string>
#include <iostream>
#include<vector>


using namespace std;
std::string disemvowel(std::string str)
{
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                           'A', 'E', 'I', 'O', 'U'}; 
      
    for (int i = 0; i < str.length(); i++)  
    { 
        if (std::find(vowels.begin(), vowels.end(), 
                      str[i]) != vowels.end())  
        { 
            str = str.replace(i, 1, ""); 
            i -= 2; 
        } 
    } 
    return str; 
} 
int main()
{
string a = "you suck";
string s = disemvowel(a);
cout<<s;
}