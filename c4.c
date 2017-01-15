#include <stdio.h>
int main()
{
int a,b,wa;
printf("キーボードから数字を２つ入力してください\n");
scanf("%d,&a");
scanf("%d,&b");
wa = a+b ;
printf("入力した数字%dと%dの和を計算すると\n,a,b");
printf("%dになります",wa);


return 0;
}