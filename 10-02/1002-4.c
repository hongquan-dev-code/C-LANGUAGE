#include <stdio.h>   // Thư viện nhập/xuất: dùng printf, scanf
#include <stdlib.h>  // Thư viện chuẩn: dùng hàm rand(), srand()
#include <time.h>    // Thư viện thời gian: dùng time(NULL)

// 🎯 Mục tiêu: tạo ra một số ngẫu nhiên (1~100) và cho người chơi đoán đến khi đúng

int main() {
    int your, com, cnt = 0;    // your: số người chơi nhập, com: số máy tính, cnt: đếm số lần đoán
    srand(time(NULL));         // "Gieo hạt" cho hàm rand() dựa theo thời gian hiện tại
                               // Giúp mỗi lần chạy chương trình -> ra số ngẫu nhiên khác nhau

    com = rand() % 100 + 1;    // Sinh số ngẫu nhiên từ 1 đến 100 (0~99 rồi cộng 1)
                               // Ví dụ: rand() cho 57 -> com = 58

    while(1) {                 // Vòng lặp vô hạn, sẽ chỉ dừng khi đoán đúng (break)
        cnt++;                 // Mỗi lần đoán, tăng biến đếm lên 1

        printf("Input: ");     // Nhắc người chơi nhập số
        scanf("%d", &your);    // Nhập giá trị đoán từ bàn phím và lưu vào biến your

        if(your == com) {      // Nếu số đoán bằng số của máy
            printf("Right!\n");// Thông báo đoán đúng
            break;             // Thoát vòng lặp
        }

        if(your < com)         // Nếu số người chơi nhập nhỏ hơn số bí mật
            printf("Lower\n"); // Báo “Lower” nghĩa là “Số của bạn thấp hơn!”
        
        if(your > com)         // Nếu số người chơi nhập lớn hơn số bí mật
            printf("High\n");  // Báo “High” nghĩa là “Số của bạn cao quá!”
    }

    // Sau khi thoát vòng lặp (đoán đúng), in ra số lần đoán
    printf("%d 번째 성공\n", cnt);  // In ra “Bạn đã thành công ở lần thứ cnt”
                                   // (Tiếng Hàn: ‘번째 성공’ nghĩa là ‘lần thứ ... thành công’)

    return 0;  // Kết thúc chương trình
}
