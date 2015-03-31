/*
 * =====================================================================================
 *
 *       Filename:  sizeof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2015 16:51:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: sizeof.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Sat Feb 28 16:51:42 2015
 ************************************************************************/

#include<stdio.h>
int main(void){
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d,n has %zd bytes; all ints have %zd bytes.\n",n,sizeof n,intsize);
}
