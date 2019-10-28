#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Figure
{
  int c; // цвет
  bool visible; //0-да, 1-нет
protected:
  int x,y; // базовая точка
  virtual void draw() const; //????????????
public:
  Figure(int c, int x, int y);
  ~Figure();
  void move(int dx, int dy); // сместить фигуру на (dx,dy) – только видимую
  void setBorderColor(int c); // установить цвет фигуры – только видимой
  int getBorderColor() const; // получить цвет
  void setVisible( bool isVisible = true );    // показать/спрятать фигуру
  bool isVisible() const; // признак видимости
  virtual void calcParams( float& perimeter, float& area ) const;
                 // вычислить периметр и площадь фигуры
  int retX();
  int retY();
};


class Arrow: public Figure
{
private:
    double length; //длинна
    double height; //высота
public:
    Arrow(int c, int x, int y, double length, double height): Figure(c, x, y)
    {
        this->length=length;
        this->height=height;
    }
    Arrow(); //Перегруженный класс
    //~Arrow(); //деструктор
    void info();
    virtual void calcParams( float& perimeter, float& area ) const;
    virtual void draw() const;
};

