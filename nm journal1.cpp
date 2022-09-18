#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>



using namespace std;

double func(double x){
return pow(2,x*x)-3*pow(7,x+1);
}

double derivativefunc(double x){
    int x1=pow(2,x*x+1)*x*log(2)-3*pow(7,x+1)*log(7);
return x1;
}

void NewtonRaphson(double x){
    double e = pow(10,-16);
    double a=0.0,b=100.0;
    while((b-x)>e || (x-b)>e){
    b=x;
    x = x - (func(x)/derivativefunc(x));
    }
    cout<<"The root which is required :";
     std::cout << std::fixed;
    std::cout << std::setprecision(20);
    std::cout << x;
}

int main() {
double x0;
cout<<"Enter your estimated value :";
cin>>x0;
NewtonRaphson(x0);

}
