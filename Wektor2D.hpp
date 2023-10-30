class Wektor2D
{
    private:
        double x, y;

    public:
        Wektor2D() : x(0.0), y(0.0) {}
        Wektor2D(double x_v2, double y_v2) : x(x_v2), y(y_v2) {}

    
        double getX() const { return x; }
        double getY() const { return y; }

        
        void setX(double x_v2) { x = x_v2; }
        void setY(double y_v2) { y = y_v2; }

        Wektor2D operator+(const Wektor2D& v) const {
            return Wektor2D(x + v.x, y + v.y);
        }

        double operator*(const Wektor2D& v) const {
            return x * v.x + y * v.y;
        }
};
