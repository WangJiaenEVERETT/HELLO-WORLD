// fah = 9.0 / 5.0 * cel + 32.0;��һ����  fah = 9 / 5 * cel + 32��һ����ע�⸡���ͺ����ͣ� 
#include <stdio.h>

int main()
{
        float fah, cel;

        printf("���������϶ȣ�");
        scanf("%f", &cel);

        fah = 9.0 / 5.0 * cel + 32.0;
        printf("ת��Ϊ������ǣ�%.2f\n", fah);

        return 0;
}
