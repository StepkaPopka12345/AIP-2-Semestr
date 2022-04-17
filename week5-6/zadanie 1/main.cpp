#include <iostream>
#include <cmath>
/*y = 3x - 7, если x > 1
y = 3, если x = 1
y = 3 * |x+2| - 7, если x < 1
*/


using namespace std;

int main()
{
    float x,y;
    cin>>x;
    if (x>1){
    y=3*x-7;

    }
    if (x<1){
    y=3*fabs(x+2)-7;
    }
    if (x==1) {
    y=3;
    }
    cout << "y= "<< y << endl;
    return 0;
}
