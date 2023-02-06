//注意，在写此类程序时，不能在前几步时的printf中写入代替数值（如：%d）的内容！否则输出结果就会自带数字而无法做到类似"填写数值"的状态！！！ 
#include <stdio.h>

int main()
{
	char a[1]; 
	float b,c;
	float height = c*0.393 , weight = b*2.204;
    printf("请输入您的姓名："); 
	scanf("%s",&a);
	
    
	printf("请输入您的体重(KG)：");
	scanf("%f",&b);
	
	printf("请输入您的身高(cm)：");
	scanf("%f",&c);
	
	
	
	printf("========== 正在为您转换 ==========");
	
	c = c / 2.54; 
    b = b / 0.453; 

    printf("%s的身高是%.2f(in)，体重是%.2f(lb)。\n", a, c, b);

        return 0;

	
	return 0; 
}
