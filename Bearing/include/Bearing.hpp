#ifndef DEF_BEARING
#define DEF_BEARING

#include <iostream>
#include <string>
#include <RollingElement.hpp>

class Bearing
{
public:
    Bearing();
    Bearing(int nb_rolling_elements,
            double diam_rolling_elements,
            double contact_angle,
            double diam_ext,
            double diam_int);
    ~Bearing();
    void DisplayInfo() const;

private:
    int _nb_rolling_elements;
    double _diam_rolling_elements;
    double _contact_angle;
    double _diam_ext;
    double _diam_int;

    <vect> RollingElement _rolling_elements;
}

#endif