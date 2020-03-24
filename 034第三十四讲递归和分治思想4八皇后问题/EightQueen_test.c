/*
 * Function:该问题是十九世纪著名的数学家高斯1850年提出：
	 在8X8格的国际象棋上摆放八个皇后，使其不能互相攻击，即任意两个皇后都不能处于同一行、同一列或同一斜线上，问有多少种摆法。
 * Author:
 * Time:Tue 24 Mar 2020 08:20:57 AM CST
 *
 * */
#include <stdio.h>

int count = 0;
void EightQueen(int row, int line, int (*chess)[8]){
	//row表示起始行， line表示
	int chess2[8][8];
	
	for(int i = 0; i<8; i++){
		for(int j=0; j<8; j++){
			chess2[i][j] = chess[i][j];
		}
	}

	if(8 == row){
		printf("The %dth\n", count+1);
		for(int i = 0; i<8; i++){
			for(int j=0; j<8; j++){
				printf("%d ", *(*(chess+i)+j));
			}
			printf("\n");
		}
		printf("\n");
		count++;
	}else{
		for(int j = 0; j<line; j++){
			if()
		}
	}

}

int main(int argc, char *argv[]){
	int chess[8][8], i, j;
	 //Init
  for(int i = 0; i<8; i++){
		for(int j = 0; j<8; j++){
			chess[i][j]=0;
		}
	}

	 return 0;
}

