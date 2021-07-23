/*Second order linear differential equation
Author: Mustaffa
Date: 19 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double y0, y1, y2, x0, x1, r1, r2, A, B, d;
    double t=0;

    cout<<"Please insert y''(t) value: "<<endl;
    cin>>y2;
    cout<<"Please insert y'(t) value: "<<endl;
    cin>>y1;
    cout<<"Please insert y(t) value: "<<endl;
    cin>>y0;
    cout<<"Please insert x(t) value: "<<endl;
    cin>>x0;
    cout<<"Please insert x'(t) value: "<<endl;
    cin>>x1;

    cout<<"The equation should be: "<<y2<<"y''(t)+"<<y1<<"y'(t)+"<<y0<<"y(t) = "<<x0<<"x(t)+"<<x1<<"x'(t)"<<endl;
    cout<<"\n"<<endl;
    cout<<"x ->h ; x ->s"<<endl;
    cout<<"\n"<<endl;
    cout<<"The new equation should be: "<<y2<<"h'' + "<<y1<<"h' + "<<y0<<"h = "<<x0<<"s + "<<x1<<"s' "<<endl;
    cout<<"\n"<<endl;
    cout<<y2<<"r^2 + "<<y1<<"r + "<<y0<<" = 0 "<<endl;
    cout<<"Solve the quadratic equation and please insert the r1 and r2 value: "<<endl;
    cout<<"r1: "<<endl;
    cin>>r1;
    cout<<"r2: "<<endl;
    cin>>r2;
    cout<<"\n"<<endl;
    cout<<"h(t)= Ae^"<<r1<<"t + Be^"<<r2<<"t"<<endl;
    cout<<"h'(t)= "<<r1<< "Ae^"<<r1<<"t + "<<r2<<"Be^"<<r2<<"t"<<endl;
    cout<<"\n"<<endl;
    cout<<"h(0)= 0"<<setw(5)<<"h(0) = Ae^"<<r1 * t<<" + Be^"<<r2 * t<<" = 0"<<endl;
    cout<<"h'(0)= 1"<<setw(5)<<"h'(0) = " <<r1<< "Ae^"<<r1 * t<<" + "<<r2<<"Be^"<<r2 * t<<" = 1"<<endl;
    cout<<"solve A and B using simultaneous equation"<<endl;
    cout<<"please insert value A:"<<endl;
    cin>>A;
    cout<<"please insert value B:"<<endl;
    cin>>B;
    cout<<"\n"<<endl;
    cout<<"h(t)= "<<A<<"e^"<<r1<<"t + "<<B<<"Be^"<<r2<<"t"<<endl;
    cout<<"h'(t)= "<<r1*A<<"e^"<<r1<<"t + "<<r2 * B<<"B^"<<r2<<"t"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"Input: "<<x0<<"x(t) + "<<x1<<"x'(t)"<<endl;
    cout<<"hnew(t) = "<<x0<<"h(t) + "<<x1<<"h'(t)"<<endl;
    cout<<"hnew(t) = "<<x0 * A<<"e^"<<r1<<"t + "<<x0 * B<<"e^"<<r2<<"t"<<" + "<<"("<<x1 * r1 * A<<"e^"<<r1<<"t + "<<x1* r2 * B<<"e^"<<r2<<"t )"<<endl;
    cout<<"Please insert denominator value so it can be convert into fraction:"<<endl;
    cin>>d;
    cout<<"hnew(t) = "<<x0 * A * d<<"/"<<d<<"e^"<<r1<<"t + "<<x0 * B * d<<"/"<<d<<"e^"<<r2<<"t"<<" + "<<"("<<x1 * r1 * A * d<<"/"<<d<<"e^"<<r1<<"t + "<<x1* r2 * B * d<<"/"<<d<<"e^"<<r2<<"t )"<<endl;
}
