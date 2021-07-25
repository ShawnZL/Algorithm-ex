#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// UVa1588
const int MAXN = 1000;

int main() {
    string str1, str2;
    while(cin >> str1 >> str2) {
        int len1 = str1.size();
        int len2 = str2.size();
        int res = len1 + len2, i;
        for (i = 0; i < len1; i++) {
            int j = 0;
            while(j < min(len1 - i, len2)){
                int temp = str1[i + j] - '0' + str2[j] - '0';
                if(temp > 3)
                    break;
                j++;
                //printf("i = %d j = %d\n", i, j);
            }
            if(j == min(len1 - i, len2)) {
                res = res - j;
                break;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}