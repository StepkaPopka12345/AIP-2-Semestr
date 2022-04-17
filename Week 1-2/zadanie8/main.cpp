#include <iostream>
#include<cmath>
using namespace std;

//Вариант 4 , задание 4(Номер 8 В)
int main()
{
       std::cout << " (|x-5|-sinx)/3+√x*2+2014cos(2x)-3" << std::endl;//условие

       float x = -2.34;
       float Result =(fabs(x-5)-sin(x))/3+sqrt(x*x+2014)*cos(2*x)-3 ;

       std::cout <<"Result = "<< Result<<std::endl; //Вывод результата
       return 0;
}
