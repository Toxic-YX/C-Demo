//
//  main.cpp
//  ClassAndProject
//
//  Created by YuXiang on 2017/11/9.
//  Copyright © 2017年 Rookie.YXiang. All rights reserved.
//

#include <iostream>
using namespace std;

// 类定义
class Box {
public:
    double length;   // 盒子的长度
    double breadth;  // 盒子的宽度
    double height;   // 盒子的高度
    
    double Add(double l, double h) {
        return l + h;
    }
};

int main(int argc, const char * argv[]) {

    Box box1;
    Box box2;
    
    box1.length = 5.0;
    box1.height = 10.0;
    box2.height = 9.0;
    
    double num = box1.Add(box1.length, box1.height);
    
    cout << "num值" << num << endl;
    
    return 0;
}


