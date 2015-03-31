/*
 * =====================================================================================
 *
 *       Filename:  cypher.c
 *
 *    Description:  ctype一些字符函数
 *
 *        Version:  1.0
 *        Created:  03/10/2015 09:45:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: cypher.c
    > Author: fly
    > Mail: lifei@playcrab.com 
    > Created Time: Tue Mar 10 09:45:34 2015
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main(void){
	char ch;
	ch = getchar();
	//TODO Not according to write form small to large scope
	if(isalnum(ch)){
		printf("是字母或者数字!");
	}else if(isalpha(ch)){
		printf("是字母!");
	}else if(isblank(ch)){
		printf("是空白!");
	}else if(iscntrl(ch)){
		printf("是控制字符!");
	}else if(isdigit(ch)){
		printf("是阿拉伯数字!");
	}else if(isgraph(ch)){
		printf("是除空格外的所有可打印字符!");
	}else if(islower(ch)){
		printf("是小写字母!");
	}else if(isprint(ch)){
		printf("是可打印字符!");
	}else if(ispunct(ch)){
		printf("是标点符号!");
	}else if(isspace(ch)){
		printf("是空白字符：空格、换行、走纸、回车。。。");
	}else if(isupper(ch)){
		printf("是大写!");
	}else if(isxdigit(ch)){
		printf("是十六进制!");
	}

	ch = tolower(ch);//to大写
	ch = toupper(ch);//to小写

}
