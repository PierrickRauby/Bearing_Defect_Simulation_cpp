
#ifndef DEF_ROLLING_ELEMENT
#define DEF_ROLLING_ELEMENT

#include <iostream>
#include <string>

class RollingElement
{
    public:
    RollingElement();
    RollingElement(double diameter);
    ~RollingElement();
    void DisplayInfo() const;
    double GetDiameter() const;

    private:
    double _diameter;

}




#endif