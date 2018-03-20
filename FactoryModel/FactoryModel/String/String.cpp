//
//  String.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/16.
//  Copyright © 2018年 zwf. All rights reserved.
//
#include <iostream>
#include "String.hpp"
#include <string.h>

String::String(const char *str){
    if (str == nullptr) {
        m_data = new char[1];
        *m_data = '\0'; //对空字符串自动申请存放结束标志'\0'的空
    }else{
        int len = (int)strlen(str);
        m_data = new char[len+1];
        strcpy(m_data, str);
    }
}
String::String(const String &other){ // 输入参数为const引用类·型
    int len = (int)strlen(other.m_data);
    m_data = new char[len+1];
    strcpy(m_data, other.m_data);
}
String::~String(){
    std::cout<<"========~String========"<<std::endl;
    delete []m_data;
}
String & String::operator =(const String &other){// 输入参数为const型
    if (this == &other) {   //检查自赋值
        return *this;
    }
    delete []m_data;    //释放原有内存资源
    int len = (int)strlen(other.m_data);
    m_data = new char[len+1];
    strcpy(m_data, other.m_data);
    
    return *this;   //返回本对象的引用
}

void String::printInfo(){
    std::cout<<"this data is "<<m_data<<std::endl;
}
