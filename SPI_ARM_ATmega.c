#include "lpc214x.h"

void SPI_Master_init()
{
 PINSEL0 = PINSEL0 | 0x00001500; //Select P0.4, P0.5, PO.6 AND P0.7 as MISO, MOSI SCK, GPIO
 S0PCR = S0PCR | 0x00000020; // SPI Master mode, 8bit mode and SPI0 mode
 S0PCCR = 0x010; // Even number minimum vslue 8 pre scalar for SPI Clock
}																

SPI0_Slave_init()
{
 DDRB = DDRB | (1<<MISO) // MISO Pin as Output
 DDRB = DDRB & ~((1<<MOSI)| (1<<SS) | (1<< SCK)); // MOSI, SS And SCK as input
 SPCR = (1<<SPE);     /* Enable SPI */
}

