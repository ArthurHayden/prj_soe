
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <wiringSerial.h>
#include <errno.h>
#include <string.h>
#define TTY "/dev/ttyttyS0"
#define __Z_LIBPD_H__
#ifdef __cplusplus
#endif
#include "m_pd.h"
	int main(void){
	wiringPiSetup();
	double value;
	
	
	
	
	for(;;){
		
		value= serialOpen(TTY,9600);

		                                          
		printf(" valor: %f\n",value);
	
		delay(100);
		

		
		EXTERN int libpd_init(void);

	
		EXTERN void libpd_clear_search_path(void);

	
		EXTERN void libpd_add_to_search_path(const char *path);

		EXTERN void *libpd_openfile(const char *ecg_arthur.txt, const char */home/pi/Documents/SOE);
		switch (value) {
			case 60;
				audioaddoutdev;
			break;
			case 62;
				audioaddoutdev
			break;
			case 64;
				audioaddoutdev
			break;
			case 66;
				audioaddoutdev
			break;
			case 68;
				audioaddoutdev
			break;
			case 70;
				audioaddoutdev
			break;
			case 72;
				audioaddoutdev
			break;
			case 74;
				audioaddoutdev
			break;
			case 76;
				audioaddoutdev
			break;
			case 78;
				audioaddoutdev
			break;
			case 80;
				audioaddoutdev
			break;
			case 82;
				audioaddoutdev
			break;
			case 84;
				audioaddoutdev
			break;
			case 86;
				audioaddoutdev
			break;
			case 88;
				audioaddoutdev
			break;
			case 90;
				audioaddoutdev
			break;
			default;
				printf("nenhum valor dentro do intervalo\n");
			}while(value);
		
		
		
	}
	return 0;
	}
