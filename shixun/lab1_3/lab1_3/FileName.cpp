#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
    int main()
    {
        char str[1000];  // 用于存储输入的字符串
        int count[256] = { 0 };  // 用于记录每个字符的出现次数，ASCII码范围是0-255

        // 输入字符串
        printf("请输入一个字符串：\n");
        fgets(str, sizeof(str), stdin);  // 使用fgets读取输入，避免scanf的输入限制

        // 统计每个字符的出现次数
        for (int i = 0; str[i] != '\0'; i++)
        {
            unsigned char ch = (unsigned char)str[i];  // 将字符转换为无符号字符
            count[ch]++;  // 在对应字符的计数位置加1
        }

        // 输出结果
        printf("字符出现次数统计：\n");
        for (int i = 0; i < 256; i++)
        {
            if (count[i] > 0)
            {
                printf("字符 '%c' 出现了 %d 次\n", i, count[i]);
            }
        }

        return 0;
    }
