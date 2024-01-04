// This program takes 5 inputs from user. (If the user change the N value he/she can input more), and program outputs the maximum value inside the array.
// Created by Mehmet Akif Duran.

#include <stdio.h>
#include <stdlib.h>
#define N 5

int maxArray(int arr[]);


int main(void){
    
    int counter;
    int numbersArray[N];
    
    printf("This program is going to take 5 inputs from you, if you want to compare more/less numbers you can change the N value\n");
    
    for(counter=0;counter<N;counter++){
        printf("Enter the %d. number : \n", counter+1);
            scanf("%d", &numbersArray[counter]);
    }
    
    maxArray(numbersArray);
    
    return 0;
}


int maxArray(int arr[]){
    
    
    int max;
    int counter;
    
    max = arr[0];
    
    for(counter=0;counter<N;counter++){
        if(arr[counter] > max)
            max = arr[counter+1];
        }

    printf("The maximum number in your array is : %d\n", max);
    
    
    return max;
}
