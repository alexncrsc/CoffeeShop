//
// Created by alexn on 12/15/2022.
//

#include "exceptii.h"
#include <iostream>
using namespace std;
void PretMare :: Print(std :: ostream &os) const
{
    os << this -> what();
}

const char *PretMare ::what() const noexcept
{
    return "\nPretul este mult prea mare\n";
}

void Punctaj :: Print(std :: ostream &os) const
{
    os << this -> what();
}

const char *Punctaj ::what() const noexcept
{
    return "\nImposibil ca o cafea sa aiba un asemenea punctaj\n";
}
