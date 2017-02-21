//
//  main.cpp
//  training
//
//  Created by Tamer El Halwagy on 2/21/17.
//  Copyright © 2017 Tamer El Halwagy. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdio>
#include <cmath>



using namespace std ;
int main(int argc, const char * argv[]) {
    // insert code here...
   // cout << "Hello, World!\n";
    
    
    double time ;
    
    cin >> time ;
    
    if ( time < 60  )
    {
        cout  << "0:0:" << time << endl ;
    }else if (time >= 60  && time < 3600 )
    {
        
        int  mints = time  /  60  ;
        
        double seconds = ( time / 60  - mints )  * 60 ;
        cout << fixed << setprecision(0);
        cout << "0:" << mints << ":" << seconds << endl ;
        
        
    }else if (time >= 3600  )
    {
        int hours  =  time / 3600 ;
        int  mints = (time / 3600  -  hours )  * 60 ;
        
        double seconds = ((time / 3600  -  hours )  * 60   - mints ) * 60 ;
        
        cout  << hours << ":" <<  mints << ":" << seconds << endl ;
    }
    
    return 0;
}
