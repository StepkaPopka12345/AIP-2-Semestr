#include <iostream>

using namespace std;
//y = 2x - 10, если x > 3
//y = 10, если x = 3
//y = (2 * x+1)2
//- 1, если x < 3

void Func(float &x, float &y){
    std::cin>>x;
    if(x>3){
        y=2*x-10;
        std::cout<<"y= "<<y<<std::endl;
    }

    else if(x<3){
        y=(2*x+1)*(2*x+1)-1;
        std::cout<<"y= "<<y<<std::endl;
    }
    if(x==3){
        y=10;
        std::cout<<"y= "<<y<<std::endl;
    }

}
int main()
{
    float x,y;
    Func(x,y);

    return 0;
}
