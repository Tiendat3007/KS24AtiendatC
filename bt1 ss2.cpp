#include<stdio.h>
	
	
	int main(){
		// kieu du lieu nguyen (int) luu cac so nguyen
		int year = 2020;
		// kieu du lieu so thuc (float) dung de luu tru cac so thuc
		float ChieuCao = 1.743;
		// kieu du lieu so thuc co khong gian luu tru va do chinh xac cao( double)dung de luu so thuc co gia tri lon
		double CanNang = 53.32;
		// kieu du lieu ky char) dung de luu cac ky tu
		char KyTu = 'D';
		// kieu du lieu so nguyen ngan(short int)
		short int IntNgan = 30000;
		//kieu du lieu so nguyen lon hon int 8byte(long int)
		long int MaxNumber = 1234567890;
		
		
		printf("year %d\n",year);
		printf("chieu cao %2f\n",ChieuCao);
		printf("can nang %2f\n",CanNang);
		printf("ky tu %c\n",KyTu);
		printf("kieu du kieu ngan %d\n",IntNgan);
		printf("kieu du kieu so thuc lon %ld\n",MaxNumber);
		
		
		
		return 0;
	}
