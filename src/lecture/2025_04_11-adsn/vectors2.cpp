#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <numeric>

#include "vectors2_lib.h"

int main() {
    std::vector<int> myVector = initializeVector(10, 1);

    std::cout << "Initial vector: ";
    printVector(myVector);

    addToVector(myVector, 5);
    std::cout << "After adding 5 to each element: ";
    printVector(myVector);

    multiplyVector(myVector, 2);
    std::cout << "After multiplying each element by 2: ";
    printVector(myVector);

    removeEvenNumbers(myVector);
    std::cout << "After removing even numbers: ";
    printVector(myVector);

    reverseVector(myVector);
    std::cout << "After reversing the vector: ";
    printVector(myVector);

    int sum = sumVector(myVector);
    std::cout << "Sum of elements: " << sum << std::endl;

    int maxVal = findMax(myVector);
    std::cout << "Maximum value: " << maxVal << std::endl;

    int minVal = findMin(myVector);
    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}
