//数据类型转换：直接在目标前面替换，如：浮点型转换为整型：（int）3.0---3 
//但是像整型换浮点型：（int）1.8------1  是想这样直接把小数点和小数点后面的数去掉
//判断与抉择：分支结构程序设计、
//关系运算符：大于小于一大堆以及==（等于）和！=（不等于） 
//字符的加减比较直接编程ACEII的编码加减比较 'a'+'b'>'c'
//打印格式为： printf("%d", a > b);打印出来结果要不然是1要不然是0
//逻辑非 ！（单目，优先最高----真取假，假取真）逻辑与&&（双目，优先中等，小于加减---一个为假就是假）逻辑或 ||（双目，优先中等，小于加减---一个为真就是真） 
//对于编程系统，任何非0就是真---负数也是真 ，所以！（a+b），！2之类的答案都是0（求反）
// 运算策略：短路求值（又称：最小化求值）--与和或都会有短路求值 即前面通过/不通过则后面省略的原则。 
#include <stdio.h>

#include <stdio.h>

int main()
{
        unsigned char a, b, c;//注意：化为二进制时 200（10）---128（10）+64（10）+8（10）----1100 1000（2） --两个2进制相加会多一位数出来变9位，char为8位要舍弃最前面的进位 

        b = c = 200;
        a = b + c;

        printf("a = %u\n", a);

        return 0;
}
