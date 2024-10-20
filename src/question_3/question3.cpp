#include "question3.h"

bool test_config()
{
    return true;
}
vector <double> get_cookie_ingredients(double cookies){
    vector <double> cups;

    double sugar = 1.5 * (cookies / 48);
    double butter = 1 * (cookies / 48);
    double flour = 2.75 * (cookies / 48);

    cups.push_back(sugar);
    cups.push_back(butter);
    cups.push_back(flour);

return cups; 
}