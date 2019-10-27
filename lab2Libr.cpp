#include "lab2Lib.h"
using namespace std;

Arrow::Arrow() : Arrow("white", 0, 0, 2, 1)
{
}

//Arrow::~Arrow()

void Arrow::print()
{
    cout<<"Color: "<<color<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    cout<<"length: "<<length<<endl;
    cout<<"height: "<<height<<endl;
    return;
}
