//display numbers from 10 to 20
#include <stdio.h>
int main(){

    int num = 10, sum = 0;

    while(num <= 20){

        sum = sum + num;
        printf("%d",num);
        num++;
    }
    
    return 0;
}
