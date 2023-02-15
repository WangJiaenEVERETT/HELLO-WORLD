//若一个字符='A'则表示一个字符=这个A所表示的ASCLL码中的数据 
//and = &&
//else后面不要跟逻辑块 
#include <stdio.h>

int main ()
  {
  	char h, p; 
  	printf("请输入一个字符:");
  	scanf("%c",&h);
  	if(h >= 'A' && h <= 'Z')
  	{
  		p = h + 32;
  		printf("他将会转化为:%c",p);
	  }
  	else if(h >= 'a' && h <= 'z')
  	{
  		p = h - 32;
  		printf("他将会转化为:%c",p);
	  }
	else
  	{
  		p = p;
  		printf("他将会转化为:%c",p);
	  }
  	
  	
  	
  	
  	return 0;
  }
