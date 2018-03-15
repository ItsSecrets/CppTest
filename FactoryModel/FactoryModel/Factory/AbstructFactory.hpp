//
//  AbstructFactory.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef AbstructFactory_hpp
#define AbstructFactory_hpp

#include <stdio.h>
#include "AbstractProduct.hpp"

class AbstructFactory{
public:
    AbstructFactory();
    virtual ~AbstructFactory();
    
    virtual AbstractProduct* createProduct() = 0;
};

class FactoryA:public AbstructFactory{
public:
    FactoryA();
    
    virtual ~FactoryA();
    
    AbstractProduct* createProduct();
    
};

class FactoryB:public AbstructFactory{
public:
    FactoryB();
    
    virtual ~FactoryB();
    
    AbstractProduct* createProduct();
    
};


#endif /* AbstructFactory_hpp */
