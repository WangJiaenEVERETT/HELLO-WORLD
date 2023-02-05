//'?'这里面只能存放字符 不能放数字 但是整形可以放字符
//整形常量 字符常量---有分不同和特殊（如\n） 实型常量（3.14） 符号常量
//符号常量：#define 如  #~ URL "www.baidu.com"      #~ NAME "wang jiaen"   #~ YEAR 2023（注意！后面都没有“;”） 
//字符串：一串用引号解释的字符
//define include 是预处理语句因为前面都有# 不需要;    但是普通语句是每一句都需要 ;
//  \0表示一个空字符（转义字符） 表示字符串到此为止 

#include <stdio.h>
#define NL "\n" 

int main()
{
        printf("Line1%s", NL);
        printf("Line2%s", NL);

        return 0;
}
