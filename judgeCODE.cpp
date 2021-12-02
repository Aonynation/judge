#include <cstdio>
#include <bits/stdc++.h>
using namespace std;


int main(void){
	system("g++ -o2 my.cpp -o my");
	system("g++ -o2 std.cpp -o std");
	system("g++ -o2 date.cpp -o date");
	printf("write in the test number :");
	int num;
	scanf("%d",&num);
	for(register int i=1;i<=num;++i){
		system("./date>date.in");
		system("./my<date.in>my.out");system("./std<date.in>std.out");
		system("clear");
		printf("test %d of %d:\n",i,num);
		printf("\t\t");
		if(system("diff my.out std.out")){
			printf("Wrong Answer!!\n");
			system("rm date my std");
			return 0;
		}
		system("clear");
		printf("test %d of %d:\n",i,num);
		printf("\t\t");
		printf("Accept!\n");
		// for(long long i=1;i<=50000000;i++);
	}
	system("rm date date.in my std std.out my.out");
}
