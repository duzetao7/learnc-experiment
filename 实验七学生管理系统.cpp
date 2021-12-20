#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>
void gotoxy(short x, short y) {
    COORD coord = { x, y };
    //COORD是Windows API中定义的一种结构体类型，表示控制台屏幕上的坐标。
    //上面语句是定义了COORD类型的变量coord，并以形参x和y进行初始化。
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    //GetStdHandle(STD_OUTPUT_HANDLE); 获取控制台输出句柄
    //然后用SetConsoleCursorPosition设置控制台(cmd)光标位置
}
void clst()
{
    while ('\n' != getchar())
        ;
    system("cls");
}


int main()
{
    //0.1__打印主界面
home:
    printf("\n\n\n\n");
    printf("                                       __________________________\n");//4(第五行)
    printf("                                       |************************|\n");//5
    printf("                                       |欢迎使用学生成绩管理系统|\n");//6
    printf("                                       |************************|\n");//7
    printf("                                       |************************|\n");//8
    printf("                                       |** 请输入您的登录密码 **|\n");//9
    printf("                                       |                        |\n");//(49, 10)
    printf("                                       |                        |\n");
    printf("                                       |************************|\n");
    printf("                                       |************************|\n");
    printf("                                       |________________________|\n");
    system("pause");

    //0.2__密码输入
    gotoxy(49, 10);
    char Password[6] = { 0 };
    int x = 0;
    char c = 0;
    static int fault = 0;
    while (x <= 5 && c != 13)
    {
        c = _getch();//读取
        Password[x] = c;//存放   //先存放再++？？
        if (c == 8)//8是退格符的ASCII码
        {
            x--;
            printf("\b \b");//回退到前一个字符的位置，用空格代替（打印完空格后光标会运动到下一个字符的位置），再回退到前一个字符的位置
            while (x < 0)
                x = 0;//不然光标过度回退
            gotoxy(49 + x, 10);
            
        }
        else if (c != 13)//13是回车符的ASCII码
        {
            putchar('*');//不是回车就用*代替
            x++;//要在此处++，否则对回退有影响
        }
            
    }

    if (strcmp(Password, "123123") == 1)
    {
        gotoxy(45, 11);
        printf("登录成功,请稍候");
        for (int i = 0; i < 3; i++)
        {
            Sleep(1000);
            printf(".");
        }
    }
    else
    {
        system("cls");
        fault++;
        if (fault == 3)
        {
            printf("登陆失败");
            exit(1);
        }
        goto home;
    }

    //0.3打印功能界面
    system("cls");
    printf("\n\n\n\n");
    printf("                                       __________________________\n");//4(第五行)
    printf("                                       |************************|\n");//5
    printf("                                       |欢迎使用学生成绩管理系统|\n");//6
    printf("                                       |************************|\n");//7
    printf("                                       |* 请输入你要使用的功能 *|\n");//8
    printf("                                       |****** 1.输入成绩 ******|\n");//9
    printf("                                       |****** 2.显示成绩 ******|\n");//(49, 10)
    printf("                                       |****** 3.成绩统计及排序 |\n");//11
    printf("                                       |****** 4.查询成绩 ******|\n");//12
    printf("                                       |****** 5.退出系统 ******|\n");//13
    printf("                                       |________________________|\n");//14

    char sco[100][7];
    void input(char sco[][7]);
    while (1)
    {
        int a;
        scanf("%d", &a);
        switch (a)
        {
            case 1:
            {
                //1. 输入模块 (输入模块：子函数input)
                    //1°进入系统后，显示欢迎界面，列出系统主要功能及操作指令字符，如：“输入”为I(i)；“信息统计”为C(c)；“查询”为A(a)等；
                    //2°使用多维数组存储输入信息，一般为二维数组；
                    //3°读入同学的姓名（拼音）、学号、各科(4科顺序：高数、英语、C语言、物理)成绩，同时计算出每个同学的平均成绩
                input(sco);
                printf("1\n");
                break;
            }
            case 2:
            {
                //2.显示模块(显示模块：子函数display)
                    //1°显示所有同学的信息列表（按信息输入排序）：姓名：学号：各科成绩：平均成绩；
                    //2°显示需要补考的同学信息：姓名：学号：需要补考的科目及成绩：
                printf("2\n");
                break;
            }
            case 3:
            {
                //3. 信息统计及排序模块(统计模块：子函数count)
                    //1°具有统计所输入成绩中，全班各科平均分、个人平均分的功能；
                    //2°对全班同学按学号、各科成绩、平均成绩进行排序，输出排序后的所有信息，并统计全班各科补考情况；
                printf("3\n");
                break;
            }
            case 4:
            {
                //4. 查询模块（提高）
                    //1°对输入信息按姓名查询，并显示出被查询同学的所有信息，使用strcmp()函数；
                    //2°对全班同学按性别(sex)查询，分别列出男 / 女同学的所有信息；
                    //3°按照成绩查询，对某科目或平均分的分数段进行查询，要求输入查询分数段from scar1 to scar2，显示此分数段内的同学信息；
                printf("4\n");
                break;
            }
            case 5:
            {
                //退出
                exit(0);
            }
            default:
            {
                printf("输入错误\n");
                while ('\n' != getchar())//清理缓冲区
                    ;
            }
        }
    }

	return 0;
}

void input(char sco[][7])
{
    system("cls");
    printf("\n\n\n\n");
    printf("                                       __________________________\n");//4(第五行)
    printf("                                       |************************|\n");//5
    printf("                                       |*****   成绩录入   *****|\n");//6
    printf("                                       |************************|\n");//7
    printf("                                       |* 请输入你要使用的功能 *|\n");//8
    printf("                                       |****** I(i)  输入 ******|\n");//9
    printf("                                       |****** C(c)  统计 ******|\n");//(49, 10)
    printf("                                       |****** A(a)  查询 ******|\n");//11
    printf("                                       |****** Q(q)  返回 ******|\n");//12
    printf("                                       |******            ******|\n");//13
    printf("                                       |________________________|\n");//14
    char inp = _getch();
    if ('I' == inp || 'i' ==inp )
    {
        clst();
        printf("  姓名  学号******  数学  英语  C语言  物理\n");
        for (static int i = 0;i <= 100; i++)
        {
            printf("请输入");
            while ('\n' != getchar())//清理缓冲区
                ;
            for (static int j = 0; j < 7; j++)
            {
                printf("and?");
                sco[i][j] = getchar();
                
            }
            break;
        }

    }
    printf("%s\n", sco);
    system("pause");
}