#include <stdio.h>

int main()
{
        char ch;

        printf("������һ���ַ���");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z')
        {
                ch = ch + 32; // ch��32�����Сд��Ȼ��ֵ��ch
                printf("������ת��Ϊ:%c\n",ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
                ch = ch - 32; // ͬ��
                printf("������ת��Ϊ:%c\n",ch);
        }

      

        return 0;
}
