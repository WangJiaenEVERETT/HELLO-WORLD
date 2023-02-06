//布尔型：_Bool 只能表示两种类型 真或假 true or false（C99新增的布尔类型） 
//限定符：short int，long int，long long int（这种short，long，long long，就是限定符） 
//枚举型：enum
//sizeof运算符：获得 数据类型或表达式的长度 sizeof(object)对象-----------sizeof(type_name)类型-------------sizeof object
//如果sizeof只是一个a b c之类的对象，可以加括号也可以不加。但是如果sizeof后面跟类型如int char enum之类的就必须要加括号。
//signed----变量带符号位（可以存放负数）与unsigned-----不带~（只能存放0和正数） ------------默认情况下所有没声明的int之类都带符号 
//sizeof()是一个运算符,不是一个函数。 


// 1. 就我们目前学到的所有数据类型中，C 标准规范存储空间最小的是？---_Bool(就2个)
//sizeof后面可以跟数字 
//C 标准只规定一个数据类型的具体尺寸（其他数据类型都是规定相对范围），你知道是哪个数据类型如此特殊吗？---char 字符型，C 标准只规定 char 类型占一个字节的空间

// 相传国际象棋是古印度舍罕王的宰相达依尔发明的。舍罕王十分喜爱象棋，决定让宰相自己选择何种赏赐。这位聪明的宰相指着 8 * 8 共 64 格的象棋说：“陛下，请您赏给
//我一些麦子吧。就在棋盘的第 1 格放 1 粒，第 2 格放 2 粒，第三格放 4 粒，以后每一格都比前一格增加一倍，依此放完棋盘 64 格，我就感激不尽了。”。舍罕王听了达依
//尔这个“小小”的要求，想都没想就满口答应下来。
//结果在给达依尔麦子时舍罕惊奇地发现要给的麦子比自己想象的要多得多，于是他进行了计算，结果令他大惊失色。请问，舍罕王要兑现他的许诺共要多少粒麦子赏赐他的
//宰相？如果每25000粒麦子重1kg，那么舍罕王应该给予达依尔多少公斤麦子？
#include <stdio.h>
#include <math.h>

int main()
{
        unsigned long long sum = 0;
        unsigned long long temp;
        unsigned long long weight;
        int i;

        for (i=0; i < 64; i++)
        {
                temp = pow(2, i);
                sum = sum + temp;
        }

        weight = sum / 25000;

        printf("舍罕王应该给予达依尔%llu粒麦子！\n", sum);
        printf("如果每25000粒麦子为1kg，那么应该给%llu公斤麦子！\n", weight);

        return 0;
}

