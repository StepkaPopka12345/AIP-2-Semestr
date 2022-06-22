#include <iostream>

/*
Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом тяжёлом роботе.
*/

struct Robot{
     float h;//высота(м)
     float l;//длина(м)
     float g; //ширина(м)
     float m;//масса(кг)
     float v;//максимальная скорость (м/с)
 }MK0,MK1,MK2;

using namespace std;

 void gabarit(Robot t, float x){
     if(t.m >= x ){
         std::cout<<t.h <<" m ,";
         std::cout<<t.l <<" m , ";
         std::cout<<t.g <<" m ,";
         std::cout<<t.m <<" kg ,";
         std::cout<<t.v <<" m/sec ";
     }


 }
int main()
{
    Robot MK0,MK1,MK2;
    MK0.h = 1;
    MK0.l = 2;
    MK0.g = 59;
    MK0.m = 269;
    MK0.v = 4;

    MK1.h = 87;
    MK1.l = 932;
    MK1.g = 1654;
    MK1.m = 122;
    MK1.v = 127;

    MK2.h = 14;
    MK2.l = 12;
    MK2.g = 1245;
    MK2.m = 32;
    MK2.v = 20;

    gabarit(MK0, 60);
    return 0;
}
