#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//int main()
//{
//	int a = 4;
//	int b = a<<2;
//	printf("%d\n",b);
//	return 0;
//}



//int main()  //数组的概念以及数组的打印
//{
//	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ",arr1[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//int SUB(int x ,int y)
//{
//	int z=0;
//	z=x-y;
//	return z;
//}
//
//int main()
//{
//	int a = 50;
//	int b=77;
//	int c=a-b;
//	printf("%d - %d = %d\n",a,b,c);
//	return 0;
//}

//int ADD(int x, int y) //使用了自定义函数
//{
//	int z=0;
//	z =x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 100;
//	int b =325;
//	int sum=0;
//	sum=ADD(a,b);
//	printf("第一个数%d+第二个数%d的和是：%d\n",a,b,sum);
//	return 0;
//}







//int main() //while循环 
//{
//	int line = 0;
//	printf("我要认真学习");
//	while (line<20000)
//	{
//		line ++;
//	printf("敲代码敲代码：%d\n",line);
//	}
//	if (line>=20000)
//		printf("成功完成学业\n");
//	return 0;
//}

int main()
{
	int line =0;
	while(line<20000)
	{
		printf("持续敲代码:%d\n",line);
		line++;
	}
	printf("学有所成!!\n");
	return 0 ;
}





//#define n 10
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,num2);
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
////{




//int main()
//{	
//	
//	int arr[n]={0};
//	printf("%d\n",n);
//
//	return 0;
//}
//enum Sex 
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

////enum Color
////{
////	GREEN,
////	YELLOW,
////	BULE
////};
////int main()
////{
////	enum Color color=BULE;
////	color = GREEN;
////	return 0;
////}

//int main()
//{
//	char arr1[]="abc";
//	char arr2[]={ 'a', 'b' ,'c','\0'};//"\0"是结束标志 。
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	char arr1 [] ="abc";
//	char arr2 [] ={'a','b','c','\0'};
//	printf("%d\n", strlen(arr1)); // strlen --- string length 字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("%s(c:\text\cc\c");
//	return 0;
//}

//int main()
//{
//	int input=0;
//	printf("进入大学\n");
//	printf("是否好好学习(请选择0/1)：");
//	scanf("%d",&input); //需要增加“&” 符号来定位
//
//	if (input == 1)
//		printf("光明的未来\n");
//	else if ( input == 0)
//		printf("g咯\n");
//	return 0;
//}

//int main ()
//{
//	int input = 0;
//
//	printf("进入大学\n");
//	printf("是否好好学习？（请输入1/0）：");
//	scanf("%d",&input);
//	if(input == 0)
//		printf("未来可期！\n");
//	else if(input == 1)
//		printf("G！\n");
//	else
//		printf("输入错误，请输入0或1\n");
//	return 0 ;
//
//}

//int main()  //未解决问题！！
//{
//	int num1=0;
//	int num2=0;
//	int max=0;
//	printf("请输入第一个数:");
//	scanf("%d\n",num1);
//	printf("请输入第二个数:");
//	scanf("%d\n",num2);
//
//	if (num1>num2)
//		max= num1;
//		printf("%d最大值为：\d",max);
//	else if (num1<num2)
//		printf("%d最大值为：\d",max);
//		max=num2;
//	
//
//	return 0;
//}	
//int main()//输入两个数比较最大值的程序
//
//{
//	int a,b,c;
//	int max(int,int);
//	printf("请输入第一个整数：");
//	scanf("%d",&a);
//	printf("请输入第二个整数：");
//	scanf("%d",&b);
//	c=max(a,b);
//	printf("整数%d和%d的最大值：%d\n",a,b,c);
//	return 0;
//}
//
//int max(int x,int y)
//{
//	int z;
//
//	if(x>y)
//		z=x;
//	else
//		z=y;
//	return z;
//
//
//}
//int main()//输入两个数比较最小值的程序
//{
//	int a,b,c;
//	int min(int,int);
//	printf("请输入第一个数：");
//	scanf("%d",&a);
//	printf("请输入第二个数：");
//	scanf("%d",&b);
//	c=min(a,b);
//	printf("整数%d和整数%d的最小值：%d\n",a,b,c);
//	return 0;
//}
//
//
//int min(int x,int y)
//
//{
//	int z;
//	if(x>y)
//		z=y;
//	else
//		z=x;
//	return z;
//	
//}
