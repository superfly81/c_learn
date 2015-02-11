/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  printf
 *
 *        Version:  1.0
 *        Created:  02/11/2015 12:35:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: string.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Wed Feb 11 12:35:51 2015
 ************************************************************************/

#include<stdio.h>
#define BLURB "Authentic imitation!"
#define BLURB2 "Imitation!"
int main(void){
	printf("/%2s/\n",BLURB);
	printf("/%24s/\n",BLURB);
	printf("/%24.5s/\n",BLURB);
	printf("/%-40s/\n",BLURB);
	printf("/%-40s/\n",BLURB2);
	return 0;
}
