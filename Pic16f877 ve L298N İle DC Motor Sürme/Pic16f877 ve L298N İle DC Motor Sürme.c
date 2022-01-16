#include<16f877.h>

#use delay(clock = 4000000)

#use fast_io(a)
#use fast_io(b)

#define ileri pin_a0
#define geri pin_a1
#define dur pin_a2


void main(){
setup_psp(PSP_DISABLED);
setup_timer_1(T1_DISABLED);
setup_timer_2(T2_DISABLED,0,1);
setup_adc_ports(NO_ANALOGS);
setup_adc(ADC_OFF);
setup_ccp1(CCP_OFF);
setup_ccp2(CCP_OFF);

set_tris_a(0x07);
set_tris_b(0x00);

output_high(pin_b2);
output_low(pin_b3);

while(true){

if(input(ileri)){

output_high(pin_b0);
output_low(pin_b1);

}
if(input(geri)){

output_low(pin_b0);
output_high(pin_b1);

}

if(input(dur)){

output_low(pin_b0);
output_low(pin_b1);


}

}

}







