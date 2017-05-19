# ifndef CIRCLE_HPP
# define CIRCLE_HPP
# include "vec2.hpp"
# include "color.hpp"
class Circle{
    public:
        Circle();
         Circle(float rad);
        Circle(Vec2 const& ctr, float r,Color const& clr);
        float getRadius() const;
        Vec2 getCenter() const;
        float circumfrenceC()const;
        Color getColorC() const;
        bool operator <(Circle const& c1)const;
	    bool operator >(Circle const& c1) const;
        bool operator ==(Circle const& c1) const;
    private:
        float radius_;
        Vec2 center_;
        Color kreisfarbe_;
};
#endif //CIRCLE_HPP
