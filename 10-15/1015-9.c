#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int x, y, sum = 0;
    int rst;
    int cnt = 0;

    while(1) {   
        srand(time(NULL));
        
        x = rand() % 50;
        y = rand() % 50;

        if(cnt == 5) break;
        cnt++;

        printf("%d + %d =  ", x, y);
        scanf("%d", &sum);

        rst = x + y;

        if(rst == sum) {
        printf("맞았네\n");
        break;
        }
        else {
            printf("틀렸네\n");
        }

    }
}