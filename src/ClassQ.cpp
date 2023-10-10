#include "Q/ClassQ.hpp"

#include <iostream>

namespace Q {

ClassQ::ClassQ() {
    std::cout << "ClassQ constructor" << std::endl;
    return;
}

ClassQ::~ClassQ() {}

void ClassQ::print() {
    std::cout << "print from ClassQ" << std::endl;
}

} // namespace
