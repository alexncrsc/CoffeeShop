//
// Created by alexn on 12/15/2022.
//

#ifndef UNTITLED2_EXCEPTII_H
#define UNTITLED2_EXCEPTII_H
#include <iostream>
#include <exception>
#include "IOStream.h"


using namespace std;

class PretMare : public std::exception, public IOStream{
public:
     PretMare() = default;

    const char *what() const noexcept override;
    void Print(std :: ostream&) const;

};

class Punctaj : public std::exception, public IOStream {
public:
    Punctaj() = default;

    const char *what() const noexcept override;
    void Print(std :: ostream&) const;
};


#endif //UNTITLED2_EXCEPTII_H
