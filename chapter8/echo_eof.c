/*
 * =====================================================================================
 *
 *       Filename:  echo_eof.c
 *
 *    Description: command > file;输出重定向 
 *				   command < file;输出重定向
 *
 *        Version:  1.0
 *        Created:  03/13/2015 16:14:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: echo_eof.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Fri Mar 13 16:14:02 2015
 ************************************************************************/

#include<stdio.h>
int main(void){
	int ch;
	while((ch = getchar()) != EOF){
		putchar(ch);
	}
}
