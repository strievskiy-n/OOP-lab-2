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
  int x,y; // базова€ точка
  virtual void draw() const = 0; //????????????
public:
  Figure(int c, int x, int y);
  virtual ~Figure();
  void move(int dx, int dy); // сместить фигуру на (dx,dy) Ц только видимую
  void setBorderColor(int c); // установить цвет фигуры Ц только видимой
  int getBorderColor() const; // получить цвет
  void setVisible( bool isVisible = true );    // показать/спр€тать фигуру
  bool isVisible() const; // признак видимости
  virtual void calcParams( float& perimeter, float& area ) const = 0;
                 // вычислить периметр и площадь фигуры
  int retX();
  int retY();
  void setNewXY(int x, int y);
};


class Arrow: public Figure
{
protected:
    virtual void draw() const;
private:
    double length; //длинна
    double height; //высота
public:
    Arrow(int c, int x, int y, double length, double height): Figure(c, x, y)
    {
        this->length=length;
        this->height=height;
    }
    Arrow(); //ѕерегруженный класс
    //~Arrow(); //деструктор
    void info();
    virtual void calcParams( float& perimeter, float& area ) const;

    void SetSizes(double length, double height);
    double getHeight() const;
    double getLength() const;
};

class FilledArrow: public Arrow
{
private :
    int k; //цвет заливки стрелки
protected:
    virtual void draw() const;
public:
    FilledArrow(int c, int x, int y, double length, double height, int k): Arrow(c, x, y, length, height)
    {
        this->k=k;
    }
    void SetFillColor(int k);//замена цвета заливки стрелки
    void EmptyArrow(int& c, int& x, int& y, double& length, double& height); //ќпустошение стрелки

    void setBorderColor(int p);
};

