#include <iostream>
#include <math.h>
#include "circle.hpp"
    Circle::Circle():
        radius_{0.0f},
        center_{{0.0f},{0.0f}},
        kreisfarbe_{{0.0f},{0.0f},{0.0f}}
    {}
     Circle::Circle(float rad):
        radius_=rad,
        center_{{1.0f},{1.0f}}
    {}
    Circle::Circle(Vec2 const& ctr, float r, Color const& clr){
        if(r<0.0f){
        std::cerr<<"Der Kreis muss einen Radius über 0 haben!"<<std::endl;
        radius_=0.0f;
        center_={{0.0f},{0.0f}};
        kreisfarbe_={{0.0f},{0.0f},{0.0f}};
    }
    else{
        radius_=r;
        center_=ctr;
        kreisfarbe_=clr;
    }
    }
    float Circle:: getRadius() const{return radius_;}
    Vec2 Circle:: getCenter() const{return center_;}
    float Circle:: circumfrenceC()const{
        float result=2*M_PI*radius_;
        return result;
    }
    Color Circle:: getColorC() const{return kreisfarbe_;}
  
    bool Circle::operator < (Circle const& c1) const {
	return (radius_ < c1.getRadius());
    }

    bool Circle::operator>(Circle const& c1) const {
	return (radius_ > c1.getRadius());
    }

    bool Circle::operator==(Circle const& c1) const{
	return (radius_ == c1.getRadius());
    }