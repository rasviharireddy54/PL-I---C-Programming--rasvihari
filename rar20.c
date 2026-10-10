/*
  Program(20)-> Write a program to accept the elements of a one-dimensional array and calcualte the 
  sum of all its elements.

  Solution(2): Using for loop
*/
 #include<stdio.h>
  int main()
  {
    int arr[5],i=0,sum=0;
    while(i<5)
    {
        printf("Enter element at index %d:",i);
        scanf("%d",&arr[i]);
        i++;
    
    }

    i=0;
    while(i<5)
    {
        sum=sum + arr[i];
        i++;
    }

    printf("\n Sum of all array elemnts=%d",sum);

    return 0;
  }