#include <iostream>
#include<array>

// Заменить все отрицательные элементы массива нулями

using namespace std;

void task1(){
    std::array<int,10>nums;
        for(int i = 0; i<10;i++){
            nums[i]=rand()%-50-10;
            std::cout<<nums[i]<<endl;
}
        for(int i = 0; i<10;i++){
        if(nums[i]<0)
        nums[i]=0;
        std::cout<<nums[i]<<endl;
}
}
int main()
{
    task1();
    return 0;
}
