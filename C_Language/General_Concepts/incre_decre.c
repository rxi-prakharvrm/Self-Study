/* 

⚠️⚠️ Associative of pre-increment, pre-decrement, post-increment and post-increment is from left-to-right in expression. ⚠️⚠️
⚠️⚠️ Associative of pre-increment, pre-decrement, post-increment and post-decrement is from right-to-left in print statement. ⚠️⚠️
⚠️⚠️ In function call, associativity is from right-to-left. ⚠️⚠️

*/

#include <stdio.h>

void processVariant(int variant, int initial, int isIncrement) {
    int i = initial;

    switch(variant) {
        case 1:
            if (isIncrement) {
                printf("%d %d\n", ++i, ++i);
                printf("%d %d\n", i++, i++);
            } else {
                printf("%d %d\n", --i, --i);
                printf("%d %d\n", i--, i--);
                printf("%d\n", i);
            }
            break;
        
        case 2:
            if (isIncrement) {
                i = i++;
            } else {
                i = i--;
            }
            printf("%d\n", i);
            break;

        case 3:
            if (isIncrement) {
                i = ++i;
            } else {
                i = --i;
            }
            printf("%d\n", i);
            break;

        case 4:
            if (isIncrement) {
                i = i++ + i++;
            } else {
                i = i-- + i--;
            }
            printf("%d\n", i);
            break;

        case 5:
            if (isIncrement) {
                i = ++i + ++i;
            } else {
                i = --i + --i;
            }
            printf("%d\n", i);
            break;

        case 6:
            if (isIncrement) {
                i = i++ + ++i;
            } else {
                i = i-- + --i;
            }
            printf("%d\n", i);
            break;

        case 7:
            if (isIncrement) {
                i = ++i + i++ + ++i;
            } else {
                i = --i + i-- + --i;
            }
            printf("%d\n", i);
            break;

        case 8:
            if (isIncrement) {
                i = i++ + i++ + i++;
            } else {
                i = i-- + i-- + i--;
            }
            printf("%d\n", i);
            break;

        case 9:
            if (isIncrement) {
                i = ++i + ++i + ++i;
            } else {
                i = --i + --i + --i;
            }
            printf("%d\n", i);
            break;

        case 10:
            if (isIncrement) {
                i = i++ + ++i + ++i;
            } else {
                i = i-- + --i + --i;
            }
            printf("%d\n", i);
            break;

        case 11:
            if (isIncrement) {
                i = ++i + i++ + ++i + i++;
            } else {
                i = --i + i-- + --i + i--;
            }
            printf("%d\n", i);
            break;

        default:
            printf("Invalid variant!\n");
            break;
    }
}

int main() {
    int variant, initial, isIncrement;

    printf("Enter variant (1-11): ");
    scanf("%d", &variant);

    printf("Enter initial value of i: ");
    scanf("%d", &initial);

    printf("Is it increment? (1 for yes, 0 for no): ");
    scanf("%d", &isIncrement);

    processVariant(variant, initial, isIncrement);

    return 0;
}