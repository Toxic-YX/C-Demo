//
//  main.cpp
//  修饰符类型
//
//  Created by YuXiang on 2017/11/9.
//  Copyright © 2017年 Rookie.YXiang. All rights reserved.
//

#include <iostream>
//   unsigned、short 或 unsigned、long，int
// 类型限定符 : const 类型的对象在程序执行期间不能被修改改变。修饰符 volatile 告诉编译器，变量的值可能以程序未明确指定的方式被改变。由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。C++提供了关键字explicit，可以阻止不应该允许的经过转换构造函数进行的隐式转换的发生。声明为explicit的构造函数不能在隐式转换中使用

// volatile 往往会用于多线程的修饰

//volatile boolean isNext = false;

//Thread A（） {
//    // 第一个工作
//    // isNext = true;
//}
//
//Thread B （）{
//    if (isNext) {
//        // 第二个工作
//    }
//}

// explicit构造函数是用来防止隐式转换的
class Test1
{
public:
    Test1(int n)
    {
        num=n;
    }//普通构造函数
private:
    int num;
};
class Test2
{
public:
    explicit Test2(int n)
    {
        num=n;
    }//explicit(显式)构造函数
private:
    int num;
};

int main(int argc, const char * argv[]) {
//    Test1 t1=12;//隐式调用其构造函数,成功
//    Test2 t2=12;//编译错误,不能隐式调用其构造函数
//    Test2 t2(12);//显式调用成功
    return 0;
}
