//
//  main.cpp
//  VariableType
//
//  Created by YuXiang on 2017/11/9.
//  Copyright © 2017年 Rookie.YXiang. All rights reserved.
//

#include <iostream>
using namespace std;
// 变量声明
extern int a, b;//
extern int c;
extern float f;

// 全局变量
int funcNun;

// 常量 使用 #define 预处理器  使用 const 关键字
#define WIDTH 10
#define NEWLINE '\n'
const int  LENGTH = 10;
/**
 宏定义 #define 和常量 const 的区别
 类型和安全检查不同
 宏定义是字符替换，没有数据类型的区别，同时这种替换没有类型安全检查，可能产生边际效应等错误；
 const常量是常量的声明，有类型区别，需要在编译阶段进行类型检查
 编译器处理不同
 宏定义是一个"编译时"概念，在预处理阶段展开，不能对宏定义进行调试，生命周期结束与编译时期；
 const常量是一个"运行时"概念，在程序运行使用，类似于一个只读行数据
 存储方式不同
 宏定义是直接替换，不会分配内存，存储与程序的代码段中；
 const常量需要进行内存分配，存储与程序的数据段中
 
 
 宏定义可以通过#undef来使之前的宏定义失效
 const常量定义后将在定义域内永久有效
 
 宏定义不能作为参数传递给函数
 const常量可以在函数的参数列表中出现
 */


// 函数声明
int func();

int main() {
    
    // 变量定义
    int a, b;
    int c;
    float f;
    
    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    
    cout << c << endl ;
    
    f = 70.0/3.0;
    cout << f << endl ;
    
    funcNun = func();
    
    cout << "funcNum的值是："<< funcNun << endl;
    
    return 0;
}

int func() {
    // int a = 0;     //定义并声明了变量 a
   // extern int a; 只是声明了有一个变量 a 存在，具体 a 在哪定义的，需要编译器编译的时候去找。
    
    return 10;
}
