#include <stdio.h>

int main() {
    int phy, chem, maths;
    float avg; 

    printf("+++ Student Eligibility Calculator +++\n");

    printf("Enter physics marks: ");
    scanf("%d", &phy);

    printf("Enter chemistry marks: ");
    scanf("%d", &chem);

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    avg = (phy + chem + maths) / 3.0;

    printf("PCM Average = %.2f\n", avg);  

    if (avg > 50) {
        printf("You are eligible for admission.\n");
    } else {
        printf("You are not eligible for admission.\n");
    }

    return 0;
}
