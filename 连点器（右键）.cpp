#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;//头文件
int main()
{
	cout<<"请输入点击间隔（单位：秒）\n";
	double Time;
	cin>>Time;
	Time=Time*1000;
	cout<<"按空格键开始\n按Esc键关闭";
    while(1)
    {
        if(GetAsyncKeyState(VK_SPACE))//按下空格，开始执行
        {
            while(1)
            {
                mouse_event(MOUSEEVENTF_RIGHTDOWN|MOUSEEVENTF_RIGHTUP,0,0,0,0);//当前位置点击一次鼠标
                Sleep(Time);//每0.1秒点击一次(Time=100)
                if(GetAsyncKeyState(VK_ESCAPE))return 0; //按esc退出
            }
        }
    }
    return 0;
}
