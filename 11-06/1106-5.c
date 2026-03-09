#include <stdio.h>

void ptr(int *pt, int SIZE) // Hàm in mảng bằng con trỏ
{
    printf("Array = [ ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", *(pt + i));   // *(pt + i): phần tử thứ i trong mảng (배열의 i번째 요소)
    }
    printf("]");
}

double cas(int *pt, int SIZE) // Hàm tính tổng các phần tử trong mảng bằng con trỏ
{
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += *(pt + i);  // Cộng giá trị của từng phần tử vào sum
    }
    return sum;  // Trả về tổng (합을 반환)    
}

int main()
{
    int arr[] = {20, 30, 70, 80};  // Mảng số nguyên (정수 배열)
    int SIZE;
    double sum = 0;
    double avg;  // Trung bình cộng (평균)

    // Tính số phần tử trong mảng
    SIZE = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr): tổng byte của mảng (배열 전체 크기)
    // sizeof(arr[0]): kích thước 1 phần tử (요소 하나의 크기)
    // VD: 16 / 4 = 4

    ptr(arr, SIZE);  // Gọi hàm in mảng

    // Gọi hàm tính tổng
    sum = cas(arr, SIZE);

    // Tính trung bình cộng
    avg = sum / SIZE;

    // In kết quả ra màn hình
    printf("\nSum = %.2lf  \nAVG = %.2lf\n", sum, avg);
    return 0;
}
