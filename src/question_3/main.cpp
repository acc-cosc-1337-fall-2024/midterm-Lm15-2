#include "question3.h"

int main()
{
    int value = 0;
    vector <double> cups;
    do{
        cout << "Enter how many cookies you want:  \n";
        std::cin >> value;
        cout<<"For " << value << "cookies you will need " << cups[0] << "cups of sugar, " << cups[1] <<"of butter, and " << cups[2] << "of flour. \n";
    }while(value != 0);

    return 0;
}