class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        void print();
        double calcDistance(Point other);

        //accessors
        //double getX();
        //double getY();
        //mutators
        //void setX(double xVal);
        //void setY(double yVal);
    private:
        double x;
        double y;
};
