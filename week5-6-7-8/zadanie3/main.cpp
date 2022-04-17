#include <iostream>
#include <cmath>
#include <math.h>
/*y = y= √2+4x*x+6x+sin(8x+11) */ //условие

using namespace std;

int main()
{
    int d;
        int n;
        int x;
        float y;
        std::cout<<"Vvedite n(diapazon), d(shag) , x (argument):   ";
        std::cin>>n>>d>>x;
        for(int i = 0; i < n; i+=d ){
        y= sqrt(2+4*x*x)+6*x+sin(8*x+11);
        x=x+d;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
        }
    return 0;
}
