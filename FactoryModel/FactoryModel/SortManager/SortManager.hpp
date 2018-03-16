//
//  SortManager.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/15.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef SortManager_hpp
#define SortManager_hpp

#include <stdio.h>
class SortManager{
public:
    static void insert_sort(int*, int);
    static void quick_sort(int*p, int startPos, int endPos);
    static void bubble_sort(int*p, int);
    static void select_sort(int*, int);
    static void logArr(int*, int);
    
private:
    /*
     */
    static int getPart(int*p, int startPos, int endPos);
    static void swapPos(int&, int&);
};


#endif /* SortManager_hpp */
