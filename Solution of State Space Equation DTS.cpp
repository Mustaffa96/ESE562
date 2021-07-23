/*Solution of State Space Equation DTS
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
    cout<<"d/dL[L^k=Beta1+Beta2(L)]"<<endl;
    cout<<"k*L^k-1 = Beta2"<<endl;
    cout<<"Beta2 = k*"<<L1<<"^k-1"<<endl;
    cout<<"\n";
    cout<<""<<L1<<"^k = Beta1 + k*"<<L1<<"^k-1"<<endl;
    cout<<"Beta1 = "<<L1<<"^k - k*"<<L1<<"^k-1"<<endl;
    }
    else{
    cout<<"lambda = "<<L1<<"; "<<L1<<"^k = Beta1 + "<<L1<<"Beta2"<<endl;
    cout<<"lambda = "<<L2<<"; "<<L2<<"^k = Beta1 + "<<L2<<"Beta2"<<endl;
    cout<<"("<<L1<<")^k - ("<<L2<<")^k = "<<L1<<"Beta2 - "<<L2<<"Beta2"<<endl;
    cout<<"Beta2 = ("<<L1<<")^k - ("<<L2<<")^k / "<<L1-L2<<endl;
    cout<<"\n";
    cout<<"Beta1 = ("<<L1<<")^k - ("<<L1<<")^k - ("<<L2<<")^k / "<<L1-L2<<endl;
    }
    cout<<"(A)^k = Beta1*I + Beta2*A"<<endl;
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
    cout<<"Solve until get A^k"<<endl;
    cout<<"\n";
    cout<<"Finding yzi(t) = C*A^k * q(0)"<<endl;
    cout<<""<<c1<<"*(phi11*"<<x1<<"+ phi12*"<<x2<<") + "<<c2<<"*(phi21*"<<x1<<" + phi22*"<<x2<<")"<<endl;
    cout<<"Solve it by your own"<<endl;
    cout<<"\n";
    cout<<"Finding h(t) = C*A^k * B"<<endl;
    cout<<""<<c1<<"*(phi11*"<<b1<<"+ phi12*"<<b2<<") + "<<c2<<"*(phi21*"<<b1<<" + phi22*"<<b2<<")"<<endl;
    cout<<"Solve it by your own"<<endl;
    cout<<"\n";
    cout<<"Finding yzs(t) = Summation of C*A^k-1-j . Bu(j) + Du(t)"<<endl;
    cout<<"Solve it by your own, apply Summation of a^k either a>1 or a<1"<<endl;
    cout<<"\n";
    cout<<"y(t) = yzs(t) + yzi(t)"<<endl;
}
