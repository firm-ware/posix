#include "firm/timing.hpp"
#include <time.h>
#include <unistd.h>

namespace firm {
namespace timing {

void delay_us(const int delay) {
    usleep(delay);
}

void delay_ms(const int delay) {
    usleep(delay * 1000);
}

void busy_wait_us(const int delay) {
    usleep(delay);
}

void busy_wait_ms(const int delay) {
    usleep(delay * 1000);
}

uint64_t uptime_ms() {
    clock_t uptime = clock();
    return (uptime * 1000) / CLOCKS_PER_SEC;
}

} // namespace timing
} // namespace firm
