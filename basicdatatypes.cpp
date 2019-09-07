#include <iostream>
#include <cstdio>
using namespace std;
#include <iostream>
int main() {
    int i;
    long k;
    char c;
    float f; double dh;
    scanf("%i %li %c %f %lf", &i,&k ,&c ,&f ,&dh);
    printf("%i \n%li \n%c \n%.03f \n%.09lf\n", i ,k ,c,f,dh);
    return 0;
}
