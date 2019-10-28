#include<cmath>
#include "lab2Libr.h"
using namespace std;

Figure::Figure(int c, int x, int y)
{
    this->c=c;
    this->x=x;
    this->y=y;
    visible=false;
}
Figure::~Figure()
{
    //
}
void Figure::move(int dx, int dy)// сместить фигуру на (dx,dy) – только видимую
{
    if(visible)
    {
        x+=dx;
        y+=dy;
    }
    else
    {
        cout<<"This figure is not visible";
    }
}

void Figure::setBorderColor(int c) // установить цвет фигуры – только видимой
{
    if(visible)
    {
        this->c=c;
    }
    else
    {
        cout<<"This figure is not visible";
    }
}

int Figure::getBorderColor() const // получить цвет
{
    return c;
}

void Figure::setVisible( bool isVisible ) // показать/спрятать фигуру
{
    if (isVisible)
    {
        visible=isVisible;
    }
}

bool Figure::isVisible() const // признак видимости
{
    return visible;
}

void Figure::draw() const{
}

void Figure::calcParams( float& perimeter, float& area ) const
{

}
int Figure::retX()
{
    return x;
}
int Figure::retY()
{
    return y;
}

Arrow::Arrow() : Arrow(0, 0, 0, 2, 1)
{
}

//Arrow::~Arrow()

void Arrow::calcParams( float& perimeter, float& area ) const // вычислить периметр и площадь фигуры
{
    perimeter=(length-height)*2+height+sqrt(height*height+height*height);
    area=(length-height/2)*height+height/2*height+height/2;
}
void Arrow::draw() const
{
    cout<<"DROWING ARROW";
}
void Arrow::info()
{
    //cout<<"Color: "<<setBorderColor()<<endl;
    //cout<<"x: "<<retX()<<" y: "<<retY()<<endl;
    cout<<"length: "<<length<<endl;
    cout<<"height: "<<height<<endl;
    return;
}
