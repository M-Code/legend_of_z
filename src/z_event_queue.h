#ifndef Z_EVENT_QUEUE_H
#define Z_EVENT_QUEUE_H

#include "z_screen_manager.h"

enum Z_EventType {
    Z_ScreenChange
};

typedef struct {
    Z_EventType type;
    Z_ScreenType toScreen;
} Z_ScreenChangeEvent;

typedef union {
    Z_EventType type; /* Z_EventType must be the first variable in all Z_Event structs */
    Z_ScreenChangeEvent screenChange;
} Z_Event;


void Z_PushEvent( Z_Event* event );
bool Z_PollEvent( Z_Event* event );


#endif
