//'?'这里面只能存放字符 不能放数字 但是整形可以放字符
//整形常量 字符常量---有分不同和特殊（如\n） 实型常量（3.14） 符号常量
//符号常量：#define 如  #~ URL "www.baidu.com"      #~ NAME "wang jiaen"   #~ YEAR 2023（注意！后面都没有“;”） 
//字符串：一串用引号解释的字符
//define include 是预处理语句因为前面都有# 不需要;    但是普通语句是每一句都需要 ;
//  \0表示一个空字符（转义字符） 表示字符串到此为止 
//当要使用中文时可以这样：       #define fanqie "番茄" 

#include <stdio.h>
#define fanqie 3.7
#define jin 0.5
#define jielan 7
#define xiqin 1.3
#define kongxingcai 8
#define yangcong 2.4
#define youcai 9
#define huanggua 6.3
#define bailuobo 0.5

int main ()
{
  printf("小明买2斤番茄%.2f元，买一斤空心菜%.2f元，买一斤油菜%.2f元\n", fanqie*jin*2, kongxingcai*jin, youcai*jin);
 printf("小红买3斤西芹%.2f元，买一半斤洋葱%.2f元，买一5斤黄瓜%.2f元\n", xiqin*jin*3, yangcong*jin*0.5,huanggua*5*jin);
    printf("小甲鱼买 10 斤黄瓜%.2f元, 20 斤白萝卜%.2f元", huanggua*10*jin, bailuobo*jin*20);
	return 0;
 } 
