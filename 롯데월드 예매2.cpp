#include <stdio.h>
int main(){
	int choose,ticket,FrontNumber,BackNumber,orderCount,discount,price,sum,final;
	const int  ALL_DAY_ADULT_PRICE = 62000, ALL_DAY_TEEN_PRICE = 54000, ALL_DAY_CHILD_PRICE = 47000;// ���� 1day����
	const int  ALL_AFTER_ADULT_PRICE = 50000, ALL_AFTER_TEEN_PRICE = 43000,ALL_AFTER_CHILD_PRICE = 36000;//���� 4after���� 
	const int  PARK_DAY_ADULT_PRICE = 59000,PARK_DAY_TEEN_PRICE = 52000, PARK_DAY_CHILD_PRICE = 46000;//��ũ 1day���� 
	const int  PARK_AFTER_ADULT_PRICE = 47000,  PARK_AFTER_TEEN_PRICE = 41000, PARK_AFTER_CHILD_PRICE = 35000;//��ũ 4after����
	const float ALL_DAY_BABY_PRICE =15000, ALL_AFTER_BABY_PRICE = 15000, PARK_DAY_BABY_PRICE = 15000, PARK_AFTER_BABY_PRICE = 15000; // baby���� 
	int numberYear,birth,age,oldage,newage; 

	while (1){
	printf("�������ּ���.\n1. �����̿��(�Ե�����+�μӹڹ���)  \n2. ��ũ�̿��\n");
	scanf("%d",&choose);
	
	if (choose ==1 || choose ==2){
		break;
	}else{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");
			continue;
	}
}
	while (1){
	printf("������ �����ϼ���.\n1. 1DAY \n2. AFTER4(���� 4�� ���� ����)\n");
	scanf("%d",&ticket);
	
	if (ticket ==1 || ticket ==2){
		break;
	}else{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n"); 
			continue;
	}
}
	while(1){
	printf("�ֹι�ȣ ���ڸ� 6�ڱ��ڿ� ���ڸ� 1�ڸ��� �Է��ϼ���. ex) 990909-1\n");
	scanf("%d - %d", &FrontNumber, &BackNumber);
	
	if (FrontNumber>000001 && FrontNumber<999999 && (BackNumber == 1 || BackNumber == 2 || BackNumber == 3 || BackNumber == 4)){
		break;
	} else(0); {
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");
			continue;
	}
}
	while(1){
	printf("��� �ֹ��Ͻðڽ��ϰ�?(�ִ� 10��)\n");
	scanf("%d",&orderCount);
	if (orderCount>=1 && orderCount <11){
		break;
	}else{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");
			continue;
	}
}	
	while(1){
	printf("�������� �����ϼ���.\n1. ����(���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. �ٵ��� �ູ\n5. �ӻ��\n");
	scanf("%d",&discount);
	if(discount==1 ||discount==2 ||discount==3 ||discount==4 ||discount==5) {
		break;
	}else{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���\n");
			continue;
	}
	}
		numberYear =FrontNumber/10000; //���� ���
		birth= FrontNumber-(numberYear * 10000); // ���� ���
		
		 if (BackNumber == 1 || BackNumber == 2){ // 1900��� || 2000��� ��� 
		 	oldage = numberYear + 1900;
		 } else if (BackNumber == 3 || BackNumber == 4){  // �ƹ� �ǹ� ���� 
		 	newage = numberYear + 2000;
		 }



		if( birth > 415 && oldage < 2000){  //������
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
	printf("������ %d�� �Դϴ�.\n�����մϴ�.", sum);
		
	
		return 0;
	}



