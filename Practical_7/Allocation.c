/*************************************************************************************
 *
 * The “malloc” or “memory allocation” method in C is used to dynamically
 * allocate a single large block of memory with the specified size.
 * It returns a pointer of type void which can be cast into a pointer of any form.
 *
 * // Definition -
(cast-type)* ptr = (cast-type*) malloc(byte-size)
byte-size = n * cast-type where 'n' is number of elements in that memory allocation


“free” method in C is used to dynamically de-allocate the memory.

 Definition -
free(ptr)

**************************************************************************************/

 #include<stdio.h>   // Handling IO(scanf, printf) operations
 #include<stdlib.h>  // Handling malloc() function

 // Allocates memory to the pointer for 'n' blocks
 int* allocatearray(int n)
 {
 // This ptr pointer will hold the base address of the block created
         int *ptr;
 // Dynamically allocate memory for n blocks using malloc()
         ptr = (int*)malloc(n * sizeof(int));
 // Returning pointer to the allocated memory
         return ptr;
 }
 // Fill the pointer to array with Value 1 for 'n' continuous blocks.
 // 'n' needs to be passed to initialized the loop size to fill the continuous size.
 void fillwithones(int *ptr, int n)
 {
	 int i;
         for(i = 0; i < n; i++)
	         *(ptr + i) = 1;
 }
 // Printing the pointer to array in continuos memory blocks.
 // 'n' needs to be passed to initialized the loop size to print the continuous blocks.
 void printarray(int *ptr, int n)
 {
	 int i;
         for(i = 0; i < n; i++)
	         printf("%d ", *(ptr + i));
 }
 // Free the memory attached to the pointer.
 void freememory(int *ptr)
 {
	 free(ptr);
 }

 // Main handler
 int main()
 {
 // Defining size for n = 5, Can be changed accordingly.
	 int n = 5;
 // Allocating Memory
         int *temp = allocatearray(n);
 // Filling Continuous Memory
         fillwithones(temp, n);

// Printing Continuous Memory
         printarray(temp, n);

 // Freeing the memory
         freememory(temp);

// Returning the Main handler, indicating end of the code
         return 0;
 }
