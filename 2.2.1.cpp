#include <cmath>
#include <iostream>

struct Point 
{
    float x, y;

    float norm() const 
    {
        return std::sqrt(x*x + y*y);
    }

    void normalize() 
    {
        float pnorm = norm();
        x /= pnorm;
        y /= pnorm;
    }

    Point operator+(const Point& r) const 
    {
        Point result = {x + r.x, y + r.y};
        return result;
    }
};

struct Circle 
{
    private:
        Point c ={0, 0};
        float r=1;
    public:
    Circle(const Point& ac, float ar)
    {
        c=ac;
        r=ar;
    }
    Circle(const Circle& circ)
    {
        Circle oo= circ;
    }
    float gradius()
    {
        return r;
    }
    Point gcentr()
    {
        return c;
    }
    void inradius(float rr)
    {
        r=rr;
    }
    void incentr(Point cc)
    {
        c=cc;
    }
    float area()
    {
        return r*r*3.1415;
    }
    float distance(const Point& k)
    {
        return sqrt((k.x-c.x)*(k.x-c.x)+(k.x-c.x)*(k.x-c.x))-r;
    }
    bool colliding(Circle& o2){
        Point k= o2.c;
        if (sqrt((k.x-c.x)*(k.x-c.x)+(k.x-c.x)*(k.x-c.x))-r <= o2.r)
        { 
            return 1;
        }
        else{
            return 0;
        }
    }
    void move( const Point& p){
        c.x+=p.x;
        c.y+=p.y;
        
    }
};

int main() 
{
	Point p = {1, 2};
	///p.normalize();
    Circle o = {p, 3};

	std::cout << o.gcentr().x << " " << p.y << std::endl;
}