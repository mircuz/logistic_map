//
//  main.cpp
//  logistic_map
//
//  Created by Mirco Meazzo on 10/10/2019.
//  Copyright © 2019 Mirco Meazzo. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    
    double r=2;
    double x;
    double xn;
    double inc;
    
    
    std::cout << "Insert x0 value: " << std::flush;
    std::cin >> x;
    std::cout << "Set incremental value: " << std::flush;
    std::cin >> inc;
    std::ofstream res;
    
    res.open("logistic_map.txt");
    
  if (res.is_open()) {
        while (r<4) {
//            Solve per r increments
            xn= r*x*(1-x);
            res << xn << "\t" << r << std::endl;
            r=r+inc;
            x=xn;
        }
    }
    res.close();
 
    return 0;
}
