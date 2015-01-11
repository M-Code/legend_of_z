#ifndef Z_EVENT_QUEUE_H
#define Z_EVENT_QUEUE_H

typedef struct {
   bool a; 
} Z_Event;

//static Z_Event eq;

void Z_PushEvent( Z_Event* event );
bool Z_PollEvent( Z_Event* event );


#endif
