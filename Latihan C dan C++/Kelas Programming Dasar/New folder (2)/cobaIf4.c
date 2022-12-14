#include <stdio.h>

int isGenap(int bil){
	//fungsi untuk memeriksa variabel bil, jika bil genap return 1, 
	//jika tidak return 0
	
	if (bil%2==0){
		return 1; //true
	} else {
		return 0; //false
	}
}

int main(){
	int a, b;
	
	printf("Masukkan 2 angka dipisahkan spasi : ");
	scanf("%d %d", &a, &b);
	
	printf("isGenap(a) = %d\n", isGenap(a));
	printf("isGenap(b) = %d\n", isGenap(b));
	return 0;
}
