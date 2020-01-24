//
//  BitmapFileHeader.h
//  DrawingFractalImages
//
//  Created by Ziyuan Shen on 1/24/20.
//  Copyright © 2020 Ziyuan Shen. All rights reserved.
//

#ifndef BitmapFileHeader_h
#define BitmapFileHeader_h

#include <cstdint>

using namespace std;

namespace caveofprogramming {
    
#pragma pack(push, 2)
    
    struct BitmapFileHeader {
        char header[2] { 'B', 'M' };
        int32_t fileSize;
        int32_t reserved { 0 };
        int32_t dataOffset;
    };
    
#pragma pack(pop)
    
}

#endif /* BitmapFileHeader_h */
