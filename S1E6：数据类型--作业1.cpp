//�����ͣ�_Bool ֻ�ܱ�ʾ�������� ���� true or false��C99�����Ĳ������ͣ� 
//�޶�����short int��long int��long long int������short��long��long long�������޶����� 
//ö���ͣ�enum
//sizeof���������� �������ͻ���ʽ�ĳ��� sizeof(object)����-----------sizeof(type_name)����-------------sizeof object
//���sizeofֻ��һ��a b c֮��Ķ��󣬿��Լ�����Ҳ���Բ��ӡ��������sizeof�����������int char enum֮��ľͱ���Ҫ�����š�
//signed----����������λ�����Դ�Ÿ�������unsigned-----����~��ֻ�ܴ��0�������� ------------Ĭ�����������û������int֮�඼������ 



// 1. ������Ŀǰѧ�����������������У�C ��׼�淶�洢�ռ���С���ǣ�
//C ��׼ֻ�涨һ���������͵ľ���ߴ磨�����������Ͷ��ǹ涨��Է�Χ������֪�����ĸ������������������
#include<stdio.h>
#include<math.h>

int main()
{
	int a = pow(1,2)+pow(2,3)+pow(3,4)+pow(4,5)+pow(5,6);
	printf("a = %d\n",a);
	
	return 0;
}

