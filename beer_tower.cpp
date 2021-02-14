#include <iostream>


// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
  double fbonus = bonus;
  //std::cout<<"---------"<<bonus<<"---------"<<price<<std::endl;
  if(bonus<price){
      return 0;
  }
  double current_cost = 0;
  int many_cans = 1, many_levels = 0;
  while(fbonus >= (many_cans*many_cans)*price){
    //std::cout<<"At the begining "<<fbonus<<std::endl;
    current_cost = (many_cans*many_cans)*price;
    fbonus -= current_cost;
    //std::cout<<"At the end "<<fbonus<<std::endl;
    many_cans++;
    many_levels++;
    }
    return many_levels;
}

int main(){

    std::cout<<beeramid(9,2)<<std::endl;//1
    std::cout<<beeramid(10,2)<<std::endl;//2
    std::cout<<beeramid(4,4)<<std::endl;//1
    std::cout<<beeramid(3,4)<<std::endl;//0
    std::cout<<beeramid(0,4)<<std::endl;//0
    std::cout<<beeramid(-1,4)<<std::endl;//0
    std::cout<<beeramid(21,1.5)<<std::endl;//3

}