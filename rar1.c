/*program(1)-> Write a program to make use of basic Input/Output functions using different data types.
solution(1)-> Pre-defined values
*/

#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum=55;
    per=88.88;
    grade='A';

    printf("______Student Information_____");
    printf("\n Roll Number : %d",rollnum);
    printf("\n Percentage  : %f",per);
    printf("\n Grade       : %c",grade);

   return 0; 

}