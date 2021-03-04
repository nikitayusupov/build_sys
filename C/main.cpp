#include "main.h"

#include <iostream>

int segment_sum_minus_product(int left, int right) {
    return segment_sum(left, right) - segment_product(left, right);
}

int main() {
    std::cout << segment_sum_minus_product(1, 8) << '\n';
    return 0;
}