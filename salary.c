#include<stdio.h>
int main(void){
    float salary = 0;
    float ekhtelaf = 0 ;
    float tax = 0;
    printf("please enter your salry (as Toman) :\n");
    scanf("%f",&salary);
    while (salary > 5600000){
        if (salary > 35000000){
            ekhtelaf = salary - 35000000;
            tax += (ekhtelaf * 0.3);
            salary = 35000000;
        }
        else if (35000000 >= salary && salary > 25000000 ){
            ekhtelaf = salary - 25000000;
            tax += (ekhtelaf * 0.2); 
            salary = 25000000;
        }
        else if (25000000 >= salary && salary > 15000000 ){
            ekhtelaf = salary - 15000000;
            tax += (ekhtelaf *0.15);
            salary = 15000000;
        }
        else if (15000000 >= salary && salary > 5600000){
            ekhtelaf = salary - 5600000;
            tax += (ekhtelaf * 0.1);
            salary = 5600000;
        }
        else {
            break;
        }
    }
    printf("Your salary is :%.0f \n", tax);
} 