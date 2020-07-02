//
// Created by chihuo on 2020/7/2.
//

#include "test_one.h"

/**
 * 获取测试数据
 */
char *getTestData(int values_int) {
    char test_byte[] = {0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37};
    int size = sizeof(test_byte);
    char *dst = new char[size];
    for (int i = 0; i < size; i++) {
        dst[i] = test_byte[i] + (char) values_int;
    }
    return dst;
}

