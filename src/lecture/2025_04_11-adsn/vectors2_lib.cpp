#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


void printVector(const std::vector<int>& vec) {
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

std::vector<int> initializeVector(int size, int startValue) {
    std::vector<int> vec(size, startValue);
    return vec;
}

void addToVector(std::vector<int>& vec, int value) {
    for (int& val : vec) {
        val += value;
    }
}

void multiplyVector(std::vector<int>& vec, int factor) {
    for (int& val : vec) {
        val *= factor;
    }
}

void removeEvenNumbers(std::vector<int>& vec) {
    vec.erase(std::remove_if(vec.begin(), vec.end(), [](int val) { return val % 2 == 0; }), vec.end());
}

void reverseVector(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
}

int sumVector(const std::vector<int>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0);
}

int findMax(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int findMin(const std::vector<int>& vec) {
    return *std::min_element(vec.begin(), vec.end());
}
