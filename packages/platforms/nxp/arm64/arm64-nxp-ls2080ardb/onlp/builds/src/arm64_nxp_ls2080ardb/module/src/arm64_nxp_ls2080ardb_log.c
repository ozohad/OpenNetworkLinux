/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * 
 *        Copyright 2016 NXP Semiconductor, Inc.
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 * 
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/

#include <arm64_nxp_ls2080ardb/arm64_nxp_ls2080ardb_config.h>

#include "arm64_nxp_ls2080ardb_log.h"
/*
 * arm64_nxp_ls2080ardb log struct.
 */
AIM_LOG_STRUCT_DEFINE(
                      ONLPSIM_CONFIG_LOG_OPTIONS_DEFAULT,
                      ONLPSIM_CONFIG_LOG_BITS_DEFAULT,
                      NULL, /* Custom log map */
                      ONLPSIM_CONFIG_LOG_CUSTOM_BITS_DEFAULT
                     );

