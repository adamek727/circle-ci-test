class Point {

public:

    Point() = delete;

    Point(float x, float y) :
            x_{x},
            y_{y} {

    }

    float x() const {return x_;}
    float y() const {return y_;}

    Point operator+(const Point& p) const {
        return Point(x_ + p.x_, y_ + p.y_);
    }

    Point operator-(const Point& p) const {
        return Point(x_ + p.x_, y_ + p.y_);
    }

private:

    float x_;
    float y_;

};