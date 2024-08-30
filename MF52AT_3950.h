#ifndef MF52AT_3950_H
#define MF52AT_3950_H

#include <stdint.h>

#define MF52AT_3950_TMIN -55
#define MF52AT_3950_TMAX 125
#define MF52AT_3950_TSTEP 1

#define MF52AT_3950_TCOUNT ((MF52AT_3950_TMAX - MF52AT_3950_TMIN) / MF52AT_3950_TSTEP + 1)

extern uint32_t mf52at_3950_100k_r[MF52AT_3950_TCOUNT];

int MF52AT_3950_100k_GetTemp(int r);
int MF52AT_3950_GetTemp(int r, int r25_kohm);

const char *MF52AT_3950_UnitTest(void);

#endif // MF52AT_3950_H
