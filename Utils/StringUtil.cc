#include "StringUtil.h"

/**
 * 获取字符串的长度
 */
int StringUtil::getLength(unsigned char* data){
    int ret = 0;
    char ch = data[0];
    while(ch != '\0'){
        ch = data[++ret];
    }
    return ret;
}

/**
 * 字符串转整型
 */
int StringUtil::stringToInt(unsigned char* data, int start, int end){
    int ret = 0;
    return ret;
}
