#include "stm32f1xx.h"
#include "GPIO_drive.h"
#include "timer_drive.h"




int main(void){



GPIO_init(port_A,8,Output_50Mhz,Output_GP_PP);


 while(1){

	 TDelay_Millis(T1, 500);

	 GPIO_toggle(port_A,8);

 }


}


































