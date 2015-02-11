/*
 * =====================================================================================
 *
 *       Filename:  praise.c
 *
 *    Description:  strlen函数
 *
 *        Version:  1.0
 *        Created:  11/21/2014 19:34:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: praise.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Fri Nov 21 19:34:40 2014
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define PRAISE "What a super marvelous name!"
int main(void){
	char name[40];

	printf("What's your name?");
	scanf("%s",name);
	printf("Hello %s.%s\n",name,PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %d letters ",strlen(PRAISE));
	printf("and occupies %d memory cells.\n",sizeof PRAISE);

	return 0;
}
