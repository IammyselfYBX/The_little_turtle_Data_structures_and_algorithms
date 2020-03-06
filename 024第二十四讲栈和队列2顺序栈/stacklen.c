//计算栈的当前容量
#include "sqnode.h"

int StackLen(sqStack s){
    return(s.top-s.base);   //返回值不是地址的差，而是 元素个数(地址差/元素所占字节数)
}

//指针可以相减不能相加。