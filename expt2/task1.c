/*
    Expt. No : 2 (task 1)
    Title : WAP to find if the entered number is even or odd.

    Name: Shaikh Kamran Shaikh
    Class & Div: ECS-E
    UIN: 241S012
 */
// finding ever or odd number 
#include <stdio.h>

int main() {
    int num;
    printf("\t\t\t *** Even Odd Finder *** \n\n\n");
    //fecthing input
    printf("Enter Number: ");
    scanf("%d", &num); 
    if (num % 2 == 0) {
        //printing output
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;  
}

/* 
			 *** Even Odd Finder *** 
    
Enter Number: 21
21 is odd
*/
