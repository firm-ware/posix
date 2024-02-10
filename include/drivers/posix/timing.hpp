#pragma once

#include "firm/timing.hpp"
#include "Timer1.hpp"
#include <avr/io.h>

#ifndef FIRM_ATXMEGA_UPTIME_TIMER
#define FIRM_ATXMEGA_UPTIME_TIMER TCC1
#endif

namespace ATXMega {

extern uint64_t uptime;
extern Timer1 uptimeTimer;

void configureUptime();
void incrementUptime();

} // namespace ATXMega
