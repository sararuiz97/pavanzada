#include <stdio.h>

typedef struct d{
    unsigned day:5;
    unsigned month:4;
    unsigned year;
    unsigned flags:5;
} Date;

#define LEAP_MASK 0b10000
#define PRIME_MASK 0b00100


int main(){
    Date today = {23, 4, 2018, 4};
    printf("Size of date %ld \n", sizeof(today));
    printf("Date %d/%d/%d \n", today.day, today.month, today.year);
    printf("Check today is 23. \n");
    if(today.day ^ 23){
        printf("No.\n");
    }
    else{
        printf("Yes, today is 23rd.\n");
    }
    today.flags = 0b11010;
    if((today.flags & (LEAP_MASK | PRIME_MASK)) == (LEAP_MASK | PRIME_MASK)){
        printf("Leap and prime Yyear");
    }
    return 0;
}
