#include <iostream>
#include <numeric>
#include <string>

std::string highestScoringWord(const std::string &str)
{
  int space = 0, original_pos = 0, max = 0,  value = 0;
  std::string biggest_word;
  for (int i = 0; i < str.length(); i++)
  {
      if(str[i] == ' ' || i == str.length()){
          if((value = std::accumulate(original_pos,i-1,0)) > max){
              max = value;
              biggest_word = str.substr(original_pos,i-1);
              i++;
              original_pos = i;
          }
      }
  }
  
  return biggest_word;
}

int main(){

    std::string word = "man i need a taxi up to ubud";

    std::cout<<highestScoringWord(word)<<std::endl;

}