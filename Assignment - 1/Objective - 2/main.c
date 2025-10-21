#include <stdio.h>
#include "arraylib.h"

int main(){
    int size;
    int choice;
    int searchValue;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Find the Greatest number's index\n");
        printf("2. Find the Smallest number's index\n");
        printf("3. Find the average of all the numbers in an array\n");
        printf("4. Print the array\n");
        printf("5. Reverse and print the array\n");
        printf("6. Sort and print the array\n");
        printf("7. Search the number in the array\n");
        printf("8. Exit the program\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        
        printf("Enter the length of the array: \n");
        scanf("%d", &size);

        int arr[size];
        printf("Enter the elements of array: ");
        for(int i = 0; i < size; i++) {
            scanf("%d ", &arr[i]);
        }

        switch (choice) {
            case 1: {
                int MaxIndex = findMaxIndex(arr, size);
                printf("\nGreatest number - %d\nIndex - %d", arr[MaxIndex], MaxIndex);
                break;
            }

            case 2: {
                int MinIndex = findMinIndex(arr, size);
                printf("\nSmallest number - %d\nIndex - %d", arr[MinIndex], MinIndex);
                break;
            }
            
            case 3: {
                float Average = findAverage(arr, size);
                printf("\nThe average of this array is: %g", Average);
                break;
            }

            case 4:{
                displayArray(arr, size);
                break;
            }

            case 5: {
                reverseArray(arr, size);
                displayArray(arr, size);
                break;
            }

            case 6: {
                sortArray(arr, size);
                displayArray(arr, size);
                break;
            }

            case 7: {
                printf("Enter the number to search: ");
                scanf("%d", &searchValue);

                int searchResultIndex = linearSearch(arr, size, searchValue);
                if(searchResultIndex == -1){
                    printf("This number isn't available in array");
                }else{
                    printf("The index of %d in the array is: %d", searchValue, searchResultIndex);
                }
                break;
            }

            default:
                printf("Invalid choice! Please select between 1-8.\n");
        }
    } while (choice != 8);

return 0;
}
