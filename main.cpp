/*Carrie Bailey
CS221 Spring 2024
Dynamic Arrays - Passing Array as Pointer
Week 7, Exercise #2
Description: Pass an integer array as a pointer along with its size and determine how many even and how many odd #s it has.
*/

#include <iostream>

using namespace std;

//FUNCTION PROTOTYPES
int countEven(int *array, int size);//even numbers function
int countOdd(int *array, int size);//odd numbers function

//CONSTANTS
const int SIZE = 7;//size of array

//PROGRAM
int main() {

    int myArray[SIZE] = {45, 6, 78, 9, 3, 2, 70};//actual array with integers
    int even_numbers = countEven(myArray, SIZE);//variable for function to return # even integers
    int odd_numbers = countOdd(myArray, SIZE);//variable for function to return # of odd integers
    cout << "Count of even numbers: " << even_numbers << endl;//display even numbers
    cout << "Count of odd numbers: " << odd_numbers << endl;//display odd number
    return 0;
}

//FUNCTION DEFINITIONS
int countEven(int *array, int size) {//function to count even numbers, pass array in as a pointer
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {//numbers evenly divisible by 2 are even
            count++;
        }
    }
    return count;
}

int countOdd(int *array, int size) {//function to count odd numbers
    int count_even = countEven(array, size);//call count even function and put # evens in a variable
    return size - count_even;//odd #s are the result of subtracting even numbers from size of array
}

