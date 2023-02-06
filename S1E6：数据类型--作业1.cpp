//布尔型：_Bool 只能表示两种类型 真或假 true or false（C99新增的布尔类型） 
//限定符：short int，long int，long long int（这种short，long，long long，就是限定符） 
//枚举型：enum
//sizeof运算符：获得 数据类型或表达式的长度 sizeof(object)对象-----------sizeof(type_name)类型-------------sizeof object
//如果sizeof只是一个a b c之类的对象，可以加括号也可以不加。但是如果sizeof后面跟类型如int char enum之类的就必须要加括号。
//signed----变量带符号位（可以存放负数）与unsigned-----不带~（只能存放0和正数） ------------默认情况下所有没声明的int之类都带符号 



// 1. 就我们目前学到的所有数据类型中，C 标准规范存储空间最小的是？
//C 标准只规定一个数据类型的具体尺寸（其他数据类型都是规定相对范围），你知道是哪个数据类型如此特殊吗？
#include<stdio.h>
#include<math.h>

int main()
{
	int a = pow(1,2)+pow(2,3)+pow(3,4)+pow(4,5)+pow(5,6);
	printf("a = %d\n",a);
	
	return 0;
}

