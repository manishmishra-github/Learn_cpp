#include <iostream>

void conversions()
{
    //Modify the statements in this function body
     unsigned short int si = 45550;
    float f = 13.5;

    double num1{ 7 }, num2{ 6 };
    double d = (num1 + num2) / 2;


    std::cout << si << " " << f << " " << d;
}
int main()
{
    //conversions(); 

    const int a = 10;
    const int* b = &a;



    std::cout << *b << std::endl;

    return 0;

} 
