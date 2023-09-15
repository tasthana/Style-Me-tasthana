//
// Created by Tushar Asthana  on 9/14/23.
//

#ifndef STYLE_ME_TEMP_H
#define STYLE_ME_TEMP_H

/*
 *This file contains the implementation of the temp.cpp files class methods
 * double f initializes the default value to 32
 * getf returns the current value in the f variable
 * setf allows setting of a new temp in f variable in Fahrenheit
 * getc is a calculation that returns the Fahrenheit to Celsius conversion
 * setc allows setting of a new temp in c variable in Celsius
 */

class temp{

private:
    double f;


public:
    temp();
    double getf() const;
    void setf(double p);
    double getc() const;
    void setc(int c);

};

#endif //STYLE_ME_TEMP_H