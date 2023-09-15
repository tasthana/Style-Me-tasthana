//
// Created by Tushar Asthana  on 9/14/23.
//
#include "temp.h"

temp::temp() :f(32) {}

double temp::getf() const {
    return f;
}

void temp::setf(double p) {
    f = p;
}

double temp::getc() const {
    return (f- 32) *(5.0/9.0);
}

void temp::setc(int c) {
    f = c * (9.0 / 5.0) + 32;
}