#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size){
    int max = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
            maxIndex = i;
        }
    }

    return maxIndex;
}

int findMinIndex(int arr[], int size){
    int min = arr[0];
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
            minIndex = i;
        }
    }

    return minIndex;
}

float findAverage(int arr[], int size){
    int sum = 0;
    float average = 0;

    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }

    average = (float)sum/size;

    return average;
}

void displayArray(int arr[], int size){

    printf("Array: [ ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("]\n");
}

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value){
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

