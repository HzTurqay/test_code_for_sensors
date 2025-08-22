#ifndef SENSOR_READ_H
#define SENSOR_READ_H

#include "ADIS1647.h"


int _write(int file, char *ptr, int len);
void read_bar2(void);
void read_bar1(void);
void initialise_adis(ADIS16467_t *de);
void read_adis(void);


#endif
