// chuyen doi so giay nhap thanh gio - phut - giay
#include<stdio.h> 
    int main() {
        int in_sec, cho, bun, si; // in_sec: tong giay nhap vao, si: gio, cho: giay

        // nhap so giay
        printf("Input: ");
        scanf("%d", &in_sec);

        // tinh so gio
        si = in_sec / 3600;

        // tinh so phut sau khi tru so gio da doi ra giay
        bun = (in_sec - (si * 3600)) /60;

        // tinh so giay con lai
        cho = in_sec % 60;

        // in ket qua
        printf("Input: %d in_sec = %d si * %d bun * %d cho\n", in_sec, si, bun, cho);
    }
