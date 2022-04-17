#include <iostream>
#include <cmath>
#include <math.h>
/*y = (-3+x)2 + 2x+5 */ //условие

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
        y= (-3+x)*2+2*x+5;
        x=x+1;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
        }
    return 0;
}
