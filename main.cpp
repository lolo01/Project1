#include <iostream>
#include <cmath>

using namespace std;
using namespace arma;

void forwardsubs(double &b, int steps){
    int end=(steps-1)%3;
    int blocks=steps/3;
    double temp;
    for(int i=1;i<=blocks;i++){
        temp=b[i];
        b[i]=b[i+1];
        b[i+1]=temp+2*b[i-1];
        b[i+2]+=b[x+1];
    }
}

int main(int argc, char *argv[])
{
    double *b;  //right part of the equation
    int steps;
    double steplengh;
    double steplenghsteplength100;
    double x=0;

    cout<<"How many steps shall be used?"<<endl;
    cin>>steps;
    steplengh=1.0/steps;
    steplenghsteplength100=steplengh*steplengh*100;

    b = new double[steps];

    for(int i=0;i<steps;i++){
        b[i]=steplenghsteplength100*exp(10*x);
        x+=steplengh;
    }

    return(0);
}
