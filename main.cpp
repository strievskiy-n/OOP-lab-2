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
       cout<<"Set new sizes - 5"<<endl;
       cout<<"Fill your arrow - 6"<<endl;
       cout<<"End - 0"<<endl;
       cin>>ind;
       if(ind==1)//ƒвигаю стрелку (координаты)
       {
            cout<<"You can move your visible arrow across x and y; across x: ";
            int x;
            cin>>x;
            cout<<" across y: ";
            int y;
            cin>>y;
            ar.move(x, y);
       }
       if(ind==2) //мен€ю цвет границы стрелки
       {
           cout<<"Enter new border color: ";
           int c;
           cin>>c;
           ar.setBorderColor(c);
       }
       if(ind==3) //делаю стрелку видимой
       {
           ar.setVisible(ar.isVisible());
       }
       if(ind==4) //считаю периметр и площадь стрелки
       {
           float perimether, area;
           ar.calcParams(perimether, area);
           cout<<"Arrow perimether: "<<perimether<<endl;
           cout<<"Arrow area: "<<area<<endl;
       }
       if(ind==5)//мен€ю длинну и высоту стрелки
       {
       cout<<"Ener new length of your arrow: ";
       double length;
       cin>>length;
       cout<<"Ener new height of your arrow: ";
       double height;
       cin>>height;
       ar.SetSizes(length, height);
       //ar.draw();
       //FilledArrow far(ar.getBorderColor, ar.retX, ar.retY(), ar.getLength(), ar.getHeight());
       }
       if(ind==6) //закрашиваю стрелку определенным цветом
       {
           cout<<"Ener color to fill your arrow: ";
           int col;
           cin>>col;
           FilledArrow far(ar.getBorderColor(), ar.retX(), ar.retY(), ar.getLength(), ar.getHeight(), col);
           if(ar.isVisible())
           {
               far.setVisible(far.isVisible());
           }
           int ind2=10;
           int flag=1;
           while(ind2!=0)
           {
               cout<<"Move (if visible) - 1"<<endl;
               cout<<"Change border color (if visible) - 2"<<endl;
               cout<<"Set visible - 3"<<endl;
               cout<<"Count perimeter and area of your arrow - 4"<<endl;
               cout<<"Set new sizes - 5"<<endl;
               cout<<"Set new fill color - 6"<<endl;
               cout<<"Empty your arrow - 7"<<endl;
               cout<<"End - 0"<<endl;
               cin>>ind2;
               if(ind2==1)//ƒвигаю стрелку (координаты)
               {
                    cout<<"You can move your visible arrow across x and y; across x: ";
                    int x;
                    cin>>x;
                    cout<<" across y: ";
                    int y;
                    cin>>y;
                    far.move(x, y);
               }
               if(ind2==2) //мен€ю цвет границы стрелки
               {
                   cout<<"Enter new border color: ";
                   int c;
                   cin>>c;
                   far.setBorderColor(c);
               }
               if(ind2==3) //делаю стрелку видимой
               {
                   far.setVisible(far.isVisible());
               }
               if(ind2==4) //считаю периметр и площадь стрелки
               {
                   float perimether, area;
                   far.calcParams(perimether, area);
                   cout<<"Arrow perimether: "<<perimether<<endl;
                   cout<<"Arrow area: "<<area<<endl;
               }
               if(ind2==5)//мен€ю длинну и высоту стрелки
               {
               cout<<"Ener new length of your arrow: ";
               double length;
               cin>>length;
               cout<<"Ener new height of your arrow: ";
               double height;
               cin>>height;
               far.SetSizes(length, height);
               //far.draw();
               }
               if(ind2==6) //мен€ю цвет заливки стрелки
               {
                   cout<<"Ener new fill color of your arrow: ";
                   int l;
                   cin>>l;
                   far.SetFillColor(l);
               }
               if(ind2==7) //ƒелаю стрелку пустой
               {
                   int c, x, y;
                   double length, height;
                   far.EmptyArrow(c, x, y, length, height);
                   ar.setVisible(false);
                   ar.setBorderColor(c);
                   ar.setNewXY(x ,y);
                   ar.SetSizes(length, height);

                   ar.setVisible(far.isVisible());
                   flag = 0;
                   break;
               }
               /*if(ind2!=1 && ind2!=2 && ind2!=3 && ind2!=4 && ind2!=5 && ind2!=6 && ind2!=7)
               {
                   cout<<"There is no option!"<<endl;
               }*/
          }if(flag==1){ind=0;}
       }
       if(ind!=0 && ind!=1 && ind!=2 && ind!=3 && ind!=4 && ind!=5 && ind!=6)
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
