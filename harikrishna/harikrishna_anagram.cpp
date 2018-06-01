//This Program should take two strings as inputs and find whether they are anagrams to each other.

//Anagram:-  
//An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “sandeep” and “edepnsa” are anagram of each other.

//Two inputs will be given to str1 and str2, our aim is find whether they are anagrams to each other.

//if str1 and str2 are anagrams to each other then change the value "out" to 1.

#include "iostream"
#include <algorithm>
#include "string.h"
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{

string str1 = argv[1];
string str2 = argv[2];
int out = 0;

//Code Starts from here


std::sort(str1.begin(), str1.end());
std::sort(str2.begin(), str2.end());

if (str1 == str2)
{
out = 1;
//cout<<out;
}


//
return out;
}


