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
        draw();
    }
    else
    {
        cout<<"This figure is not visible"<<endl;
    }
}

void Figure::setBorderColor(int c) // установить цвет фигуры – только видимой
{
    if(visible)
    {
        this->c=c;
        draw();
    }
    else
    {
        cout<<"This figure is not visible"<<endl;
    }
}

int Figure::getBorderColor() const // получить цвет
{
    return c;
}

void Figure::setVisible( bool isVisible ) // показать/спрятать фигуру
{
        visible=!isVisible;
        if (visible)
        {
            draw();
        }
}

bool Figure::isVisible() const // признак видимости
{
    return visible;
}


int Figure::retX()
{
    return x;
}
int Figure::retY()
{
    return y;
}
void  Figure::setNewXY(int x, int y)
{
    this->x=x;
    this->y=y;
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
    if(isVisible())
    {
    cout<<"#### ARROW ####"<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    cout<<"border: "<<getBorderColor()<<endl;
    cout<<"visible: yes"<<endl;
    cout<<"length: "<<length<<endl;
    cout<<"height: "<<height<<endl;
    cout<<"##############"<<endl;
    }
    else
    {
        cout<<"Your arrow is not visible"<<endl;
    }
}
void Arrow::info()
{
    //cout<<"Color: "<<setBorderColor()<<endl;
    //cout<<"x: "<<retX()<<" y: "<<retY()<<endl;
    cout<<"length: "<<length<<endl;
    cout<<"height: "<<height<<endl;
    return;
}
void Arrow::SetSizes(double length, double height)
{
    this->length=length;
    this->height=height;
    draw();
}
double Arrow::getHeight() const
{
    return height;
}
double Arrow::getLength() const
{
    return length;
}

void FilledArrow::SetFillColor(int k)
{
    this->k=k;
    draw();
}
void FilledArrow::EmptyArrow(int& c, int& x, int& y, double& length, double& height)
{
    c = getBorderColor();
    x = retX();
    y = retY();
    length = getLength();
    height = getHeight();
}

void FilledArrow::draw() const
{
    if(isVisible())
    {
    cout<<"#### FILLED ARROW ####"<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    cout<<"border: "<<getBorderColor()<<endl;
    cout<<"visible: yes"<<endl;
    cout<<"fill: "<<k<<endl;
    cout<<"length: "<<getLength()<<endl;
    cout<<"height: "<<getHeight()<<endl;
    cout<<"##############"<<endl;
    }
    else
    {
        cout<<"Your arrow is not visible"<<endl;
    }
}

void FilledArrow::setBorderColor(int p)
{
    if(k!=p)
    {
        Figure::setBorderColor(p);
        draw();
    }
    else
    {
        cout<<"color matching!"<<endl;
    }
}
