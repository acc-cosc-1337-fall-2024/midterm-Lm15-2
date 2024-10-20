#include "question2.h"

int main()
{
    auto value = 0;
    do {
    cout << "Enter a number between 1-255: \n";
    std::cin >> value;
    cout<<"Your number in binary is:  " << decimal_to_binary(value) << "\n";
    }   while   (value != 0);

    return 0;
}