//
// Created by alexn on 12/15/2022.
//

#ifndef VANSING_OOP_IOSTREAM_H
#define VANSING_OOP_IOSTREAM_H
#include <iostream>


class IOStream {
protected:
    virtual void prntall() const = 0;

    friend std::ostream& operator<< (std::ostream &, const IOStream & );
    friend std::ostream& operator<< (std::ostream &, const IOStream * );

    virtual~IOStream();
};


#endif //UNTITLED2_IOSTREAM_H
