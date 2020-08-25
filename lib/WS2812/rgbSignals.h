#define SIG_STATE_SUCCESS 0
#define SIG_STATE_FAILED 1
#define SIG_STATE_WAITTING 2
#define SIG_STATE_WARNING 3
#define SIG_STATE_LOADING 4
#define SIG_STATE_SLEEP 5

#include "hzTypes.h"
#include "FastLED.h"
#include "brightTable.h"

const CHSV COL_WARNING (8, 255, 128);
const CHSV COL_FAILED (255, 255, 128);
const CHSV COL_WAITING (18, 255, 128);
const CHSV COL_SUCCESS (105, 255, 128);

void sigInit(void);
UINT8 updateSignal(UINT8 signal);
UINT8 sigSuccess(UINT8 frame);
UINT8 sigFailed(UINT8 frame);
UINT8 sigWaitting(UINT8 frame);
UINT8 sigWarning(UINT8 frame);
UINT8 sigLoading(UINT8 frame);
UINT8 sigSleep(void);