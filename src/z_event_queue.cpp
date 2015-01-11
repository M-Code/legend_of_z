#include "z_event_queue.h"
#include <queue>

static std::queue<Z_Event*> eventQueue;
void Z_PushEvent( Z_Event* event ) {
    eventQueue.push( event );
}

bool Z_PollEvent( Z_Event* event ) {
    if ( eventQueue.empty() ) {
        return false;
    } else {
        Z_Event* e = eventQueue.front();
        eventQueue.pop();
        *event = *e;
        delete e;
        return true;
    }
}


