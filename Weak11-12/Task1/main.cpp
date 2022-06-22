#include <iostream>

/*
Создайте структуру, которая хранит время: часы, минуты, секунды.
Написать функцию, которая ведёт подсчёт числа секунд между двумя
моментами времени.
*/

struct Time{
    int hours;
    int minute;
    int secunde;
};

void differencetime(int  c1,  int  c2){
        float y = c1 - c2;
        float min=y*60;
        float secunde=min*60;
        std::cout<<"Hours = "<<y<<std::endl;
        std::cout<<"Min = "<<min<<std::endl;
        std::cout<<"Sec = "<<secunde<<std::endl;
}

using namespace std;

int main()
{
    Time c1,c2;
    c1.hours = 80;
    c2.hours = 25;

    differencetime(c1.hours,c2.hours);

    return 0;
}
