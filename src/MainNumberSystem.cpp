/*
/*
Welcome to Mission RnD.
This is the First Project which you people have to submit .
Use MainDummyProject File for testing any other function in other Cpp files .
Questions will be present in respective cpp files. You need to pass all tests to be able to submit the code to us.

DO NOT write main function in any other File or else your Build Fails.
Points to Follow for the whole C course :
->Read All Note points in all the files .
->Do practice other similar questions ,related to the Topic till you are confident .
->Do not only depend on the questions given in the Project Tracker Tool .

*/
#include "stdafx.h"
#include <stdlib.h>

#include "FunctionHeaders.h"

int main(){

	//Test Sum of numbers

	int sumTemp = sum(4, 3);
	printf("%d\n", sumTemp);

	//Test swap
	int a = 5;
	int b = 9;
	swap(&a, &b);
	printf("Final values of a=%d, b=%d \n", a, b);
	
	return 0;
}