/*
 * =====================================================================================
 *
 *       Filename:  binary.c
 *
 *    Description:  number to binary
 *
 *        Version:  1.0
 *        Created:  03/18/2015 22:10:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: binary.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Wed Mar 18 22:10:36 2015
 ************************************************************************/

#include<stdio.h>
void to_binary(unsigned long);
int main(void){
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%ul",number) == 1){
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer(q to quit):\n");
	}
	printf("Done!\n");
	return 0;
}
void to_binary(unsigned long n){
	int r;
	r = n % 2;
	if(n >= 2)
		to_binary(n / 2);
	putchar('0'+r);
	return;
}





