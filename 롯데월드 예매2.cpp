#include <stdio.h>
int main(){
	int choose,ticket,FrontNumber,BackNumber,orderCount,discount,price,sum,final;
	const int  ALL_DAY_ADULT_PRICE = 62000, ALL_DAY_TEEN_PRICE = 54000, ALL_DAY_CHILD_PRICE = 47000;// 종합 1day가격
	const int  ALL_AFTER_ADULT_PRICE = 50000, ALL_AFTER_TEEN_PRICE = 43000,ALL_AFTER_CHILD_PRICE = 36000;//종합 4after가격 
	const int  PARK_DAY_ADULT_PRICE = 59000,PARK_DAY_TEEN_PRICE = 52000, PARK_DAY_CHILD_PRICE = 46000;//파크 1day가격 
	const int  PARK_AFTER_ADULT_PRICE = 47000,  PARK_AFTER_TEEN_PRICE = 41000, PARK_AFTER_CHILD_PRICE = 35000;//파크 4after가격
	const float ALL_DAY_BABY_PRICE =15000, ALL_AFTER_BABY_PRICE = 15000, PARK_DAY_BABY_PRICE = 15000, PARK_AFTER_BABY_PRICE = 15000; // baby가격 
	int numberYear,birth,age,oldage,newage; 

	while (1){
	printf("선택해주세요.\n1. 종합이용권(롯데월드+민속박물관)  \n2. 파크이용권\n");
	scanf("%d",&choose);
	
	if (choose ==1 || choose ==2){
		break;
	}else{
		printf("잘못 입력하셨습니다. 다시 입력해주세요\n");
			continue;
	}
}
	while (1){
	printf("권종을 선택하세요.\n1. 1DAY \n2. AFTER4(오후 4시 이후 입장)\n");
	scanf("%d",&ticket);
	
	if (ticket ==1 || ticket ==2){
		break;
	}else{
		printf("잘못 입력하셨습니다. 다시 입력해주세요\n"); 
			continue;
	}
}
	while(1){
	printf("주민번호 앞자리 6자글자와 뒷자리 1자리를 입력하세요. ex) 990909-1\n");
	scanf("%d - %d", &FrontNumber, &BackNumber);
	
	if (FrontNumber>000001 && FrontNumber<999999 && (BackNumber == 1 || BackNumber == 2 || BackNumber == 3 || BackNumber == 4)){
		break;
	} else(0); {
		printf("잘못 입력하셨습니다. 다시 입력해주세요\n");
			continue;
	}
}
	while(1){
	printf("몇개를 주문하시겠습니가?(최대 10개)\n");
	scanf("%d",&orderCount);
	if (orderCount>=1 && orderCount <11){
		break;
	}else{
		printf("잘못 입력하셨습니다. 다시 입력해주세요\n");
			continue;
	}
}	
	while(1){
	printf("우대사항을 선택하세요.\n1. 없음(나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다둥이 행복\n5. 임산부\n");
	scanf("%d",&discount);
	if(discount==1 ||discount==2 ||discount==3 ||discount==4 ||discount==5) {
		break;
	}else{
		printf("잘못 입력하셨습니다. 다시 입력해주세요\n");
			continue;
	}
	}
		numberYear =FrontNumber/10000; //생년 출력
		birth= FrontNumber-(numberYear * 10000); // 생일 출력
		
		 if (BackNumber == 1 || BackNumber == 2){ // 1900년생 || 2000년생 출력 
		 	oldage = numberYear + 1900;
		 } else if (BackNumber == 3 || BackNumber == 4){  // 아무 의미 없음 
		 	newage = numberYear + 2000;
		 }



		if( birth > 415 && oldage < 2000){  //만나이
			age= 2022 - oldage;
			}
			else if (birth <= 415 && oldage < 2000){
			age = 2022 - oldage - 1;
			}
			
		 if (birth > 415 && newage >= 2000){
			age = 2022 - newage;
			}
			else if (birth <= 415 && newage >= 2000){
			age = 2022 - newage - 1;
			}
		
		switch (choose) {
			case 1:
				switch (ticket) {
					case 1:
						if (age >= 19 && age < 65) {
							price = ALL_DAY_ADULT_PRICE;
						} else if (age >=13 && age <19) {
							price = ALL_DAY_TEEN_PRICE;
						} else if (age >= 3 && age < 13) {
							price = ALL_DAY_CHILD_PRICE;
						} else if (age >= 0 && age < 1) {
							price = ALL_DAY_BABY_PRICE;
						}
						break;
				
					case 2:
						if (age >= 19 && age < 65) {
							price = ALL_AFTER_ADULT_PRICE;
						} else if (age >=13 && age <19) {
							price = ALL_AFTER_TEEN_PRICE;
						} else if (age >= 3 && age < 13) {
							price = ALL_AFTER_CHILD_PRICE;
						} else if (age >= 0 && age < 1) {
							price = ALL_AFTER_BABY_PRICE;
						} break;
		   			}
			case 2:
				switch (ticket) {
					case 1:
						if (age >= 19 && age < 65) {
							price = PARK_DAY_ADULT_PRICE;
						} else if (age >=13 && age <19) {
							price = PARK_DAY_TEEN_PRICE;
						} else if (age >= 3 && age < 13) {
							price = PARK_DAY_CHILD_PRICE;
						} else if (age >= 0 && age < 1) {
							price = PARK_DAY_BABY_PRICE;
						}
						break;
					case 2:
						if (age >= 19 && age < 65) {
							price = PARK_AFTER_ADULT_PRICE;
						} else if (age >=13 && age <19) {
							price = PARK_AFTER_TEEN_PRICE;
						} else if (age >= 3 && age < 13) {
							price = PARK_AFTER_CHILD_PRICE;
						} else if (age >= 0 && age < 1) {
							price = PARK_AFTER_BABY_PRICE;
						} break;
				}		
						
		}
	switch (discount) {
		case 1:
			final = price;
			break;
		case 2:
			final = price *  0.5;
			break;
		case 3:
			final = price * 0.5;
			break;
		case 4:
			final = price * 0.7;
			break;
		case 5:
			final = price * 0.5;
			break;
	}	
	sum = final * orderCount;
	printf("가격은 %d원 입니다.\n감사합니다.", sum);
		
	
		return 0;
	}



