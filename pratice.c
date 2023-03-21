#include<stdio.h>
void main() {
	//鸡兔同笼问题，采用遍历穷举法
	int Hen;	//定义鸡头变量为Hen
	printf("今有鸡兔同笼，头35，脚94，问鸡和兔各有多少？\n");
	for (Hen = 1; Hen <= 35; Hen++) {	//循环遍历，使鸡头从一到35遍历一次	
		if (Hen * 2 + (35 - Hen) * 4 == 94) {	//给出判断语句，筛选出符合条件的Hen
			printf("算出鸡有%d只，\n兔有%d只。", Hen, 35 - Hen);
			break;
		}
	}
}