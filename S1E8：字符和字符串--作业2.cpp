//ע�⣬��д�������ʱ��������ǰ����ʱ��printf��д�������ֵ���磺%d�������ݣ������������ͻ��Դ����ֶ��޷���������"��д��ֵ"��״̬������ 
#include <stdio.h>

int main()
{
	char a[1]; 
	float b,c;
	float height = c*0.393 , weight = b*2.204;
    printf("����������������"); 
	scanf("%s",&a);
	
    
	printf("��������������(KG)��");
	scanf("%f",&b);
	
	printf("�������������(cm)��");
	scanf("%f",&c);
	
	
	
	printf("========== ����Ϊ��ת�� ==========");
	
	c = c / 2.54; 
    b = b / 0.453; 

    printf("%s�������%.2f(in)��������%.2f(lb)��\n", a, c, b);

        return 0;

	
	return 0; 
}
