/*
 * =====================================================================================
 *
 *       Filename:  input.c
 *
 *    Description:  scanf
 *
 *        Version:  1.0
 *        Created:  02/13/2015 10:57:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: input.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Fri Feb 13 10:57:58 2015
 ************************************************************************/

#include<stdio.h>
int main(void){
	int age;
	float assets;
	char pet[30];
	printf("Enter your age,assets and favorite pet.\n");
	scanf("%d %f",&age,&assets);
	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	return 0;
}
