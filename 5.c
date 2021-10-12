/*
Work 05: That way madness lies

Sep 28, 2021
Due: Thursday 09/30 10:00am
GitHub Submission Link: git@github.com:mks65/05_pointers.git
Do the following in a C program. It’s going to get a little tricky, so do things one step at a time, compile, run and test frequently.

    Declare and initialize variables of types char, int, and long.
    Print out the addresses of each variable in hex and decimal.
        Do you notice anything about the addresses?
    Declare and initialize pointers for each of your variables.
    Print out the values of each pointer.
    Use the pointers to modify the values of the original variables and print out the new values.
    Declare and initialize an unsigned int variable and 2 pointers that point to it, one should be an int * and the other should be a char *
    Print out the value of each pointer (this should be the memory address), and de-reference each pointer to print out the value each points to.
        The output should look something like: p: 0x7ffee3dbd938 p points to: 133.
    Print out your unsigned int in decimal and hex.
        The printf formatting character for a hexadecimal int is: %x
        The printf formatting character for an unsigned int is: %u
    Use the char * to print out each individual byte of your unsigned int.
        The printf formatting character for a single byte in hex is %hhu for unsigned decimal integer and hhx for an unsigned hex, (that is half of half of an integer).
    Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int in both hex and decimal after each modification. When done, print out each byte like in step 9. You may need to reset the char * so that it points to the unsigned int, depending on how you wrote step 4 out.
    Perform the same operation as in step 10, except add 16 to each byte.

    As you go through this, look at what’s happening to each byte, and think about the level of control you have over the memory space used by your program. What values did you see for each individual byte? Can you make sense of them? Does the order make sense?
    If you want to test things further try doing all the above with different kinds of values:
    Try an unsigned int with a value greater that 2.1 billion.
    Try a regular int.

*/
#include <stdio.h>
int main() {
	int a = 42;
	char b = 69;
	long c = 248641333;
	printf("a: %d\nb: %c\nc: %ld\n\n",a,b,c);
	printf("Address of a:\n%p\nAddress of b:\n%p\nAddress of c:\n%p\n\n",&a,&b,&c);
	int *ap = &a;
	char *bp = &b;
	long *cp = &c;
	printf("Pointer ap:\n%p\nPointer bp:\n%p\nPointer cp:\n%p\n\n",ap,bp,cp);
	(*ap)++;
	(*bp)++;
	(*cp)++;
	printf("a: %d\nb: %c\nc: %ld\n\n",a,b,c);
	unsigned int d = 525600; // Minutes! 525600 Moments So Dear...
	int *dip = &d;
	char *dcp = &d;
	printf("dip: %p\ndip points to: %u\n\n",dip,*dip);
	printf("d in decimal: %u\nd in hex: %x\n\n",d,d);
	printf("d broken down by byte in decimal:\n%hhu\n%hhu\n%hhu\n%hhu\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
	printf("d broken down by byte in hexadecimal:\n%hhx\n%hhx\n%hhx\n%hhx\n\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
	*dcp += 1;
	*(dcp+1) += 1;
	*(dcp+2) += 1;
	*(dcp+3) += 1;
	printf("d broken down by byte in decimal:\n%hhu\n%hhu\n%hhu\n%hhu\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
	printf("d broken down by byte in hexadecimal:\n%hhx\n%hhx\n%hhx\n%hhx\n\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
	*dcp += 16;
	*(dcp+1) += 16;
	*(dcp+2) += 16;
	*(dcp+3) += 16;
	printf("d broken down by byte in decimal:\n%hhu\n%hhu\n%hhu\n%hhu\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
	printf("d broken down by byte in hexadecimal:\n%hhx\n%hhx\n%hhx\n%hhx\n",*dcp,*(dcp+1),*(dcp+2),*(dcp+3));
}
