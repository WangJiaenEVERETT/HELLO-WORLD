//'?'������ֻ�ܴ���ַ� ���ܷ����� �������ο��Է��ַ�
//���γ��� �ַ�����---�зֲ�ͬ�����⣨��\n�� ʵ�ͳ�����3.14�� ���ų���
//���ų�����#define ��  #~ URL "www.baidu.com"      #~ NAME "wang jiaen"   #~ YEAR 2023��ע�⣡���涼û�С�;���� 
//�ַ�����һ�������Ž��͵��ַ�
//define include ��Ԥ���������Ϊǰ�涼��# ����Ҫ;    ������ͨ�����ÿһ�䶼��Ҫ ;
//  \0��ʾһ�����ַ���ת���ַ��� ��ʾ�ַ�������Ϊֹ 
//��Ҫʹ������ʱ����������       #define fanqie "����" 

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
  printf("С����2�﷬��%.2fԪ����һ����Ĳ�%.2fԪ����һ���Ͳ�%.2fԪ\n", fanqie*jin*2, kongxingcai*jin, youcai*jin);
 printf("С����3������%.2fԪ����һ������%.2fԪ����һ5��ƹ�%.2fԪ\n", xiqin*jin*3, yangcong*jin*0.5,huanggua*5*jin);
    printf("С������ 10 ��ƹ�%.2fԪ, 20 ����ܲ�%.2fԪ", huanggua*10*jin, bailuobo*jin*20);
	return 0;
 } 
