//
//  main.cpp
//  继承
//
//  Created by YuXiang on 2017/11/9.
//  Copyright © 2017年 Rookie.YXiang. All rights reserved.
//

#include <iostream>
using namespace std;

// 积类

class Shape {
    
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    
protected:
    int width;
    int height;
};

// 派生类
class Rectangle: public Shape {
    
public:
    int getArea() {
        return (width * height);
    }
};

// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

// 多继承
//class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,…
//{
//    <派生类类体>
//};

// 派生类
class RectangleNew: public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main() {
    

    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    
    cout << "面积" << rect.getArea() << endl;
    
    
    // 多继承
    RectangleNew Rect;
    int area;
    
    Rect.setWidth(5);
    Rect.setHeight(7);
    
    area = Rect.getArea();
    
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;
    
    // 输出总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;

    return 0;
}
