/*
 * =====================================================================================
 *
 *       Filename:  cypher2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2015 09:41:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: cypher2.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Tue Mar 10 09:41:15 2015
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void){
	char ch;
	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			putchar(ch + 1);
		}else{
			putchar(ch);
		}
	}
}
