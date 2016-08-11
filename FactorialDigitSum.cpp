#include <iostream>
using namespace std;

void printSol(int*);
int addArray(int*);

void bigFact(int input, int* solArray){
	for(int i =2; i<=input;i++){ //multiply all numbers from 2->input
		for(int j = 299; j>5; j--){ //iterate tru each digit in solArray
			while(solArray[j]==0) //skips all collumns where digit is 0 (0*x = 0)
				break;
			solArray[j]*=i; //multiply each row by current i
		}
		for(int x = 299; x>5; x--){ //if a collumn value exceeds 10 shift over all but 1 digits
			if(solArray[x]>9){
				solArray[x-1]+= solArray[x]/10;
				solArray[x]%=10;
			}
		}
	}
}


void printSol(int* solArray){ //prints the array (debugging purposes)
	for(int i=0;i<300;i++){
		if(solArray[i]!=0)
			cout<<solArray[i];
	}
}

int addArray(int* solArray){
	int total = 0;
	for(int i=0;i<300;i++){
		total+=solArray[i];
	}
	return total;
}


int main(){
	int solArray[300] = {0}; //array to hold solution
	solArray[299] = 1; //x^0 = 1 
	bigFact(100,solArray); //does computations for 100! stores answer in solArray
	cout<<addArray(solArray);
	
}
