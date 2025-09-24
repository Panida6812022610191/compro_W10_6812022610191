#include <stdio.h>

int main() {
    int P, n;                                                   //กำหนดตัวแปร P,n
    float score, sum = 0, avg;                                  //กำหนดตัวแปร score,sum,avg
    printf("Enter number of student: ");                        //แสดงผลข้อความ Enter number of student:
    scanf("%d", &P);                                            //รับค่าตัวแปร P
    
    printf("Enter %d student scores (one per line): \n", P);    //แสดงผลข้อความ Enter ... student scores (one per line):
    for(n = 1; n <= P; n++ ) {                   //ลูป for กำหนดให้ n = 1 ถ้า n <= P ให้เพิ่มค่า n ทีละ 1
        printf("Score %d: ", n);                 //แสดงผลข้อความ Score 
        scanf("%f", &score);                     //รับค่าตัวแปร score
        sum += score;   
    }avg = sum / P;                              //หาค่าเฉลี่ย

    printf("\nNumber of students = %d\n", P);   //แสดงผลข้อความ Number of students = 
    printf("Average score = %.2f\n", avg);      //แสดงผลข้อความ Average score = 

    return 0;   
}