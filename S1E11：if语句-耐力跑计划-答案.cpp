#include <stdio.h>
#include "ssebtr1.h"

int main()
{
        int age, max_hr, bpm, hr; // hr��HeartRate�����ʵ���˼

        printf("�������������䣺");
        scanf("%d", &age);

        max_hr = 220 - age;
        bpm = 150;

        playSound(bpm);
        hr = getHeartRate();

        if (hr > max_hr)
        {
                printf("������ֹͣ�ܲ��������������Σ�ա���\n");
        }
        else if (hr > max_hr * 0.85)
        {
                printf("������Ų�\n");
                bpm = bpm - 20; // ע�⣬������Ҫ���޸�bpm��ֵ
                playSound(bpm); // �㲻�������ﴫ��bpm-20 
        }
        else if (hr < max_hr * 0.75)
        {
                printf("Come on����ӿ���࣡\n");
                bpm = bpm + 20;
                playSound(bpm);
        }
        else
        {
                playSound(bpm);
        }

        return 0;
}
