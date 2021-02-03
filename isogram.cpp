/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is an isogram.
Assume the empty string is an isogram. Ignore letter case.

isIsogram "Dermatoglyphics" == true
isIsogram "aba" == false

*/

#include <set>
#include <numeric>
#include <iostream>     // std::cout
#include <algorithm>    // std::transform
#include <vector>       // std::vector
#include <functional>   // std::plus


bool is_isogram(std::string str) 
{
    std::transform(str.begin() , str.end() , str.begin() , ::tolower);
    std::set<char> s(str.begin() , str.end());
    return s.size() == str.size();
}
