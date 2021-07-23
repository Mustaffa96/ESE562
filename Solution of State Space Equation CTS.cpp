/*State Space Equation CTS
Author: Mustaffa
Date: 21 July 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double a11, a12, a21, a22, b1, b2, c1, c2, x1, x2, L1, L2;
    double d=0;

    cout<<"Please insert a11 value: "<<endl;
    cin>>a11;
    cout<<"Please insert a12 value: "<<endl;
    cin>>a12;
    cout<<"Please insert a21 value: "<<endl;
    cin>>a21;
    cout<<"Please insert a22 value: "<<endl;
    cin>>a22;
    cout<<"Please insert b11 value: "<<endl;
    cin>>b1;
    cout<<"Please insert b21 value: "<<endl;
    cin>>b2;
    cout<<"Please insert c11 value: "<<endl;
    cin>>c1;
    cout<<"Please insert c12 value: "<<endl;
    cin>>c2;
    cout<<"Please insert x11 value: "<<endl;
    cin>>x1;
    cout<<"Please insert x21 value: "<<endl;
    cin>>x2;

    cout<<"|LI - A| = 0"<<endl;
    cout<<"|L - "<<a11<<"\t - "<<a12<<"|"<<endl;
    cout<<"| - "<<a21<<"\tL - "<<a22<<"|"<<endl;
    cout<<"\n";
    cout<<"(L - "<<a11<<")(L - "<<a22<<") - (- "<<a21<<")(- "<<a12<<")"<<endl;
    cout<<"Expand the equation(using Symbolab) and find roots L1 and L2 using simultaneous equation"<<endl;
    cout<<"Insert lamda 1 and lambda 2 below: "<<endl;
    cin>>L1;
    cin>>L2;
    cout<<"L1= "<<L1<<"and L2= "<<L2<<endl;
    if(L1 == L2){
    cout<<"d/dL[e^Lt=Beta1+Beta2(L)]"<<endl;
    cout<<"t*e^Lt = Beta2"<<endl;
    cout<<"Beta2 = t*e^"<<L1<<"t"<<endl;
    cout<<"\n";
    cout<<"e^"<<L1<<"t = Beta1 + t*e^"<<L1<<"t"<<endl;
    cout<<"Beta1 = e^"<<L1<<"t - t*e^"<<L1<<"t"<<endl;
    }
    else{
    cout<<"lambda = "<<L1<<"; e^"<<L1<<"t = Beta1 + "<<L1<<"Beta2"<<endl;
    cout<<"lambda = "<<L2<<"; e^"<<L2<<"t = Beta1 + "<<L2<<"Beta2"<<endl;
    cout<<"e^"<<L1<<"t - e^"<<L2<<" = "<<L1<<"Beta2 - "<<L2<<"Beta2"<<endl;
    cout<<"Beta2 = e^"<<L1<<"t - e^"<<L2<<"t / "<<L1-L2<<endl;
    cout<<"\n";
    cout<<"Beta1 = e^"<<L1<<"t - e^"<<L1<<"t - e^"<<L2<<"t / "<<L1-L2<<endl;
    }
    cout<<"e^At = Beta1*I + Beta2*A"<<endl;
    cout<<"I = [1\t0]"<<endl;
    cout<<"I = [0\t1]"<<endl;
    cout<<"\n";
    cout<<"A = ["<<a11<<"\t"<<a12<<"]"<<endl;
    cout<<"A = ["<<a21<<"\t"<<a22<<"]"<<endl;
    cout<<"\n";
    cout<<"phi11 = Beta1 + "<<a11<<"*Beta2"<<endl;
    cout<<"phi12 = 0 + "<<a12<<"*Beta2"<<endl;
    cout<<"phi21 = 0 + "<<a21<<"*Beta2"<<endl;
    cout<<"phi22 = Beta1 + "<<a22<<"*Beta2"<<endl;
    cout<<"Solve until get e^At"<<endl;
    cout<<"\n";
    cout<<"Finding yzi(t) = Ce^At * x(0)"<<endl;
    cout<<""<<c1<<"*(phi11*"<<x1<<"+ phi12*"<<x2<<") + "<<c2<<"*(phi21*"<<x1<<" + phi22*"<<x2<<")"<<endl;
    cout<<"Solve it by your own"<<endl;
    cout<<"\n";
    cout<<"Finding h(t) = Ce^At * B"<<endl;
    cout<<""<<c1<<"*(phi11*"<<b1<<"+ phi12*"<<b2<<") + "<<c2<<"*(phi21*"<<b1<<" + phi22*"<<b2<<")"<<endl;
    cout<<"Solve it by your own"<<endl;
    cout<<"\n";
    cout<<"Finding yzs(t) = integral of (limit 0 to t) h(taw)u(t-taw)dtaw"<<endl;
    cout<<"yzs(t) = integral of (limit 0 to t) Ce^Ataw * B . u(t-taw)dtaw + Du(t)"<<endl;
    cout<<"Solve it by your own"<<endl;
    cout<<"\n";
    cout<<"y(t) = yzs(t) + yzi(t)"<<endl;
}
