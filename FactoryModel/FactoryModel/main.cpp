//
//  main.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include <iostream>
#include "SimpleFactory.hpp"
#include "AbstructFactory.hpp"
#include "SortManager.hpp"

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
    
    
    return 0;

    
    
}
