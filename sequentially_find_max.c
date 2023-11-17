#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char * argv []){
srand(time(NULL));
int max= 0; 				/* assume the max value at the 1st index */
int rand_max_range = (rand() % 10)+ 1; 		/* generate maximum range randomly */
int rand_array_nums[rand_max_range];	/* create array of integer random numbers */


// assign for each position on array a random integer value
for (int i= 0 ; i< rand_max_range ; i++){
	
	rand_array_nums[i]= rand(); /* generate integer random numbers on array */
}

// Find the max value 
for (int i = 0 ; i< rand_max_range; i++){
	
	if(rand_array_nums[i]> rand_array_nums[max])
		max= i;
	else
		continue;

} 

// find the size of the array 
printf("The number of elements in the array is: %d\n",rand_max_range);

// print randomly assigned values 
for (int i = 0 ; i< rand_max_range ; i++){
	printf("%d\t",rand_array_nums[i]);
}

// print the max value 
printf("\nThe maximum value is: %d", rand_array_nums[max]);

} /* end main */
int max(int A[], int i, int j)
{
    int max = 0;

    #pragma omp parallel for reduction(max:max_val)
    for (int idx = i; idx < j; idx++)
       max_val = max_val > A[idx] ? max_val : A[idx];

    return max_val;
}
