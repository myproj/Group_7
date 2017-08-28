#include "functions.h"

int factorial(int n){


	if(n < 0){
		cout << "Enter non negative number\n";
		cin << n;
	}


    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
