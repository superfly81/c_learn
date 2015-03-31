/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/06/2015 17:49:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: char.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Fri Mar  6 17:49:41 2015
 ************************************************************************/

#include<stdio.h>
int main(){
	char ch;
	ch = getchar();
	printf("%c\n",ch);
	putchar(ch);
}
