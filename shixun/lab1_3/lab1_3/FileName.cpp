#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
    int main()
    {
        char str[1000];  // ���ڴ洢������ַ���
        int count[256] = { 0 };  // ���ڼ�¼ÿ���ַ��ĳ��ִ�����ASCII�뷶Χ��0-255

        // �����ַ���
        printf("������һ���ַ�����\n");
        fgets(str, sizeof(str), stdin);  // ʹ��fgets��ȡ���룬����scanf����������

        // ͳ��ÿ���ַ��ĳ��ִ���
        for (int i = 0; str[i] != '\0'; i++)
        {
            unsigned char ch = (unsigned char)str[i];  // ���ַ�ת��Ϊ�޷����ַ�
            count[ch]++;  // �ڶ�Ӧ�ַ��ļ���λ�ü�1
        }

        // ������
        printf("�ַ����ִ���ͳ�ƣ�\n");
        for (int i = 0; i < 256; i++)
        {
            if (count[i] > 0)
            {
                printf("�ַ� '%c' ������ %d ��\n", i, count[i]);
            }
        }

        return 0;
    }
