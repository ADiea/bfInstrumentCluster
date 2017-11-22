
#ifndef BF_EEPROM_H_
#define BF_EEPROM_H_

#define EEPROM_START 0x100

void LoadEEPROM(char *pBuffer, char num_bytes, unsigned char *EE_START_ADR);
void StoreEEPROM(char *pBuffer, char num_bytes, unsigned char *EE_START_ADR);

#endif
