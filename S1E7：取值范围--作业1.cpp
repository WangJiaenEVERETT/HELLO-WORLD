//����λ��bit �ֽڣ�Byte---ת����ϵ��1B=8b
//����1 11 111 1111֮��Ķ����Ƽ��㣺2��n�η�-1 
//pow������ͷ�ļ�#include <math.h>
//error�޷�ͨ��������warning����ͨ��
//unsigned��2��32�η�-1���ķ�Χ����signed��2��31�η�-1�����������ں������ʱӦ��Ϊ%u 
//�������δ�Ÿ�����ȡ�þ���ֵ�����ƣ�����λ����ȡ��������λȡ����0��1��������ȡ��������ֵ��1��
//��������������������ɵã��ֽ�1ȡֵ��Χ��127/-128 unsigned�ֽ�1ȡֵ��Χ����127�ӵ�128��λ���� 


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
