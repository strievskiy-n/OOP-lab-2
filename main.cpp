#include <iostream>
#include "lab2Lib.h"
using namespace std;

int main()
{
   cout<<"Ener color of your arrow: ";
   string color;
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
   ar.print();

   return 0;

}
