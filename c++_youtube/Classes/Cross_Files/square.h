#ifndef SQUARE_H
#define SQUARE_H
// Это строчки выше добавлены, чтобы не было несколько раз определений класса, методов и тд
class Square{
    public:
    Square() = default;
    Square(double param);
    double square();
    void set(double param);
    double get();
    private:
    double side{};
};
// также нужно не забыть добавить endif, тем самым если наш файл уже определен, то уже не придется
// его определять заново и не будет возникать из-за этого ошибок
#endif