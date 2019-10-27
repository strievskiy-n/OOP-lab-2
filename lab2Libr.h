#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Arrow
{
private:
    string color;//цвет
    int x; int y; //координаты левого нижнего угла
    double length; //длинна
    double height; //высота
public:
    Arrow(string color, int x, int y, double length, double height)
    {
        this->color=color;
        this->x=x;
        this->y=y;
        this->length=length;
        this->height=height;
    }
    Arrow(); //Перегруженный класс
    //~Arrow(); //деструктор
    void print();
};

