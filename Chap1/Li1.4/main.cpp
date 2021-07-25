#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    if(m%2==1||m<n*2||m>n*4)cout<<"No answer";
    //鸡兔同笼考虑不成立条件:(1)m<n*2 腿少 (2)m>n*4 腿多 (3)总腿数不是偶数
    //先判断再求解,短路运算符号
    else{
        int b=(m-2*n)/2;
        printf("%d %d",(n-b),b);
    }
    //printf("%d %d",(n-b),b);
    return 0;
}
