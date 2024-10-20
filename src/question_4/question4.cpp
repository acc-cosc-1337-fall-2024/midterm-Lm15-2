#include"question4.h"
#include <algorithm>
using std::reverse; 
using std::to_string;
bool test_config()
{
    return true;
}
string get_factorial_sequence(int num){
    string result;
    auto factorial = 1;

    while (num > 1)
    {
        result += to_string(num) + 'x';
        factorial *= num--;
    }

   /*  reverse(result.begin(), result.end()); */

    return result + to_string (num)  + "="  + to_string(factorial);
}