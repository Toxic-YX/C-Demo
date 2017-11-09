//
//  main.cpp
//  多态
//
//  Created by YuXiang on 2017/11/9.
//  Copyright © 2017年 Rookie.YXiang. All rights reserved.
//

#include <iostream>
using namespace std;


//形成多态必须具备三个条件：
//必须存在继承关系
//继承关系必须有同名虚函数
//存在基类类型的指针或者引用，通过该指针或引用调用虚函数。


//1、纯虚函数声明如下： virtual void funtion1()=0; 纯虚函数一定没有定义，纯虚函数用来规范派生类的行为，即接口。包含纯虚函数的类是抽象类，抽象类不能定义实例，但可以声明指向实现该抽象类的具体类的指针或引用。
//2、虚函数声明如下：virtual ReturnType FunctionName(Parameter) 虚函数必须实现，如果不实现，编译器将报错，错误提示为：
//error LNK****: unresolved external symbol "public: virtual void __thiscall ClassName::virtualFunctionName(void)"
//3、对于虚函数来说，父类和子类都有各自的版本。由多态方式调用的时候动态绑定。
//4、实现了纯虚函数的子类，该纯虚函数在子类中就编程了虚函数，子类的子类即孙子类可以覆盖该虚函数，由多态方式调用的时候动态绑定。
//5、虚函数是C++中用于实现多态(polymorphism)的机制。核心理念就是通过基类访问派生类定义的函数。
//6、在有动态分配堆上内存的时候，析构函数必须是虚函数，但没有必要是纯虚的。
//7、友元不是成员函数，只有成员函数才可以是虚拟的，因此友元不能是虚拟函数。但可以通过让友元函数调用虚拟成员函数来解决友元的虚拟问题。
//8、析构函数应当是虚函数，将调用相应对象类型的析构函数，因此，如果指针指向的是子类对象，将调用子类的析构函数，然后自动调用基类的析构函数。

// 纯虚函数  virtual int area() = 0;  = 0 告诉编译器，函数没有主体，上面的虚函数是纯虚函数。
//  虚函数   virtual int area(){cout << "Parent class area :" <<endl;return 0;}

class Shape {
protected:
    int width, height;
public:
    Shape( int a=0, int b=0)
    {
        width = a;
        height = b;
    }
   virtual int area()
    {
        cout << "Parent class area :" <<endl;
        return 0;
    }
};
class Rectangle: public Shape{
public:
    Rectangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Rectangle class area :" <<endl;
        return (width * height);
    }
};
class Triangle: public Shape{
public:
    Triangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Triangle class area :" <<endl;
        return (width * height / 2);
    }
};

int main(int argc, const char * argv[]) {
    
    Shape *shape;
    Rectangle rec(10,7);
    Triangle  tri(10,5);
    
    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();
    
    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();
    return 0;
}
