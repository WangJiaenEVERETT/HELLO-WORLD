//比特位：bit 字节：Byte---转换关系：1B=8b
//关于1 11 111 1111之类的二进制计算：2的n次方-1 
//pow包含在头文件#include <math.h>
//error无法通过，但是warning可以通过
//unsigned（2的32次方-1）的范围大于signed（2的31次方-1），而且其在后面代替时应该为%u 
//计算机如何存放负数（取得绝对值二进制（符号位独立取反），按位取反（0，1互换），取反后所有值加1）
//根据上述计算机储存规则可得：字节1取值范围：127/-128 unsigned字节1取值范围：把127加到128的位置上 


#include <stdio.h>

int main()
{
        signed char i;
        unsigned char j;

        i = 255;
        j = 255;

        printf("signed char %hhd\n", i);
        printf("unsigned char %hhu\n", j);

        return 0;
}
