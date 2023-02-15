//if语句1：大体上来说就是真就执行，假就不执行，再加一个{}的事情（虽然缩进--Tab和{}不一定要加，但是语法规范还是写上了好） 
//if语句2：是真就执行，假的就执行另一个（else）
//if语句3：扩充各种条件：1为真用1，1为假用2，2为假用3.。。。。如果1，2，3。。。。（当然中间都是else if，最后来个else） 

#include <stdio.h>
#define begin {
#define end }
#define ruguo if
#define fouze else
#define dayin printf
#define jieshu return
int main()
begin
        int i;

        printf("请输入您的年龄：");
        scanf("%d", &i);

        ruguo (i < 18)
                dayin("您未满18周岁，不得使用这个程序！\n");
        fouze
                dayin("您已满18周岁，欢迎使用本程序，嘿嘿嘿...\n");

        jieshu 0;
end
