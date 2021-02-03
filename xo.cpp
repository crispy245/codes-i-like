/*
Check to see if a string has the same amount of 'x's and 'o's. 
The method must return a boolean and be case insensitive. 
The string can contain any char.

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true

*/


#include <string>
#include <algorithm>
#include <vector>
#include <iostream>


bool XO(const std::string& str)
{
  int str_len = str.length();
  std::string new_str;
  
  new_str.assign(str);
  
  //std::cout<<new_str<<std::endl;
  
  std::transform(str.begin() , str.end() , new_str.begin() , ::tolower);
  
  int x = std::count(new_str.begin(), new_str.end(), 'x');
  int o = std::count(new_str.begin(), new_str.end(), 'o');
  return x ==  o;
}

int main(){
	std::string s1 = "ooxXm";
	std::string s2 = "xooxx";
	
	std::cout<<XO(s1)<<std::endl;
	std::cout<<XO(s2);
	
}
