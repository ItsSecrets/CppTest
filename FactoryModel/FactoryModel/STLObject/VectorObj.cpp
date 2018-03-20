//
//  VectorObj.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/19.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "VectorObj.hpp"
#include <iostream>
VectorObj::VectorObj(){
    
}
VectorObj::~VectorObj(){
    
}
void VectorObj::addProduct(AbstractProduct* product){
    productArr.push_back(product);
}
void VectorObj::removeProduct(AbstractProduct* product){
    for (iterator = productArr.begin(); iterator!=productArr.end(); iterator++) {
        if (*iterator == product) {
            productArr.erase(iterator);
            break;
        }
    }
}
void VectorObj::sortProduct(){
    std::sort(productArr.begin(), productArr.end(), [](AbstractProduct*a , AbstractProduct*b){
        return a->getProductId()<b->getProductId();
    });
}
AbstractProduct* VectorObj::getProduct(int index){
    if (index>=0&&index<productArr.size()) {
       return productArr.at(index);

    }else{
        std::cout<<"没有存在的下标！！"<<std::endl;
        
    }
    return nullptr;
}

void VectorObj::printProductInfo(){
    for (int i = 0; i<productArr.size(); i++) {
        std::cout<<"product id: "<<productArr.at(i)->getProductId()<<std::endl;
    }
}
