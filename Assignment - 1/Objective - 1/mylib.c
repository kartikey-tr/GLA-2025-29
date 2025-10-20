#include "mylib.h"
#include <stdio.h>

int reverseDigits(int n) {
    int remainder;
    int reversed = 0;

    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder;  
        n = n / 10;          
    }

    return reversed;
}

int isPrime(int num) {
    int i;
    int isPrime = 1;

    if (num <= 1) {
        isPrime = 0;
        
    } else {

        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

    }

    return isPrime;
}

int isArmstrong(int num){
    int originalNum;
    int remainder;
    int digitsCount = 0;
    int result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum = originalNum/10;
        digitsCount++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

        int power = 1;
        for (int i = 0; i < digitsCount; i++) {
            power = power * remainder;
        }

        result = result + power;
        originalNum = originalNum/10;
    }

    if (result == num)
        return 1;
    else
        return 0;
}

int isAdams(int num){

    int numSquare = num * num;

    int reversed = reverseDigits(num);

    int reversedNumSquare = reversed * reversed;

    
    int reversedSquare = reverseDigits(reversedNumSquare);

    if(numSquare == reversedSquare){
        return 1;
    } else{
        return 0;
    }
}

int isPrimePalindrome(int num){
    int isPalindrome = 0;

    int reversedNum = reverseDigits(num);

    if(reversedNum == num){
        isPalindrome = 1;
    } else{
        isPalindrome = 0;
    }

    if(isPalindrome == 1 && isPrime(num)){
        return 1;
    } else {
        return 0;
    }
}
