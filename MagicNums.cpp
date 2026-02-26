#include <iostream>
#include <unordered_set>



int main(){
    const long long int MAX_NUM = 5000000000; // 5 billion 
    std::unordered_set<long long int> magicNumbers = {1};
    
    for (long long int i = 2; i <= MAX_NUM; i++) {
        unsigned long int tempNum = i;
        while (tempNum >= 1){
            if (magicNumbers.find(tempNum) != magicNumbers.end()) {
                magicNumbers.insert(i);
                break;
            } else if ((tempNum & 1) == 0) {
                tempNum >>= 1 ; // equivalent to tempNum /= 2
            } else {
                tempNum = (3 * tempNum) + 1;
            }
        }

    }

    return 0;
}