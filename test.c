#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%p\n", arr);
    printf("%p\n", arr+1);
    
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[0]+1);
    
    printf("%p\n", &arr);
    printf("%p\n", &arr+1);//&arr代表整个数组的地址
}
// int num(char*str)
// {
//     int i = 0;
//     while(*str+1!='\0')
//     {
//         if(*str=='L'&&*(str+1)=='C')
//         {
//             i++;
//             str++;
//         }
//         str++;
//     }
//     return i;
// }
// int main()
// {
//     char arr[100] = {};
//     scanf("%s", arr);
//     int count = num(arr);
//     printf("%d", count);
// }
// void bubble_sort(int arr[],int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz - 1; i ++)
//     {
//         int flag = 1;//假设这一趟已有序
//         int j = 0;
//         for (j = 0; j < sz - 1 - i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//                 flag = 0;//本趟并不完全有序
//             }
//         }
//         if(flag==1)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {4, 1, 3, 6, 7, 8, 3, 6, 9, 4, 2};
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     for (i = 0; i < sz;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//         return 0;
// }
// int main()
// {
//     int arr[3][4] = {{1, 2}, {3, 4}};
//     //可以省略行，不能省略列
//     int i = 0;
//     for (i = 0; i < 3;i++)
//     {
//         int j = 0;
//         for (j = 0; j < 4;j++)
//         {
//             //printf("%d ", arr[i][j]);
//             printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//         }
//         //printf("\n");
//     }
//     //char ch[5][6];
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     for (i = 0; i < sz;i++)
//     {
//         printf("&arr[%d] = %p\n", i, &arr[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int i = 0;
//     int len = strlen(arr);
//     for (i = 0; i < len;i++)
//     {
//         printf("%c ", arr[i]);
//     }
//     return 0;
// }
// int main()
// {
//     char arr1[] = "abc";
//     char arr2[] = {'a', 'b', 'c','e','t','y'};
//     printf("%d\n", sizeof(arr1));
//     printf("%d\n", sizeof(arr2));
//     printf("%d\n", strlen(arr1));
//     printf("%d\n", strlen(arr2));
//     return 0;
// }
// int main()
// {
//     int arr[10];
//     char arr2[5];
//     int n = 5;
//     //[]中放常量
// }
// int fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while(n>2)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
    // if(n<=2)
    //     return 1;
    // else
    //     return fib(n - 1) + fib(n - 2);//速度太慢了
// }
// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     ret = fib(n);
//     printf("ret=%d\n", ret);
//     return 0;
// }
// int facl(int n)
// {
//     if(n<=1)
//         return 1;
//     else
//         return n * facl(n - 1);
//     // int i = 0;
//     // int ret = 1;
//     // for (i = 1; i <= n;i++)
//     // {
//     //     ret *= i;
//     // }
//     // return ret;
// }
// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     ret = facl(n);
//     printf("%d\n", ret);
//     return 0;
// }
// int my_strlen(char*str)
// {
//     // int count = 0;
//     // while(*str != '\0')
//     // {
//     //     count++;
//     //     str++;
//     // }
//     // return count;
//     if(*str != '\0')
//         return 1 + my_strlen(str + 1);
//     else
//         return 0;
// }
// int main()
// {
//     char arr[] = "hellow";
//     int len = my_strlen(arr);
//     printf("len=%d\n", len);
//     return 0;
// }
// void print(int n)
// {
//     if(n>9)
//     {
//         print(n / 10);
//     }
//     printf("%d ", n % 10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%d", &num);
//     print(num);
// }
// //函数的声明
// int add(int, int);
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int sum = 0;
//     //函数的调用
//     sum = add(a, b);
//     printf("%d\n", sum);
//     return 0;
// }
// //函数的定义
// int add(int x,int y)
// {
//     int z = x + y;
//     return z;
// }
// void add(int *p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num = 0;
//     add(&num);
//     printf("num = %d\n", num);
//     add(&num);
//     printf("num = %d\n", num);
//     add(&num);
//     printf("num = %d\n", num);
//     return 0;
// }
// int binary_search(int arr[], int s, int sz)//本质上arr是一个指针
// {
//     int left = 0 ;
//     int right = sz - 1 ;
//     while(left<=right)
//     {
//         int mid = (left + right) / 2;
//         if(arr[mid]>s)
//             right = mid - 1;
//         else if(arr[mid]<s)
//             left = mid + 1;
//         else
//             return mid;
//     }
//     return 0;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 7;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int ret = binary_search(arr,k,sz);//传递过去的是arr首元素的地址
//     if(ret == -1)
//     {
//         printf("找不着");
//     }
//     else
//     {
//         printf("找到了，下标是%d\n", ret);
//     }
//     return 0;
// }
// int is_prime(int n)
// {
//     int j;
//     for (j = 2; j <= sqrt(n);j++)
//     {
//         if(n%j==0)
//             return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int i = 0;
//     for (i = 100; i <= 200;i++)
//     {
//         if(is_prime(i)==1)
//             printf("%d ",i);
//         else
//             {};
//     }
//     return 0;
// }
// void swap(int x,int y)//传值调用
// {
//     int mid;
//     mid = x;
//     x = y;
//     y = mid;
// }//注意，此处只是将x和y的值进行了交换，a和b并未受到影响！！！
// void swap(int*x,int*y)//形参//传址调用
// {
//     int mid;
//     mid = *x;
//     *x = *y;
//     *y = mid;
// }
// int main()
// {
//     int a = 19;
//     int b = 27;
//     swap(&a, &b);//实参--一定有一个确定的值
//     printf("%d %d", a, b);
//     return 0;
// }
// int main()
// {
//     char arr[] = "hellow werld";
//     memset(arr, '$', 6);
//     printf("%s\n", arr);
//     return 0;
// }
// int main()
// {
//     char arr1[] = "hellow world";
//     char arr2[20] = "121323";
//     strcpy(arr2, arr1);
//     printf("%s", arr2);
//     return 0;
// }
// int main()
// {
//     int a,j,y;
//     int count = 0;
//     int sum = 0;
//     int i = 1;
//     scanf("%d", &a);
//     int arr[] = {0};
//     while(1)
//     {
//         if((a/i)>=1)
//         {
//             i = i * 10;
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (i = 10,j=0; i <= a*10;i=i*10)
//     {
//         y = (a % i)/(i/10);
//         arr[j] = y;
//     }
//     for (i = pow(10 , count), j = 0; j <count; i=(i / 10),j++)
//     {
//         sum = sum + arr[j]*i;
//     }
//     printf("%d", sum);
//     return 0;
// }
// int main()
// {
//     char arr[20] = {0};
//     system("shutdown - s - t 60");
// again:
//     printf("！！！你的电脑即将关机！！！");
//     scanf("%s", arr);
//     if(strcmp(arr,"裂开了")==0)
//     {
//         system("shutdown - a");
//     }
//     else
//     {
//         goto again;
//     }
//     return 0;
// }
// void menu()
// {
//     printf("#############################\n");
//     printf("###   1.PLAY     0.EXIT   ###\n");
//     printf("#############################\n");
// }
// void game()
// {
//     printf("猜数字游戏哦！");
//     int ret = rand()%100+1;//生成随机数
//     int guess = 0;
//     while(1)
//     {
//         printf("来输入个数字:>");
//         scanf("%d", &guess);
//         if(guess>ret)
//             printf("好好想想，有这么大？\n");
//         else if(guess<ret)
//             printf("这么小也不对吧。\n");
//         else
//             {
//              printf("小崽子，猜的还挺准。\n\n");
//              break;
//             }
//     }
// }
// int main()
// {
//     int i=0;
//     srand((unsigned int) time(NULL));//用时间戳来设置随机数的生成起点
//     do 
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &i);
//         switch(i)
//         {
//             case 1:
//                 game();
//                 break;
//             case 0:
//                 printf("退出游戏\n\n");
//                 break;
//             default:
//                 printf("选择错误\n\n");
//                 break;
//         }
//     } while (i);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     for (i = 1; i <= 9;i++)
//     {
//         int j = 0;
//         for (j = 1; j <=i;j++)
//         {
//             printf("%d*%d=%-2d ", i, j, i * j);///%nd叫打印n位右对齐，%-nd叫打印n位左对齐
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main()
// {
//     int arr[]={1,12,14,43,25,36,46,23,54,35,64};
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int max = arr[0];
//     for (i = 0; i < sz;i++)
//     {
//         if(max<arr[i])
//             max = arr[i];
//     }
//     printf("%d", max);
//     return 0;
// }
// int main()
// {
//     int i;
//     int flag=1;
//     double sum;
//     for (i = 1; i <= 100;i++)
//     {
//         sum += flag * 1.0 / i;
//         flag=flag * -1;
//     }
//     printf("%lf", sum);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for (i = 1; i <= 100;i++)
//     {
//         if(i%10==9)
//             count++;
//         if(i/10==9)
//             count++;
//     }
//     printf("%d ", count);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     for (i = 100; i <= 200;i++)
//     // 优化为for(i=101;i<=200;i+=2)
//     {
//         for (j = 2; j < i;j++)
//         // 可优化为for(j=2;j<=sqrt(i),j++),sqrt为开平方,sqrt头文件为#include<math.h>
//         {
//             if(i%j==0)
//                 break;
//         }
//         if(i==j)
//         // 此处也优化为if(j>sqrt(i))
//         {
//             count++;
//             printf("%d ", i);
//         }
//     }
//     printf("\n%d", count);
//     return 0;
// }
// int main()
// {
//     int year = 0;
//     int count = 0;
//     for (year = 1000; year <= 2000;year++)
//     {
//         if((year%4==0&&year%100!=0)||(year%400==0))
//         {
//             printf("%d ", year);
//             count++;
//         }
//     }
//     printf("\n%d ", count);
//     return 0;
// }
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     while(a%b)
//     {
//         int v = a % b;
//         a = b;
//         b = v;
//     }
//     printf("%d", b);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     for (i = 1; i <= 100;i++)
//     {
//         if(i%3==0)
//             printf("%d ", i);
//     }
//     return 0;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d", &a, &b, &c);
//     if(a<b)
//     {
//         int v = a;
//         a = b;
//         b = v;
//     }
//     if(a<c)
//     {
//         int v = a;
//         a = c;
//         c = v;
//     }
//     if(b<c)
//     {
//         int v = b;
//         b = c;
//         c = v;
//     }
//     printf("%d,%d,%d", a, b, c);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     char password[20] = {0};
//     for (i = 0; i < 3;i++)
//     {
//         printf("请输入密码:>\n");
//         scanf("%s", password);
//         if(strcmp(password,"shs123456")==0)//注意！！！比较字符串是否相等，不能用==，应使用库函数strcmp
//         {
//             printf("你好舒先生\n");
//             break;
//         }
//         else
//             printf("什么老年人记性，需要就医吗\n\n");
//     }
//     if(i==3)
//         printf("你谁呀你，快滚出去\n");
//     return 0;
// }
// int main()
// {
//     char arr1[] = "hellow world!!!";
//     char arr2[] = "               ";
//     int left = 0;
//     int right = strlen(arr1) - 1;
//     //strlen函数，头文件#include<string.h>
//     while(left<=right)
//     {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n", arr2);
//         //sleep函数，休息1秒，单位ms,头文件#include<windows.h>
//         Sleep(1000);
//         //system执行系统命令的函数，头文件#include<stdlib.h>
//         system("cls");//cls-清空屏幕的命令
//         left++;
//         right--;
//     }
//     printf("hellow world!!!");
//     return 0;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 0;
//     scanf("%d", &k);
//     int a = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int right = a-1;
    
//     while(left<=right)
//     {
//         int mid = (left + right) / 2;
//         if(arr[mid]>k)
//             {right = mid - 1;}
//         else if(arr[mid]<k)
//             {left = mid + 1;}
//         else
//             {printf("找到了，下标是：%d", mid);
//         break;}
//     }
//     if(left>right)
//         printf("找不着");
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int a = 1;
//     int sum = 0;
//     scanf("%d", &n);
//     for (i = 1; i <= n;i ++)
//     {
//         a = a * i;
//         sum = sum + a;
//     }
//     printf("%d", sum);
// }
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int a = 1;
//     scanf("%d", &n);
//     for (i = 1; i <= n;i ++)
//     {
//         a = a * i;
//     }
//     printf("%d", a);
// }
// int main()
// {
//     int i=0;
//     int j = 0;
//     for (; i < 10;i++)
//     {
//         for (; j < 10;j++)
//         {
//             printf("hh ");
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int ch=0;
//     while((ch=getchar())!=EOF)
//     {
//         if(ch<'0'||ch>'9')
//             continue;
//         putchar(ch);
//     }
//     return 0;
    // int a = 0;
    // int ch = 0;
    // char password[20] = {0};
    // printf("请输入密码:>");
    // scanf("%s", password);
    // printf("请确认:(Y/N)");
    // while(ch=getchar()!='\n')
    // {
    //     ;
    // }
    // a = getchar();
    // if(a=='Y')
    //     printf("确认成功");
    // else if(a=='N')
    //     printf("确认失败");
    //     else
    //         printf("你说你妈呢");

    // return 0;

        /* int ch = 0;
        //EOF=end of file --> -1
        //ctrl + z
        while((ch=getchar())!=EOF)
            {
                printf("%c", ch);
            }
        return 0; */
        /*  int a=getchar();
         putchar(a);
         printf(" %c", a);
         return 0; */
//}
// int main()
// {
//     int a = 1;
//     int b = 2;
//     while (a<=10&&b==2)
//     {
//         printf("%d ", a);
//         a++;}
//         return 0;
// }
/* int main()
{
    int n = 1;
    int m = 2;
    switch(n)
    {
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch(n)
            {
                case 1:
                    n++;
                case 2:
                    m++;
                    n++;
                    break;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("m=%d,n=%d\n", m, n);
    return 0;
} */
// int main()
// {
//     int a = 0;
//      do{
//         if(a%2==1)
//             {printf("%d ", a);
//              a++;}
//         else
//         a++;
//      } while (a <= 100);
//     return 0;
// }
// {
//     int a = 1;
//     int b = 2;
//     if(b==2)
//         {a = 3;}
    
//     {a = 4;}
//     printf("%d\n", a);
//     return 0;
// }
// int main()
// {
//     int a = 0;
//     int b = 2;
//     if(a==1)
//         if(b==2)
//            printf("q");
//         else
//            printf("c");
//     else
//            printf("e");
//     return 0;
// }
// struct person
// {
//     char name[10];
//     short age;
// };
// int main()
// {
//     struct person shs = {"舒浩松", 18};
//     struct person *p = &shs;
//     printf("%s\n", (*p).name);
//     printf("%d\n", (*p).age);
//     strcpy(shs.name, "松子");
//     printf("%s\n", p->name);
//     printf("%d\n", p->age);
//     /* printf("姓名：%s\n", shs.name);
//     printf("年龄：%d岁\n", shs.age);
//     shs.age = 19;
//     printf("明年的年龄：%d岁\n", shs.age); */
//     return 0;
// }
// int sum(int a)
// {
//     int c = 0;
//     static int b = 3;
//     c += 1;
//     b += 2;
//     return (a + b + c);
// }
// int main()
// {
//     int i;
//     int a = 2;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", sum(a));
//     }
// }
// int main()
// {
//     int day = 0;
//     do{
//     printf("请输入:>\n");
//     scanf("%d", &day);
//     switch(day)
//     {
//         case 1:
//             printf("周一\n");
//             break;
//         case 2:
//             printf("周二\n");
//             break;
//         case 3:
//             printf("周三\n");
//             break;
//         case 4:
//             printf("周四\n");
//             break;
//         case 5:
//             printf("周五\n");
//             break;
//         case 6:
//             printf("周六\n");
//             break;
//         case 7:
//             printf("周日\n");
//             break;
//     }
//     }while (day);
//     return 0;
// }
// int main()
// {
//     char ch='w';
//     char *pc = &ch;
//     printf("%d\n", sizeof(pc));
//     return 0;
// }
// void test()
// {
//     static int a = 1;
//     a++;
//     printf("a=%d\n", a);
// }
// int main()
// {
//     int i = 0;
//     while(i<5)
//     {
//         test();
//         i++;
//     }
//     return 0;
// }