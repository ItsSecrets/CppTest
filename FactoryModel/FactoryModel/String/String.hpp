//
//  String.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/16.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
class String
{
public:
    String(const char *str = NULL); // 普通构造函数
    String(const String &other); // 拷贝构造函数
    ~ String(); // 析构函数
    String & operator =(const String &other); // 赋值函数
    
    void printInfo();
private:
    char *m_data; // 用于保存字符串
};
#endif /* String_hpp */
