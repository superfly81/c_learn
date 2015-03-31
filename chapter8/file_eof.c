/*
 * =====================================================================================
 *
 *       Filename:  file_eof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2015 16:27:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: file_eof.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Fri Mar 13 16:27:58 2015
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int ch;
	FILE *fp = NULL;
	char fname[50];

	printf("Enter the name of the file:");
	scanf("%s",fname);
	printf("%s",fname);
	fp = fopen(fname,"r");
	if(fp == NULL){
		printf("Failed to open file,bye!");
		exit(1);
	}

	while((ch = getc(fp)) != EOF){
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
