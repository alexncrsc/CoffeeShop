//
// Created by alexn on 12/15/2022.
//

#include "IOStream.h"


std::ostream& operator<< (std::ostream & os, const IOStream & obj) {
    obj.prntall();
    return os;
}

std::ostream& operator<< (std::ostream & os, const IOStream * obj) {
    obj -> prntall();
    return os;
}

IOStream::~IOStream() = default;
