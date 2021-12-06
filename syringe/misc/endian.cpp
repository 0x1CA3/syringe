#include "../../includes/misc/endian.hpp"


/*
    *    syringe/misc/endian.cpp
    *    Date: 12/6/21
    *    Author: 0x1CA3
*/


int GetEndian::Execute(void) {
    int var = 1;
    if (*(char *)&var == 1) {
        return 0;
    }
    return 1;
}