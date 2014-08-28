#include <iostream>
#include <cmath>

using namespace std;

void forwardsubs(double *b, int steps){
    for(int i=1;i<steps;i++){
        b[i]=(i+1)*b[i]+b[i-1];
    }
}

void backwardsubs(double *b, int steps){
    b[steps]/=(steps+1);
    for(int i=steps-2;i>=0;i--){
        b[i]=(b[i]+4*b[i+1])/(steps+1);
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
    forwardsubs(b,steps);
    backwardsubs(b,steps);

    for(int i=0;i<steps;i++){
        cout<<b[i]<<endl;
    }

    return(0);
}
