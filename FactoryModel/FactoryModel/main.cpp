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
    
    
    
    return 0;
}
