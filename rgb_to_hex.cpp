#include <string>

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
      
      const char hexValues[100] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
      
      std::string hexConv;//Store the answer

      //Check if values are in range
      r = (r>255) ? 255 : r;
      r = (r < 0) ? 0: r;
      g = (g>255) ? 255 : g;    
      g = (g < 0) ? 0: g;
      b = (b>255) ? 255 : b;
      b = (b < 0) ? 0 : b;   
      


      /*Hardcoded the algorithm to convert into HEX
      1-Get the modulus 16 of the value.
      2-Divide the value by 16.
      3-Get the representation in Hex of the value now divided by 16.
      4-Get the representation in Hex of the modulus 16.
      */
      double remainder = 0;


      //***R***
      remainder = (double)(r%16);
      r /= 16;
      hexConv.push_back(hexValues[r]);
      hexConv.push_back(hexValues[(int)(remainder)]);
      
      //***G***
      remainder = (double)(g%16);
      g /= 16;
      hexConv.push_back(hexValues[g]);
      hexConv.push_back(hexValues[(int)remainder]);

      //***B***
      remainder = (double)(b%16);
      b /= 16;
      hexConv.push_back(hexValues[b]);
      hexConv.push_back(hexValues[(int)(remainder)]);
      

      return hexConv;

  }

};



int main(){
    RGBToHex object;
    //std::cout<<object.rgb(255,255,255)<<std::endl;//FFFFFF
    //std::cout<<object.rgb(255,255,300)<<std::endl;//FFFFFF
    //std::cout<<object.rgb(0,0,0)<<std::endl;//000000
    std::cout<<object.rgb(148,0,211)<<std::endl;//9400D3


}