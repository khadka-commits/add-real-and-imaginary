#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
public:
    void getdata()
    {
       cout<<"the real part is :";
       cin>>real;
       cout<<"the imag part is :" ;
       cin>>imag;
       }
      void putdata(char*msg)
      {
          cout<<endl<<msg;                          //void putdata()
                                                      //cout<<"the real part is :"<<real;
                                                       //cout<<" the imag part is :"<<imag;
        cout<<"("<<real<<","<<imag<<")";
       }
       complex addcomplex(complex );
       };
 complex complex::addcomplex(complex o1)
 {
     complex temp;
     temp.real=real+o1.real;
     temp.imag=imag+o1.imag;
     return temp; }
     int main()
     {
        complex o1,o2,o3;
        o1.getdata();
        o2.getdata();
        o3=o2.addcomplex(o1);
        o3.putdata("o3=o2.addcomplex(o1)");
        return 0;
     }
