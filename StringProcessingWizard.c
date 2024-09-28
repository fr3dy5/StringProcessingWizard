/*
-The program should take a string as a command-line argument. If no argument is provided, it should display a usage message and exit.
-The program should use pointer arithmetic to manipulate the string in various functions, such as counting characters, reversing 
the string, converting to uppercase, checking for palindrome, and counting occurrences of a character.
-The program should use symbolic constants to define the maximum input string size (100) 
and the return values for the palindrome check function.---------?????????-------------
-The program should use the fgets() function to safely read user input as a string and the atoi() function to convert the user's menu 
selection from a string to an integer and the toupper() function to convert the input string to uppercase.
-The program should implement appropriate functions for each string processing operation and call them based on the user's menu choice.
-The program should provide an option to continue or exit after each operation.---------?????HOW?????---------
--------------------------------------------------------------------------------------------------------------------------
-Use meaningful variable and function names to enhance code readability.
-Handle invalid user inputs gracefully, such as non-numeric values or out-of-range choices.
-Use comments to explain key sections of the code.
-Test the program with various inputs to ensure accuracy and reliability.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_STRING_SIZE 100 //------???implemented or need to implement??????HOW??????-----
#define PALINDROME_FOUND 1 //implement 1 and 0 into palindrome function--------
#define PALINDROME_NOT_FOUND 0 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^--------


//1. strlen function - no function needed?
//2. string reverse function ??--math--??
void reverse(char *str) {
    int length = strlen(str);
    int middle = length / 2;
    char temp; 
    for (int i = 0; i < middle; i++){
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    }
//3. toupper funtion
void uppercaseit(char *str) {
    while (*str != '\0') {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

//4. palindrome function ??--more math--???
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return PALINDROME_NOT_FOUND;
        }
        left++;
        right--;
    }
    return PALINDROME_FOUND;
}
//5. character counter ------???maaaaaathhh??-----


//int enterkey = getchar();

int main(int argc, char *argv[]) {
        int userInput[1];
        int enterkey = getchar();
        char str[MAX_INPUT_STRING_SIZE];
        // add max character constant into this if statement??
        if (argc < 2) {
            printf("Original string: %s\n", argv[0]);
            return 1;
        }

        //0. starting prompt---------?????Add more instruction????---------
        printf("String Processing Tool\n1. Count characters\n2. Reverse string\n3. Convert to uppercase\n4. Check palindrome\n5. Count occurrences of a character\n6. Exit\n");
    do {
        printf("Enter your input_selection:");
        scanf("%d", userInput); //fgets this?-------------------- 

        switch (userInput[0]) {
        case '1': {
            char str = argv[1];
            int length = strlen(str);
            printf("Number of characters: %d", length);
            printf("Press Enter to continue...");
            if (enterkey == '\n') {
                continue;
            }
           } break;
        
        case '2': {
            char str[] = *argv[1];
            reverse(str);
            printf("Reversed string is: %s\n", str);
            printf("Press Enter to continue...\n");
            if (enterkey == '\n') {
                continue;
            }
        }
            break;

        case '3': {
            uppercaseit(argv[1]);
            printf("Uppercase string: %s\n", str);
            printf("Press Enter to continue...");
            if (enterkey == '\n') {
                continue;
            }
        }
            break;

        case '4': {
            if (isPalindrome(argv[1]) == PALINDROME_FOUND) {
            printf("%s is a palindrome\n", str);
            }            
            else {
            printf("%s is not a palindrome\n", str);
            }
            printf("Press Enter to continue...\n");
            if (enterkey == '\n') {
                continue;
            }
        }
            break;

        case '5': {

            printf("Enter a character to count: \n", );

            printf("Occurrences of '%s': %d", , );

            printf("Press Enter to continue...\n");
            if (enterkey == '\n') {
                continue;
            }
        }
            break;

        case '6': {
            printf("Exiting the program.\n");
        }
            break;

        default: {
            printf("invalid input\n");
        }
            break;
        }

    }
    while (strcmp(userInput, "6") != 0);

return 0;
}