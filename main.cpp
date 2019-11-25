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

   Arrow* ar = new Arrow(color, x, y, length, height);
   int ind=10;
   while(ind!=0)
   {
       bool isFilled = dynamic_cast<FilledArrow*>(ar) != 0;

       cout<<"Move (if visible) - 1"<<endl;
       cout<<"Change border color (if visible) - 2"<<endl;
       cout<<"Set visible - 3"<<endl;
       cout<<"Count perimeter and area of your arrow - 4"<<endl;
       cout<<"Set new sizes - 5"<<endl;

       if (!isFilled)
       {
           cout<<"Fill your arrow - 6"<<endl;
       }
       else
       {
           cout<<"Set new fill color - 6"<<endl;
           cout<<"Empty your arrow - 7"<<endl;
       }

       cout<<"End - 0"<<endl;
       cin>>ind;

       if(ind==1)//Двигаю стрелку (координаты)
       {
            cout<<"You can move your visible arrow across x and y; across x: ";
            int x;
            cin>>x;
            cout<<" across y: ";
            int y;
            cin>>y;
            ar->move(x, y);
       }
       else if(ind==2) //меняю цвет границы стрелки
       {
           cout<<"Enter new border color: ";
           int c;
           cin>>c;
           ar->setBorderColor(c);
       }
       else if(ind==3) //делаю стрелку видимой
       {
           ar->setVisible(!ar->isVisible());
       }
       else if(ind==4) //считаю периметр и площадь стрелки
       {
           float perimether, area;
           ar->calcParams(perimether, area);
           cout<<"Arrow perimether: "<<perimether<<endl;
           cout<<"Arrow area: "<<area<<endl;
       }
       else if(ind==5)//меняю длинну и высоту стрелки
       {
           cout<<"Ener new length of your arrow: ";
           double length;
           cin>>length;
           cout<<"Ener new height of your arrow: ";
           double height;
           cin>>height;
           ar->SetSizes(length, height);
           //ar.draw();
           //FilledArrow far(ar.getBorderColor, ar.retX, ar.retY(), ar.getLength(), ar.getHeight());
       }
       else if(ind==6) //закрашиваю стрелку определенным цветом
       {
           if (!isFilled)
           {
                cout<<"Ener color to fill your arrow: ";
               int col;
               cin>>col;
               Arrow* tmp = ar;
               ar = new FilledArrow(ar->getBorderColor(), ar->retX(), ar->retY(), ar->getLength(), ar->getHeight(), col);

               if(tmp->isVisible())
               {
                   ar->setVisible();
               }

               delete tmp;
           }
           else
           {
               cout<<"Ener new fill color of your arrow: ";
               int l;
               cin>>l;
               ((FilledArrow*)ar)->SetFillColor(l);
           }
       }

       else if (ind==7 && isFilled)
       {
           int c, x, y;
           double length, height;
           FilledArrow* tmp = (FilledArrow*)ar;
           tmp->EmptyArrow(c, x, y, length, height);

           ar = new Arrow(c, x, y, length, height);

           if (tmp->isVisible())
           {
               ar->setVisible();
           }

           delete tmp;
       }
       else
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
   delete ar;
   return 0;

}
