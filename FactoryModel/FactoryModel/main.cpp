//
//  main.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include <iostream>
using namespace std;
#include "SimpleFactory.hpp"
#include "AbstructFactory.hpp"
#include "SortManager.hpp"
#include "String.hpp"
#include "VectorObj.hpp"


void dumpArrSize(char*p){
    cout<<"p int func size: "<<sizeof(p)<<endl;//8字节
}

//改变指针指向的内容
void change_1(int * a){
    *a = *a+1;
}

//改变形参指针的值，使指向的地址改变，不会影响到实参，就是值传递
void change_2(int * a ){
    int b = 10;
    a=&b;
    cout<<"in func change_2 n: "<<*a<<endl;//10
}

void change_3(int &a){
    a = a+1;
}

//返回局部变量的指针允许，pstr指向的是常量存储区
char* test_1(){
    char *pstr = "This is the buffer text";
    return pstr;
}
//不允许pstr指向的是栈上的内存
char* test_2(){
    char pstr[] = "This is the buffer text";
    return pstr;
}
//允许pstr指向的是静态存储区
char* test_3(){
    static char pstr[] = "This is the buffer text";
    return pstr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
#pragma 简单工厂模式test
    std::cout<<"=================简单工厂模式=====================\n";
    SimpleFactory s_Factory = SimpleFactory();
    AbstractProduct* p_a = s_Factory.createProduct(SimpleFactory::p_productA);
    p_a->operation();
    
    AbstractProduct* p_b =s_Factory.createProduct(SimpleFactory::p_productB);
    p_b->operation();
    
#pragma 工厂模式
    std::cout<<"\n=================工厂模式=====================\n";
    FactoryA a_factory = FactoryA();
    AbstractProduct* f_p_a = a_factory.createProduct();
    f_p_a->operation();
    
    FactoryB b_factory = FactoryB();
    AbstractProduct* f_p_b = b_factory.createProduct();
    f_p_b->operation();
#pragma  插入排序
    int arr[] = {34,8,64,51,32,21,109};
    int len = sizeof(arr)/sizeof(arr[0]);
//    std::cout<<"=============插入排序==============="<<std::endl;
//    SortManager::logArr(arr, len);
//    SortManager::insert_sort(arr, len);
//    SortManager::logArr(arr, len);
//
//#pragma 快速排序
//    std::cout<<"=============快速排序==============="<<std::endl;
//    SortManager::logArr(arr, len);
//    SortManager::quick_sort(arr, 0, len-1);
//    SortManager::logArr(arr, len);
    
#pragma 冒泡
//    std::cout<<"=============冒泡排序==============="<<std::endl;
//    SortManager::logArr(arr, len);
//    SortManager::bubble_sort(arr, len);
//    SortManager::logArr(arr, len);
//
#pragma 选择
    std::cout<<"=============选择排序==============="<<std::endl;
    SortManager::logArr(arr, len);
    SortManager::select_sort(arr, len);
    SortManager::logArr(arr, len);
    
#pragma 基础测试数组和指针
    char str[] = "hello world!";
    str[0] = 'H';
    cout<<str<<" size:"<<sizeof(str)<<endl; //13字节
    dumpArrSize(str);
    
    char* p = "hello weold!";
    cout<<p<<" size:"<<sizeof(p)<<endl;//8字节
    dumpArrSize(p);
    
#pragma String测试
    String *str_1 = new String("hello world!");
    str_1->printInfo();
    
    String str2 = String(*str_1);
    str2.printInfo();
    
    String str_3 = str2;
    str_3.printInfo();
    
#pragma 指针传递和引用传递
    int n = 100;
    change_1(&n);
    std::cout<<"change_1 n: "<<n<<std::endl;//101
    change_2(&n);
    std::cout<<"change_2 n: "<<n<<std::endl;//101
    change_3(n);
    std::cout<<"change_3 n: "<<n<<std::endl;//102
    
#pragma vector的基本用法
    AbstractProduct* p_1 = new ProductA(12);
    AbstractProduct* p_2 = new ProductA(28);
    AbstractProduct* p_3 = new ProductB(1);
    AbstractProduct* p_4 = new ProductB(3);
    VectorObj *vectorObj = new VectorObj();
    vectorObj->addProduct(p_1);
    vectorObj->addProduct(p_2);
    vectorObj->addProduct(p_3);
    vectorObj->addProduct(p_4);
    
    vectorObj->sortProduct();
    vectorObj->printProductInfo();
    vectorObj->removeProduct(p_1);
    AbstractProduct* temp = vectorObj->getProduct(1);
    std::cout<<"The product id："<<temp->getProductId()<<std::endl;
    vectorObj->printProductInfo();
    
    
    delete p_1;
    delete p_2;
    delete p_3;
    delete p_4;
    delete str_1;
    return 0;
}


