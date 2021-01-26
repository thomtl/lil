#pragma once

#include "../intel.h"

void lil_cfl_dp_get_mode_info(LilGpu* gpu, LilModeInfo* out);

bool lil_cfl_dp_is_connected (struct LilGpu* gpu, struct LilConnector* connector);
LilConnectorInfo lil_cfl_dp_get_connector_info (struct LilGpu* gpu, struct LilConnector* connector);
void lil_cfl_dp_set_state (struct LilGpu* gpu, struct LilConnector* connector, uint32_t state);
uint32_t lil_cfl_dp_get_state (struct LilGpu* gpu, struct LilConnector* connector);

void lil_cfl_dp_init(struct LilGpu* gpu, struct LilConnector* connector);

void lil_cfl_dp_disable(struct LilGpu* gpu, struct LilConnector* connector);
void lil_cfl_dp_post_disable(struct LilGpu* gpu, struct LilConnector* connector);