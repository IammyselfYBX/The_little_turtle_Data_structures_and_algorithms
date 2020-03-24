/**
 * Function:NEXT数组：当模式匹配串T失配的时候，NEXT数组对应的元素指导应该用T串的哪个元素进行下一轮的匹配。
 * Author:YBX
 * Time:Tue 24 Mar 2020 03:52:22 PM CST
 * 
 * 	数组下标 0 1 2 3 4 5 6 7 8 9 
 * 	 数组T	 9 a b a b a a a b a
 * 	 next    X 0 1 1 2 3 4 1 2 3
 * 	 				 i j
 *
 * */
//核心代码
int i =0;j=1;

next[1]=0;
while(i<T[0]){	//T[0]存放字符串长度
	
	if(0==j ||T[i] == T[j]){
		i++;
		j++;
		next[j]=i;
	}else{
		j=next[j];
	}
}

//实现
//=========================================================
void get_next( String T, int *next )
{
  j = 0;
  i = 1;
  next[1] = 0;
  while( i < T[0] )
  {
    if( 0==j || T[i] == T[j] )
    {
      i++;
      j++;
      next[i] = j;
    }
    else
    {
      j = next[j];
    }
  }

  // 因为前缀是固定的，后缀是相对的。
}

