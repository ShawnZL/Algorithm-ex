#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI acos(-1)//define PI as 圆周率
using namespace std;
/*
int main() {
    double r,h,s1,s2;
    scanf("%lf%lf",&r,&h);
    //%lf means double,f---float;
    s1=2*PI*r*h;
    s2=2*PI*r*r;
    printf("Area = %.3f\n",s1+s2);
    return 0;
}*/

int main(){
    int n,m;
    scanf("%d",&n);
    m=(n%10)*100+(n/10%10)*10+(n/100);
    printf("%03d\n",m);
    return 0;
}