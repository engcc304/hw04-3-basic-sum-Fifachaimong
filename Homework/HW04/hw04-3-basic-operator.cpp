
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Input:\n");
    scanf("%d %d %d", &a, &b, &c);

    int answer = a + b + c;

    printf("Output:\n");
    printf("Answer = %d\n", answer);

    return 0;
}









