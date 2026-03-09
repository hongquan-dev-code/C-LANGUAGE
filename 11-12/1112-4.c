#include <stdio.h>

double FtoC(double temp_f) {   
    double temp_c;
    temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
    return temp_c;
}
  
int main(void) {
    double c, f;
    f = 32.0;
    c = FtoC(f);               
    printf("화씨온도 %f 은 섭씨온도 %f 에 해당한다.\n", f, c);
    return 0;
}

