//
//  AbstractProduct.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef AbstractProduct_hpp
#define AbstractProduct_hpp

#include <stdio.h>

class AbstractProduct{
public:
    AbstractProduct();
    virtual ~AbstractProduct();

    virtual void operation() = 0;
};

//productA
class ProductA:public AbstractProduct{
public:
    ProductA();
    virtual ~ProductA();

    void operation();
};

//productB
class ProductB:public AbstractProduct{
public:
    ProductB();
    virtual ~ProductB();
    
    void operation();
    
};


#endif /* AbstractProduct_hpp */
