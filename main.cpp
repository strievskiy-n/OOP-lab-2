#include <iostream>
#include "lab2Libr.h"
using namespace std;

int main()
{
   cout<<"Ener border color of your arrow: ";
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
   double length;
   cin>>length;
   cout<<"Ener height of your arrow: ";
   double height;
   cin>>height;
   Arrow ar(color, x, y, length, height);
   int ind=10;
   while(ind!=0)
   {
       cout<<"Move (if visible) - 1"<<endl;
       cout<<"Change border color (if visible) - 2"<<endl;
       cout<<"Set visible - 3"<<endl;
       cout<<"Count perimeter and area of your arrow - 4"<<endl;
       cout<<"'Draw' (if visible) - 5"<<endl;
       cout<<"End - 0"<<endl;
       cin>>ind;
       if(ind==1)
       {
            cout<<"You can move your visible arrow across x and y; across x: ";
            int x;
            cin>>x;
            cout<<" across y: ";
            int y;
            cin>>y;
            ar.move(x, y);
       }
       if(ind==2)
       {
           cout<<"Enter new border color: ";
           int c;
           cin>>c;
           ar.setBorderColor(c);
       }
       if(ind==3)
       {
           ar.setVisible();
       }
       if(ind==4)
       {
           float perimether, area;
           ar.calcParams(perimether, area);
           cout<<"Arrow perimether: "<<perimether<<endl;
           cout<<"Arrow area: "<<area<<endl;
       }
       if(ind==5)
       {
           ar.draw();
       }
       if(ind!=0 && ind!=1 && ind!=2 && ind!=3 && ind!=4 && ind!=5)
       {
           cout<<"There is no option!"<<endl;
       }
   }
   /*ar.getBorderColor();
   ar.retX();
   ar.retY();
   ar.info();
   float perimether, area;
   ar.calcParams(perimether, area);
   cout<<"Arrow perimether: "<<perimether<<endl;
   cout<<"Arrow area: "<<area<<endl;*/
   return 0;

}
