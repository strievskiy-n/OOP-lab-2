#include <iostream>
#include "lab2Libr.h"
using namespace std;

int main()
{
   cout<<"Ener color of your arrow: ";
   int color;
   cin>>color;
   cout<<"Ener x and y of your arrow: "<<endl;
   int x;
   int y;
   cout<<"x: ";
   cin>>x;
   cout<<"y: ";
   cin>>y;
   cout<<"Ener length of your arrow: ";
   int length;
   cin>>length;
   cout<<"Ener height of your arrow: ";
   int height;
   cin>>height;
   Arrow ar(color, x, y, length, height);
   ar.getBorderColor();
   ar.retX();
   ar.retY();
   ar.info();
   float perimether, area;
   ar.calcParams(perimether, area);
   cout<<"Arrow perimether: "<<perimether<<endl;
   cout<<"Arrow area: "<<area<<endl;
   return 0;

}
