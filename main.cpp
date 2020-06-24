#include<iostream>
#include<fstream>
#include "sub.h"

using namespace std;

int main() {
 int n, result; //declare n for the size of arrays, result for sub function.
 ifstream myReadFile; //declare input file.
 ofstream myWriteFile; //declare output file.
 myReadFile.open("input.txt"); //open input file.

 /*Check if the input file is open.*/
 if (myReadFile.is_open()) {
 cout<<"Input file open"<<endl;
 myReadFile>>n;   //Assign first integer to n.
 }//End of if statement.

 else {cout<< "Cannot read text file"<<endl;} //Display when cannot open file.

 /*Dynamically allocate memory for array A, B, and C.*/
 int *A = new int[n];
 int *B = new int[n];
 int *C = new int[n];
 cout<<"Memory allocated"<<endl;  //Display when memory allocated.

 /*While it's not end of file*/
 while (!myReadFile.eof()) {

 /*Read data from input file into the arrays*/
 for(int i=0;i<n;i++){

    myReadFile>>A[i]; //Read the next integer into array A.
    myReadFile>>B[i]; //Read the next integer into array B.
    myReadFile>>C[i]; //Read the next integer into array C.
    } //End of for loop.
 }//End of while loop.

 cout<<"Data read from input file"<<endl; //Display when reading is done.

 /*Close input file*/
 myReadFile.close();
 cout<<"Input file closed"<<endl; //Display when input file is closed.

 /*Open output file*/
 myWriteFile.open("output.txt");

 /*Check if output file id=s open*/
 if (myWriteFile.is_open()) {
 cout<<"Output file open"<<endl; //Display when output file is open.
 myWriteFile<<n<<endl;  //Write size of array n into output file.
 } //End of if statement.

 /*Write data from arrays A, B, and C into output file*/
 for(int j=0;j<n;j++){
 myWriteFile<<A[j]<<" "<<B[j]<<" "<<C[j]<<endl;
 } //End of for loop.

 cout<<"Data written to output file"<<endl; //Display when writing is done.

 result = sub(n,A,B,C); //Call the function sub.
 cout<<"Function called"<<endl; //Display when function is called.

 /*Write result into output file*/
 myWriteFile<<result<<endl;
 cout<<"Result written to output file"<<endl; //Display when result is written.

 /*Close output file*/
 myWriteFile.close();
 cout<<"Output file closed"<<endl; //Display when output file is closed.

 return 0;
}//End of main.

