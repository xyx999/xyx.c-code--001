#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//int main()
//{
//	int a = 4;
//	int b = a<<2;
//	printf("%d\n",b);
//	return 0;
//}



//int main()  //����ĸ����Լ�����Ĵ�ӡ
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

//int ADD(int x, int y) //ʹ�����Զ��庯��
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
//	printf("��һ����%d+�ڶ�����%d�ĺ��ǣ�%d\n",a,b,sum);
//	return 0;
//}







//int main() //whileѭ�� 
//{
//	int line = 0;
//	printf("��Ҫ����ѧϰ");
//	while (line<20000)
//	{
//		line ++;
//	printf("�ô����ô��룺%d\n",line);
//	}
//	if (line>=20000)
//		printf("�ɹ����ѧҵ\n");
//	return 0;
//}

int main()
{
	int line =0;
	while(line<20000)
	{
		printf("�����ô���:%d\n",line);
		line++;
	}
	printf("ѧ������!!\n");
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
//	char arr2[]={ 'a', 'b' ,'c','\0'};//"\0"�ǽ�����־ ��
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	char arr1 [] ="abc";
//	char arr2 [] ={'a','b','c','\0'};
//	printf("%d\n", strlen(arr1)); // strlen --- string length �ַ�������
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
//	printf("�����ѧ\n");
//	printf("�Ƿ�ú�ѧϰ(��ѡ��0/1)��");
//	scanf("%d",&input); //��Ҫ���ӡ�&�� ��������λ
//
//	if (input == 1)
//		printf("������δ��\n");
//	else if ( input == 0)
//		printf("g��\n");
//	return 0;
//}

//int main ()
//{
//	int input = 0;
//
//	printf("�����ѧ\n");
//	printf("�Ƿ�ú�ѧϰ����������1/0����");
//	scanf("%d",&input);
//	if(input == 0)
//		printf("δ�����ڣ�\n");
//	else if(input == 1)
//		printf("G��\n");
//	else
//		printf("�������������0��1\n");
//	return 0 ;
//
//}

//int main()  //δ������⣡��
//{
//	int num1=0;
//	int num2=0;
//	int max=0;
//	printf("�������һ����:");
//	scanf("%d\n",num1);
//	printf("������ڶ�����:");
//	scanf("%d\n",num2);
//
//	if (num1>num2)
//		max= num1;
//		printf("%d���ֵΪ��\d",max);
//	else if (num1<num2)
//		printf("%d���ֵΪ��\d",max);
//		max=num2;
//	
//
//	return 0;
//}	
//int main()//�����������Ƚ����ֵ�ĳ���
//
//{
//	int a,b,c;
//	int max(int,int);
//	printf("�������һ��������");
//	scanf("%d",&a);
//	printf("������ڶ���������");
//	scanf("%d",&b);
//	c=max(a,b);
//	printf("����%d��%d�����ֵ��%d\n",a,b,c);
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
//int main()//�����������Ƚ���Сֵ�ĳ���
//{
//	int a,b,c;
//	int min(int,int);
//	printf("�������һ������");
//	scanf("%d",&a);
//	printf("������ڶ�������");
//	scanf("%d",&b);
//	c=min(a,b);
//	printf("����%d������%d����Сֵ��%d\n",a,b,c);
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
