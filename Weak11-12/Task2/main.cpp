#include <iostream>

/*Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
мнимая части. Объявите два числа и получите их значения от пользователя.
Напишите функцию, которая будет складывать комплексные числа.
*/

struct Num{
    float a,b,c,d;
};

void complexnumbers(float a, float b,float c, float d){
    float r = a + b;
    float y = c + d;
    std::cout<<"sumcomplexnumbers = "<<r<<" + " << y<< "i"<< "\t";
}

using namespace std;

int main()
{
    Num Complex1,Complex2;
    Complex1.a = 550;
    Complex1.b = 23;
    Complex2.a = 1;
    Complex2.b = 9;

    Complex1.c = 440;
    Complex1.d = 3;
    Complex2.c = 8;
    Complex2.d = 3;
    complexnumbers(Complex1.a,Complex1.b,Complex1.c,Complex1.d);
    complexnumbers(Complex2.a,Complex2.b,Complex2.c,Complex2.d);

    return 0;
}
