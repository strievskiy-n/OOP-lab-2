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
  virtual void draw() const = 0; //????????????
public:
  Figure(int c, int x, int y);
  virtual ~Figure();
  void move(int dx, int dy); // �������� ������ �� (dx,dy) � ������ �������
  void setBorderColor(int c); // ���������� ���� ������ � ������ �������
  int getBorderColor() const; // �������� ����
  void setVisible( bool isVisible = true );    // ��������/�������� ������
  bool isVisible() const; // ������� ���������
  virtual void calcParams( float& perimeter, float& area ) const = 0;
                 // ��������� �������� � ������� ������
  int retX();
  int retY();
  void setNewXY(int x, int y);
};


class Arrow: public Figure
{
protected:
    virtual void draw() const;
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

    void SetSizes(double length, double height);
    double getHeight() const;
    double getLength() const;
};

class FilledArrow: public Arrow
{
private :
    int k; //���� ������� �������
protected:
    virtual void draw() const;
public:
    FilledArrow(int c, int x, int y, double length, double height, int k): Arrow(c, x, y, length, height)
    {
        this->k=k;
    }
    void SetFillColor(int k);//������ ����� ������� �������
    void EmptyArrow(int& c, int& x, int& y, double& length, double& height); //����������� �������

    void setBorderColor(int p);
};

