#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Figure
{
  int c; // ����
  bool visible; //0-��, 1-���
protected:
  int x,y; // ������� �����
  virtual void draw() const; //????????????
public:
  Figure(int c, int x, int y);
  ~Figure();
  void move(int dx, int dy); // �������� ������ �� (dx,dy) � ������ �������
  void setBorderColor(int c); // ���������� ���� ������ � ������ �������
  int getBorderColor() const; // �������� ����
  void setVisible( bool isVisible = true );    // ��������/�������� ������
  bool isVisible() const; // ������� ���������
  virtual void calcParams( float& perimeter, float& area ) const;
                 // ��������� �������� � ������� ������
  int retX();
  int retY();
};


class Arrow: public Figure
{
private:
    double length; //������
    double height; //������
public:
    Arrow(int c, int x, int y, double length, double height): Figure(c, x, y)
    {
        this->length=length;
        this->height=height;
    }
    Arrow(); //������������� �����
    //~Arrow(); //����������
    void info();
    virtual void calcParams( float& perimeter, float& area ) const;
    virtual void draw() const;
};

