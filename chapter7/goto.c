/*
 * =====================================================================================
 *
 *       Filename:  goto.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/11/2015 10:22:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: goto.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Wed Mar 11 10:22:41 2015
 ************************************************************************/

#include<stdio.h>
int main(void){
	goto part1;
	printf("How should i do?");
part1: printf("This is part1.");
}
