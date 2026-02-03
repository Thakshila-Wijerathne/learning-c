#include <stdio.h>
#include <stdbool.h> //to work with boolean values

int main(){
    //variables = reusable containers for values, that 
    //            behaves as if they were the value they contain.

    /* Summary 
    int-> whole numbers (4 bytes in modern systems)
    float -> single-precision decimal (4 bytes)
    double -> double-precision decimal (8 bytes)
    char -> single character (1 byte)
    char[] -> array of characters (size varies, known as a string)
    bool -> true or false (1 byte, requires stdbool.h)
    */

    int age  = 21;
    int year = 2026;

    float price = 69.420;
    float interest = 6.5;

    double pi = 3.14159265359;
    double e = 2.71828;

    char mark = '&';
    char color[] = "Lava glow orange";

    bool isOnline = "true";

    printf("you are %d years old\n", age);
    printf("the year is %d\n", year);

    printf("Price of the item is %f\n", price);
    printf("Interest payable per annum is %f\n", interest);

    printf("the value of pi is %.15lf\n", pi);
    printf("the value of e is %.5lf\n", e);

    printf("ampersand mark in C is %c\n", mark);
    printf("Your favourite color is %s\n", color);

    if(isOnline){
        printf ("You are online");}
        else{
            printf("Not online");
    }

    return 0;

}