#pragma once

#include <stdint.h>

struct IrrigationEvent {
  uint8_t valve;     // 1..4
  uint8_t hour;      // 0..23
  uint8_t minute;    // 0..59
  uint16_t duration; // minutes
  uint8_t mask;      // jours (bit0=Mon ... bit6=Sun)
};

