#pragma once

#include "quantum.h"
#include "ec_switch_matrix.h"

#define XXX KC_NO

enum ec_keycodes {
    EC_AP_I = QK_KB_0,  // Increases actuation point (more travel)
    EC_AP_D,            // Decreases actuation point
    EC_CLR              // Reset EC config
};

// clang-format off
#define LAYOUT( \
	k0A, k0B, k0C, k0D, k0E, k0F, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k3A, k3B, k3C, k3D, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k4A, k4B, k4C, k4E, k4F, k4G, k4I, k4J, k4K, k4L  \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L}, \
	{k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L}, \
	{k3A, k3B, k3C, k3D, XXX, k3F, k3G, k3H, k3I, k3J, k3K, k3L}, \
	{k4A, k4B, k4C, XXX, k4E, k4F, k4G, XXX, k4I, k4J, k4K, k4L}
}

// clang-format on
