namespace shapes {
    class Square;
    class Triangle;
    class Circle;

    class Area {
    public:
        static float calculateSquareArea(const Square& square);
        static float calculateTriangleArea(const Triangle& triangle);
        static float calculateCircleArea(const Circle& circle);
    };
}