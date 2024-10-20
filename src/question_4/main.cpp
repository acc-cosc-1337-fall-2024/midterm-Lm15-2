#include"question4.h"
int main()
{
auto input = 0;
do{
    cout << "Enter a value between 1-10 to receive factorial sequence or enter 0 to quit: \n";
    cin >> input; 
    if(input < 1 || input > 10)
    {
        cout << "Please enter a valid input \n";
    }else {
        cout << "The factorial sequence of " << input << " is " << get_factorial_sequence(input) << "\n";
    }
}while(input != 0);

    return 0;
}