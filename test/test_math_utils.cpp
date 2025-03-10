#include "math_utils.h"
#include <cassert>
#include <iostream>

void test_add() {
    assert(add(3, 4) == 7);
    assert(add(-1, 1) == 0);
    assert(add(-3, -4) == -7);
}

void test_subtract() {
    assert(subtract(5, 3) == 2);
    assert(subtract(-1, 1) == -2);
    assert(subtract(-3, -4) == 1);
}

int main() {
    test_add();
    test_subtract();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
