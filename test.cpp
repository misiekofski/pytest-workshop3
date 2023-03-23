#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

bool is_temp(bool bool_value) {
    return !bool_value;
}

int main() {
    bool space = false;
    int size = 4;
    is_temp(space)?assert(size>=5):assert(size>=7);

    return 0;
}