#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Arrow
{
private:
    string color;//����
    int x; int y; //���������� ������ ������� ����
    double length; //������
    double height; //������
public:
    Arrow(string color, int x, int y, double length, double height)
    {
        this->color=color;
        this->x=x;
        this->y=y;
        this->length=length;
        this->height=height;
    }
    Arrow(); //������������� �����
    //~Arrow(); //����������
    void print();
};

