//注意，在写此类程序时，不能在前几步时的printf中写入代替数值（如：%d）的内容！否则输出结果就会自带数字而无法做到类似"填写数值"的状态！！！ 
#include <stdio.h>

int main()
{
	float a , b;
	printf("华氏度为");
	scanf("%f",&a);
	b = (a-32)*5/9;
	printf("摄氏度为%.1f\n",b);
	return 0;
}
