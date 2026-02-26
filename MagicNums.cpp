#include <iostream>


int main(){
    const long long int MAX_NUM = 5000000000; // 5 billion 
    
    for (long long int i = 2; i <= MAX_NUM; i++) {
        std::cout << "Processing number: " << i << std::endl;
        unsigned long int tempNum = i;
        while (tempNum > 1){
            if (tempNum % 2 == 0) {
                tempNum /= 2;
            } else {
                tempNum = (3 * tempNum) + 1;
            }
            std::cout << tempNum << std::endl;
        }

    }


    return 0;
}