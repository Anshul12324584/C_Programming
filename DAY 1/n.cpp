#include <stdio.h>
int main(){
    

    printf("hello world");


    int x = 3,y,z,s;
    y = x++;
    z = ++x;
    s = x++;
    printf("\n%d,%d,%d,%d\n",x,y,z,s);

    int a=1,b=2,c;
    c=a>b;
    printf("\n%d", c);


    return 0;
}