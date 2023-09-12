///// Do Not Edit Here! /////
#include <iostream>
#include <string.h>
#include "math_func.h"

using namespace std;
/////////////////////////////

////////// fill //////////
int math_func(int a){
	int ans =1;
	for(int i=1;i<=a;i++){ ans*=i;}
	return ans;
}

int math_func(int a, int b, char *op){
	if(!strcmp(op,"add")){ return a + b;}
	else if(!strcmp(op,"sub")){ return a-b;}
	else if(!strcmp(op,"mul")){ return a*b;}
	else if(!strcmp(op,"div")){ 
		if(b==0){return 0;} 
		else return a/b;
	}
}

void math_func(int a, int b, char *op, float &c){
	if(!strcmp(op,"add")){ c += (a+b);}
	else if(!strcmp(op,"sub")){ c += (a-b);}
	else if(!strcmp(op,"mul")){ c += (a*b);}
	else if(!strcmp(op,"div")){ if(b!=0) c += ((double)a/b);}
}
