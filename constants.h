#pragma once

// ================================
// JOURS SCHEDULER
// ================================

constexpr uint8_t DAY_LUNDI    = (1 << 0);
constexpr uint8_t DAY_MARDI    = (1 << 1);
constexpr uint8_t DAY_MERCREDI = (1 << 2);
constexpr uint8_t DAY_JEUDI    = (1 << 3);
constexpr uint8_t DAY_VENDREDI = (1 << 4);
constexpr uint8_t DAY_SAMEDI   = (1 << 5);
constexpr uint8_t DAY_DIMANCHE = (1 << 6);

constexpr uint8_t DAY_ALL =
    DAY_LUNDI |
    DAY_MARDI |
    DAY_MERCREDI |
    DAY_JEUDI |
    DAY_VENDREDI |
    DAY_SAMEDI |
    DAY_DIMANCHE;

enum IrrigationState
{
    ST_SELECT_VANNE = 0,
    ST_OPEN_VANNE,
    ST_WATERING,
    ST_CLOSE_VANNE,
    ST_NEXT_EVENT,
    ST_IDLE,    
    ST_TIMEOUT,
    ST_MANUAL_OPEN,
    ST_MANUAL_CLOSE,
    ST_ERROR,
    ST_SLEEP       
};

