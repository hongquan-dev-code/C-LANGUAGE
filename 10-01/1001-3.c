#include<stdio.h>

int main() {
    int w_meter,d_meter,k_meter;
    int i = 0, j = 0, k = 0;

    while(i < 4) {
        w_meter = i * 1609;
        printf("%d Mile = %d Meter \n", i, w_meter);
        i++;
    }

    do {
        d_meter = j * 1609;
        printf("%d Mile = %d Meter \n",j, d_meter);
        j++;
    }while(j < 4);

    for(k = 0; k < 4;k++) {
        k_meter = k * 1609;
        printf("%d Mile = %d Meter \n",j, k_meter);
    }
}