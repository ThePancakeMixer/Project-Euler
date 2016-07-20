#include <iostream>
#include <math.h>
using namespace std;



int countDigits(int input){ //counts # of digits in input
    int digits=0; //variable to hold # of digits
    while(input){
        input = input/10;  //keep diving by 10 until input equals zero
        digits++; //add 1 to digits every time 10 is divided from input
    }
    return digits; //return # of digits
}



bool isPal(int input){ //returns true if input is palindrome, false if not
    int digits = countDigits(input); //count Digits in input
    int array1[digits]; //create int array to put digits in
    int max = (int) pow(10, digits);
    max/=10; //calculate 10^(#of digits-1) to strip most sig digit of input
    for(int i = 0; i<digits; i++){
        array1[i] = input / max; //get most sig digit from input and store into array
        input = input % max; //update input by stripping most significant digit
        max/=10; //divide max by 10 to strip next most significant digit
    }
    for(int i =0;i<digits;i++){
        if(array1[i]!=array1[digits-i-1]) //check if array is the same backwards and forwards
            return false; //if one value is off return true
    }
    return true; //if all the values match up return true
}



int main() { //finds the largest palindrome that is teh product of two 3-digit #'s
    int i,j; //2 loop control variables to test all multiples of 3 digit number
    int temp; //used to store LATEST palindrome found by code
    int answer=0; //used to store LARGEST palindrome found by code
    for(i=100;i<1000;i++){
        for(j=100;j<1000;j++){
            temp = i*j; //update temp with product of i and j
            if(isPal(temp) && temp > answer) { //check if product is the LARGEST palindrome found
                answer=temp; //if it is the LARGEST update answer to equal the LARGEST one
            }
        }
    }
    cout<<answer; //output the largest

}
