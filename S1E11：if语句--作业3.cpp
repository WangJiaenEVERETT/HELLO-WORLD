//��һ���ַ�='A'���ʾһ���ַ�=���A����ʾ��ASCLL���е����� 
//and = &&
//else���治Ҫ���߼��� 
#include <stdio.h>

int main ()
  {
  	char h, p; 
  	printf("������һ���ַ�:");
  	scanf("%c",&h);
  	if(h >= 'A' && h <= 'Z')
  	{
  		p = h + 32;
  		printf("������ת��Ϊ:%c",p);
	  }
  	else if(h >= 'a' && h <= 'z')
  	{
  		p = h - 32;
  		printf("������ת��Ϊ:%c",p);
	  }
	else
  	{
  		p = p;
  		printf("������ת��Ϊ:%c",p);
	  }
  	
  	
  	
  	
  	return 0;
  }
