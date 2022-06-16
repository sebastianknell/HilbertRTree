#include <iostream>
#include "HilbertRtree.h"

int main() {
    std::cout << HilbertRtree::getHilbertIndex({20,10}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    return 0;
}
