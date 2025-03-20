#include<stdio.h>
int main(){
    int unit;
    float rate;
    float total ;
    float n_1  ,n_2, n_3;

    printf("Enter the unit:");
    scanf("%d" ,&unit);

    if(unit <= 50){
            if(unit<=150){
                n_1 = unit - 50;
                total = ((n_1 * 0.75) + (50 * 0.50));
                printf("Total bill:%f",total);

            } else if(unit<=250){
                n_2 = unit - 150;
                total = ((n_2 * 1.20) +(50 *0.50) + (100 *0.75));
                printf("Total bill:%f,",total);
            } else{
                  n_3 = unit - 250;
                  total = ((unit * 1.50) +(100 * 1.20) +(50 *0.50) + (100 *0.75));
                  printf("Total bill:%f,",total);
            }

    }else{
        total = unit * 0.50;
        printf("Total bill:%f",total);
        }

    }















