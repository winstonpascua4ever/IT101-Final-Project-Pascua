#include <stdio.h>
#include <string.h>
int main(){
int number;
printf("========== Terminal Nexus ==========\n");
do {
    printf("Pattern Generator (1)\n");
    printf("Pascal's Triangle (2)\n");
    printf("Grade Calculator & Evaluator (3)\n");
    printf("Palindrome Checker (4)\n");
    printf("Enter a number (0 to exit): ");
    if (scanf("%d", &number)!=1) {
        printf("Please enter a valid number between 0 and 4\n");
        while (getchar() != '\n'); 
    }


} while ( number < 0 || number > 4 );
    printf("Thank you for using Terminal Nexus\n");
   

        int rows;
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
        if (scanf("%d", &number2)!=1 ){
            printf("Please enter a valid number between 0 and 5\n");
            while (getchar() != '\n');
       } 
    }while (number2 < 0 || number2 >5 );
        printf("Thank you for using the Pattern Generator: Powered by Terminal Nexus\n");

             if(number2==1){
                while (1){
                printf("Right Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
               if (scanf("%d", &rows)!=1){
                while (getchar()!='\n');
                continue;
               } else if (rows<1){
                continue;
               }
               break;
            }
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                getchar ();
                getchar ();

            }else if (number2==2){
                while (1){
                printf("Square Pattern Generator\n");
                printf("Enter the number of rows: ");
                if(scanf("%d", &rows)!=1){
                while (getchar()!='\n');
                continue;
                }else if (rows<1){
                continue;
                }
                break;
                }
            
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                getchar();
                getchar();

            }else if (number2==3){
                while (1){
                printf("Isoceles Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
                if (scanf("%d", &rows)!=1){
                    while (getchar()!='\n');
                    continue;
                }else if (rows<1){
                continue;
                }
                break;
            }
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n");
                }
                getchar();
                getchar();

            }else if (number2==4){
               while(1){
                printf("Inverted Right Triangle Pattern Generator\n");
                printf("Enter the number of rows: ");
                if (scanf("%d", &rows)!=1){
                    while (getchar()!='\n');
                    continue;
                }else if(rows<1){
                continue;
                }
                break;
            }
                for (int i =1 ; i <= rows; i++){
                    for (int j= rows; j >= i; j--){
                        printf("* ");
                    }
                    printf("\n");
                }
                getchar();
                getchar();
            
            }else if (number2==5){
                while (1){
                printf("Christmas Tree Pattern Generator\n");
                printf("Enter the number of rows: ");
                if (scanf("%d", &rows)!=1){
                    while (getchar()!='\n');
                    continue;
                }else if (rows<1){
                    continue;
                }
                break;
            }
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n");
                }
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= rows - i; j++) {
                        printf(" ");
                    }
                    for (int k = 1; k <= 2 * i - 1; k++) {
                        printf("*");
                    }
                    printf("\n");
                }        
                for (int i = 1; i <= 3; i++) {
                    for (int j = 1; j <= rows-1; j++) {
                        printf(" ");
                    }
                        printf("*\n");
                }
                    printf("\n");
            }
            getchar();
            getchar();
   
        } else if (number==2){
        printf("========== Pascal's Triangle Generator: Powered by Terminal Nexus ==========\n");
         while (1){
        printf("Enter the number of rows: ");
        if (scanf("%d", &rows)!=1){
            while (getchar()!='\n');
            continue;
        }else if (rows<1){
            continue;
        }
        break;
    }
        int value = 1, space, i, j;
        for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
                printf("  ");
            }
            for (j = 1; j <= i; j++) {
                if (j == 1 || j == i) {
                    value = 1;
                } else {
                    value = value * (i - j + 1) / (j - 1);
                }
                printf("%4d", value);
            }
            printf("\n");
        }
        getchar();
        getchar();

    } else if (number==3){
        float prelim, midterm, semifinals, finals, average;
        printf ("========== Grade Calculator & Evaluator ==========\n");
        while (1) {
    printf("Enter Prelim Grade: ");
    if (scanf("%f", &prelim)!=1){
        while (getchar()!='\n');
        continue;

    }
    if (prelim < 0 || prelim > 5) {
        printf("Invalid grade. Please enter a grade between 0 and 5.\n");
        continue;
    }
    break;
    }
    while (1) {
    printf("Enter Midterm Grade: ");
    if (scanf("%f", &midterm)!=1){
       while (getchar()!='\n');
       continue;

    }
    if (midterm < 0 || midterm > 5) {
        printf("Invalid grade. Please enter a grade between 0 and 5.\n");
        continue;
    }
    break;
    }
    while (1) {
    printf("Enter SemiFinals Grade: ");
    if (scanf("%f", &semifinals)!=1){
        while (getchar ()!= '\n');
        continue;
    }
    if (semifinals < 0 || semifinals > 5) {
        printf("Invalid grade. Please enter a grade between 0 and 5.\n");
        continue;
    }
    break;
    }
    while (1) {
    printf("Enter Final Grade: ");
    if (scanf("%f", &finals)!=1){
     while (getchar()!= '\n');
     continue;
    }
    if (finals < 0 || finals > 5) {
        printf("Invalid grade. Please enter a grade between 0 and 5.\n");
        continue;
    }
    break;
    }
    average = (prelim + midterm + semifinals + finals) / 4;

    printf("\nYour Average Grade: %.2f\n", average);

    if (average <= 3) {
        printf("Remarks: PASSED\n");
    } else {
        printf("Remarks: FAILED\n");
    }
    getchar();
    getchar();
    
} else if (number==4){
    
    char word[100];
    int i, length, palindrome = 1;
    printf("========== Palindrome Checker: Powered by Terminal Nexus ==========\n");
    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1) {
        printf("%s is a Palindrome.\n", word);
    } else {
        printf("%s is not a Palindrome.\n", word);
    }
    }
    getchar();
    getchar();
 return 0;
}