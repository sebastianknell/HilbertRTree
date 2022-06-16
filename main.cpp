#include <iostream>
#include "HilbertRtree.h"

int main() {
    // Test con grid de 20x20
    // Deberia salir en orden
    std::cout << HilbertRtree::getHilbertIndex({0,2}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({0,6}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({6,6}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({6,0}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({12,0}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({18,0}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({18,6}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({12,6}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({12,12}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({18,12}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({18,18}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({12,18}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({6,18}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({6,12}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({2,12}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    std::cout << HilbertRtree::getHilbertIndex({2,18}, 0, 0, 20, 0, 0, 20, 1, 0) << std::endl;
    return 0;
}
