//
//  main.cpp
//  Imogen
//
//  Created by Michael Dorst on 6/24/14.
//  Copyright (c) 2014 Michael Dorst. All rights reserved.
//

#include "library.h"
#include <iostream>

int main() {
    IO * out = new IO;
    out->call("println", A({S("test "), S("strings\n")}));
}
