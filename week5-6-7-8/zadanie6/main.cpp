#include <iostream>

using namespace std;
//y = 3/7x+4/9x+5/11x+...
int main()
{
    int d=7;
    int z=3;
    int n;     //повтор
    float x;   //argument
    float ch ;
    std::cout<<"Enter the x(argument)  and n(cycle): ";
    std::cin>>x>>n;
    for(int i = 1;i<=n ;i++){
        ch+=z/(x*d);
        d+=2;
        z+=i;
    }
    std::cout<<"sledovatelno =  "<<ch;


    return 0;
}
