#ifndef OOP_GAME_POINT_H
#define OOP_GAME_POINT_H
class Point{
private:
    int y, x;
public:
    Point(int y, int x): y(y), x(x){}

    int getx(){
        return x;
    }

    int gety(){
        return y;
    }
};
#endif //OOP_GAME_POINT_H
