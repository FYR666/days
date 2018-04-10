#include<stdio.h>
void main()
{
	int year, month, day;
	printf("请输入年份和月份（如：2013 6):");
	scanf_s("%d %d", &year, &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:day = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:day = 30; break;
	case 2:	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		day = 29;
			else
		day = 28;
	}
	printf("%d年有%d月有%d天", year, month, day);
}