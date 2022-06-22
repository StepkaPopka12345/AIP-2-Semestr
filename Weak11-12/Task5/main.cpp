#include <iostream>

/*
Робот-автомобиль описывается как структура с полями: скорость, длительность
движения и номер. Напишите функцию для расчёта пройденного расстояния
*/

struct Robot{
    float v;
    float t;
    float n;
}MK1;

void distation(Robot e){

    float s = e.v * e.t;
    std::cout<<"S = "<<s<<" metrs ,"
             <<e.v<<"m/s  ,"
             <<e.t<<"sec  ,"
             <<"robot num = "<<e.n;

}

using namespace std;

int main()
{

    Robot MK1;

     MK1.n = 1;
     MK1.v = 68;
     MK1.t = 39;

     distation(MK1);

    return 0;

}
