/*
 * =====================================================================================
 *
 *       Filename:  talkback.c
 *
 *    Description:  对话程序
 *
 *        Version:  1.0
 *        Created:  11/20/2014 09:38:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: talkback.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Thu Nov 20 09:38:10 2014
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(){
	float weight,volume;
	int size,letters;
	char name[40];

	printf("Hi,what's your first name?\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your fist name has %d letters.\n",letters);
	printf("and we have %d bytes to store it in.\n",size);

}
