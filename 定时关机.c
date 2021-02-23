#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 180
	//system()--执行系统命令的
	system("shutdown -s -t 360");
again:
	printf("电脑在六分钟后自动关机，请输入：stop 来取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "stop") == 0)//比较两个字符串 strcmp （）
	{
		system("shutdown -a");

	}
	else
	{
		goto again;

	}
	return 0;
}
