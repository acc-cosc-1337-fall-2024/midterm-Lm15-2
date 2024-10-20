#include "question2.h"
#include <algorithm>
using std::reverse;
bool test_config()
{
    return true;
}

string decimal_to_binary(int num){
   string binary;

   for(auto i = 0; i < 8; i++)
   {
    if  (num & (1 << i))
    {
        binary.push_back('1');
    }else{
        binary.push_back('0');
    }
   }
   reverse(binary.begin(), binary.end());
   return binary;
}