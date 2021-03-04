#include "lib.h"

int segment_product(int from, int to) {
    int product = 1;
    for (int x = from; x < to; ++x) {
        product *= x;
    }
    return product;
}