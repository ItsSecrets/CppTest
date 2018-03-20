//
//  SimpleFactory.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "SimpleFactory.hpp"

SimpleFactory::SimpleFactory(){

}


SimpleFactory::~SimpleFactory(){
    
}

AbstractProduct* SimpleFactory::createProduct(int pType){
    AbstractProduct* p = nullptr;
    switch (pType) {
        case SimpleFactory::p_productA:
            p = new ProductA(0);
            break;
        case SimpleFactory::p_productB:
            p = new ProductB(0);
            break;
            
        default:
            break;
    }
    return  p;
}

