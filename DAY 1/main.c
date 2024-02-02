#include <stdio.h>
int main(){
    // compiler will ignore this
    /*
       int,float,char     
    */
    int a=7; // 2 to 4 bytes

    unsigned short integer = 8; // 2 bytes
    long integer1 = 8; // 4bytes
    short integer2 = 8; // 2bytes

    float b = 8.0; // 4bytes - 6 decimal precision

    double myfloat1 =4.75;// 15 decimal places precision
    long double myfloat2 = 7.435328; // 19 decimal places precison

    char c = 't'; //1 byte

    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));
 

   //Rules of defining variables next topic
   

    printf("Hello %d", a);
    return 0;
}