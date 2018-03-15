//
//  AbstructFactory.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "AbstructFactory.hpp"

AbstructFactory::AbstructFactory(){

}
AbstructFactory::~AbstructFactory(){

}

FactoryA::FactoryA(){
    
}

FactoryA::~FactoryA(){
    
}

AbstractProduct* FactoryA::createProduct(){
    AbstractProduct* temp = new ProductA();
    return  temp;
}

FactoryB::FactoryB(){
    
}

FactoryB::~FactoryB(){
    
}

AbstractProduct* FactoryB::createProduct(){
    AbstractProduct* temp = new ProductB();
    return temp;
}
