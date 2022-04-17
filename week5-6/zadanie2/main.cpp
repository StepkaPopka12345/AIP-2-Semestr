#include <iostream>
#include <cmath>
/*y = (2+x)2 + 7, если x > -8
y = 5, если x = -8
y = |2 * x-1| - 1, если x < -8
*/
using namespace std;

int main()
{
    float x,y;
    cin>>x;
    if (x>-8){
    y=(2+x)*2+7;

    }
    if (x<-8){
    y=fabs(2*x-1)-1;
    }
    if (x==-8) {
    y=5;
    }
    cout << "y= "<< y << endl;
    return 0;
}
