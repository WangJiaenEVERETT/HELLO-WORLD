//if���1����������˵�������ִ�У��پͲ�ִ�У��ټ�һ��{}�����飨��Ȼ����--Tab��{}��һ��Ҫ�ӣ������﷨�淶����д���˺ã� 
//if���2�������ִ�У��ٵľ�ִ����һ����else��
//if���3���������������1Ϊ����1��1Ϊ����2��2Ϊ����3.�����������1��2��3������������Ȼ�м䶼��else if���������else�� 

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

        printf("�������������䣺");
        scanf("%d", &i);

        ruguo (i < 18)
                dayin("��δ��18���꣬����ʹ���������\n");
        fouze
                dayin("������18���꣬��ӭʹ�ñ����򣬺ٺٺ�...\n");

        jieshu 0;
end
