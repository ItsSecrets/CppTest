//
//  SimpleFactory.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef SimpleFactory_hpp
#define SimpleFactory_hpp

#include <stdio.h>
#include "AbstractProduct.hpp"

class SimpleFactory{
public:
    enum ProductType {
        p_productA,
        p_productB
    };
    
    SimpleFactory();
    virtual ~SimpleFactory();
    
    AbstractProduct* createProduct(int pType);
    
};

#endif /* SimpleFactory_hpp */
