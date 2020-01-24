//
//  BitmapInfoHeader.h
//  DrawingFractalImages
//
//  Created by Ziyuan Shen on 1/24/20.
//  Copyright © 2020 Ziyuan Shen. All rights reserved.
//

#ifndef BitmapInfoHeader_h
#define BitmapInfoHeader_h

#include <cstdint>

using namespace std;

namespace caveofprogramming {
    
#pragma pack(push, 2)
    
    struct BitmapInfoHeader {
        int32_t headerSize{40};
        int32_t width;
        int32_t height;
        int16_t planes{1};
        int16_t bitsPerPixel{24};
        int32_t compression{0};
        int32_t dataSize{0};
        int32_t horizontalResolution{2400};
        int32_t verticalResolution{2400};
        int32_t colors{0};
        int32_t importantColors{0};
    };
    
#pragma pack(pop)
    
}


#endif /* BitmapInfoHeader_h */
