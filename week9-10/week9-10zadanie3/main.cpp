#include <iostream>

using namespace std;
/*Описать функцию Quarter(x, y) целого типа, определяющую номер координатной
четверти, в которой находится точка с ненулевыми вещественными координатами
(x, y). С помощью этой функции найти номера координатных четвертей для трех
точек с данными ненулевыми координатами.
 */

void Quarter(float & x, float  & y){
    if(x>0 && y>0){
        std::cout<<"Tochka v 1 chetverti"<<std::endl;
    }
    if(x<0 && y>0){
        std::cout<<"Tochka v 2 chetverti"<<std::endl;
    }
    if(x<0 && y<0){
        std::cout<<"Tochka v 3 chetverti"<<std::endl;
    }
    if(x>0 && y<0){
        std::cout<<"Tochka v 4 chetverti"<<std::endl;
    }

}


int main()
{
    float x1,x2,y1,y2,x3,y3;
    x1=5;
    x2=-2;
    x3=2;
    y1=5;
    y2=3;
    y3=-6;
    Quarter(x1,y1);
    return 0;
}
