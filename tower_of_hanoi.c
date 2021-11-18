#include<stdio.h>
//function to calculate the sequence of moves required to solve the puzzle for any given number n
void TOH(int n, int from_disk, int to_disk, int aux_disk)
{
	if(n == 1)
	{
		printf("Moved disk 1 from %d to %d\n", from_disk, to_disk);
		return;
	}
	//Recursively calling the function TOH
	TOH(n - 1, from_disk, aux_disk, to_disk);
	printf("Moved disk %d from %d to %d\n", n, from_disk, to_disk);
	TOH(n - 1, aux_disk, to_disk, from_disk);
}
//Main block
int main()
{
	int d;
	//input for number of disks in the problem
	printf("Enter number of disks : ");
	scanf("%d", &d);
	printf("Tower of Hanoi solution for %d disks : \n", d);
	TOH(d, 1,3,2);
	return 0;
}
