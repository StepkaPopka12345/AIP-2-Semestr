#include <iostream>

/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике.
*/

struct Sensor{
     float max;//макс(ед)
     float min;//мин(ед)
     float po; //погрешность(ед)
     float vi;// скорость(м/с)
 }MK1,MK2,MK3;

using namespace std;

 void gabarit(Sensor e, float y){
     if(e.po <= y ){
         std::cout<<"Maximum="<<"\t"<<e.max <<" ed ,";
         std::cout<<"Minimum="<<"\t"<<e.min <<" ed ,";
         std::cout<<"Pogreshnost="<<"\t"<<e.po <<" ed ,";
         std::cout<<"Speed="<<"\t"<<e.vi <<"m/sec";
     }

 }

int main()
{

    Sensor MK1,MK2,MK3;
    MK1.max = 19;
    MK1.min = 10;
    MK1.po = 887;
    MK1.vi = 6;

    MK2.max= 653;
    MK2.min = 180;
    MK2.po = 554;
    MK2.vi = 388;

    MK3.max= 37;
    MK3.min= 10;
    MK3.po = 1007;
    MK3.vi = 25;

    gabarit(MK3, 1008);
    return 0;

}
