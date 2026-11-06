#include <stdio.h>
int main(){
int number;
int i=0;
printf("========== Terminal Nexus ==========\n");
do {
    printf("Pattern Generator (1)\n");
    printf("Pascal's Triangle (2)\n");
    printf("Grade Calculator & Evaluator (3)\n");
    printf("Palindrome Checker (4)\n");
    printf("Enter a number (0 to exit): ");
    scanf("%d", &number);
    while (getchar() != '\n');
    printf("Please enter a valid number between 0 and 4\n");

} while ( number < 0 || number > 4 );
    printf("Thank you for using Terminal Nexus\n");
   

        int rows, columns;
        int number2;
        if (number==1){
        do {
        printf(" ========== Welcome to the Pattern Generator: Powered by Terminal Nexus ==========\n");
        printf("Right Triangle Pattern Generator (1)\n");
        printf("Square Pattern Generator (2)\n");
        printf("Isoceles Triangle Pattern Generator (3)\n");
        printf("Inverted Right Triangle Pattern Generator (4)\n");
        printf("Christmas Tree Pattern Generator (5)\n");
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number2);
            
        if (number2==1){
                printf("Right Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }

            }else if (number2==2){
                printf("Square Pattern Generator\n");
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }

            }else if (number2==3){
                printf("Isoceles Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n");
                }
            }else if (number2==4){
                printf("Inverted Right Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                for (int i = rows ; i >= 1; i--){
                    for (int j= 1; j <= i; j++){
                        printf("* ");
                    }
                    printf("\n");
                }
            }else if (number2==5){
                printf("Christmas Tree Pattern Generator\n");
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n");
                }
            }

        } while ( number2 < 0 || number2 > 5 );
        printf("Thank you for using the Pattern Generator: Powered by Terminal Nexus\n");
    }
return 0;
}