#include <RollingElement.hpp>

RollingElement::RollingElement(){
_diameter=1;
}
RollingElement::RollingElement(double diameter)
{
_diameter=diameter;
}

RollingElement::DisplayInfo(){
std::cout<<"Rolling Element info:"<<std::endl;
std::cout<<"- Diameter:"<< _diameter<<std::endl;

}
RollingElement::GetDiameter(){
    return _diameter;
}


RollingElement::~RollingElement(){

}