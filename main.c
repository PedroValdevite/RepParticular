#include <xc.h>
//
// DIRETIVAS DE COMPILAÇÃO   
// Opcao 1
//
#pragma config PLLDIV = 5 , CPUDIV = OSC1_PLL2 , USBDIV = 2    
//
// Ou ainda deste modo...
//
#pragma config FOSC = INTOSCIO_EC
#pragma config FCMEN = OFF                                 
#pragma config BORV = 3
#pragma config WDT = OFF
#pragma config CPB = OFF
#pragma config CPD = OFF
//
#pragma config BOR=OFF, WDT=OFF, PWRT=ON
#pragma config CCP2MX=ON, PBADEN=OFF, MCLRE=ON
#pragma config DEBUG=OFF, STVREN=OFF,XINST=OFF, LVP=OFF, ICPRT=ON


void atraso()
{
    int i, j;
    for(i=0; i < 500; i++)
    {
        for(j=0; j < 2; j++)
        {
            
        }
    }
}



void main(void)
{
    TRISB = 0; //Todas as saidas em output
    
    while(1)
    {
        LATBbits.LATB1 = 1;
        atraso();
        LATBbits.LATB1 = 0;
        atraso();
    }
}