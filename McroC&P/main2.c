#include <xc.h>  
#define Pulso LATBbits.LATB1

void Timer1_delay();

void main(void){
    OSCCON = 0x72;
    TRISB = 0;
    Pulso = 0xff;
    
    while(1)
    {
        Pulso =~ Pulso;
        Timer1_delay(); 
    }
    
    return;
}

void Timer1_delay()
{
    T1CON = 0xB0;
    TMR1 = 0x0;
    T1CONbits.TMR1ON = 1;
    while(PIR1bits.TMR1IF == 0);
    TMR1ON = 0;
    TMR1IF = 0;
}