// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, SpesCoin dev's and INX developpers.
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// INX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with INX.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

namespace CryptoNote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x6e79;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V1          = 17;

const uint64_t MONEY_SUPPLY                                  = UINT64_C(14400000000000000);
const uint64_t GENESIS_BLOCK_REWARD                          = UINT64_C(7200000000000000);
const uint64_t TAIL_EMISSION_REWARD                          = 144000000;
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                    = 250000;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 8;

const uint64_t MINIMUM_FEE                                   = UINT64_C(100000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(100000);
const uint64_t DEFAULT_FEE                                   = MINIMUM_FEE;

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const unsigned EMISSION_SPEED_FACTOR                         = 24;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t MIN_MIXIN                                       = 0;
const uint8_t MANDATORY_MIXIN_BLOCK_VERSION                  = 0;
const uint32_t MIXIN_START_HEIGHT                            = 0;
const uint32_t MANDATORY_TRANSACTION                         = 0;
const uint32_t KILL_HEIGHT                                   = 0;

const size_t CRYPTONOTE_COIN_VERSION                         = 0;
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX                   = 30;
const uint8_t ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION       = 3;
const uint32_t ZAWY_DIFFICULTY_LAST_BLOCK                    = 27222;
const uint64_t ZAWY_DIFFICULTY_MIN                           = 0;
const uint32_t ZAWY_LWMA_DIFFICULTY_BLOCK_INDEX              = 27223;
const uint32_t ZAWY_LWMA_DIFFICULTY_LAST_BLOCK               = 0;
const uint64_t ZAWY_LWMA_DIFFICULTY_MIN                      = 0;
const size_t ZAWY_LWMA_DIFFICULTY_N                          = 60;
const uint32_t ZAWY_LWMA2_DIFFICULTY_BLOCK_INDEX             = 0;
const uint32_t ZAWY_LWMA2_DIFFICULTY_LAST_BLOCK              = 0;
const uint64_t ZAWY_LWMA2_DIFFICULTY_MIN                     = 0;
const size_t ZAWY_LWMA2_DIFFICULTY_N                         = 0;
const uint32_t BUGGED_ZAWY_DIFFICULTY_BLOCK_INDEX            = 0;
const uint32_t POW_CRYPTONIGHT_V7_BLOCK_INDEX                = 0; // = 215700;
const uint32_t POW_CRYPTONIGHT_V7_LAST_BLOCK                 = 0; // = UINT32_MAX;

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; // size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;

const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
const size_t   DIFFICULTY_WINDOW_V1                          = DIFFICULTY_WINDOW;
const size_t   DIFFICULTY_WINDOW_V2                          = DIFFICULTY_WINDOW;
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = DIFFICULTY_CUT;
const size_t   DIFFICULTY_CUT_V2                             = DIFFICULTY_CUT;
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = DIFFICULTY_LAG;
const size_t   DIFFICULTY_LAG_V2                             = DIFFICULTY_LAG;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     // seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; // seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                             = 1;
const uint32_t UPGRADE_HEIGHT_V3                             = 30;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90; // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "INX";

const uint8_t  TRANSACTION_VERSION_1                         = 1;
const uint8_t  TRANSACTION_VERSION_2                         = 2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   = TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         = 1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         = 2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         = 3;
const uint8_t  BLOCK_MINOR_VERSION_0                         = 0;
const uint8_t  BLOCK_MINOR_VERSION_1                         = 1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        = 10000; // by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            = 144;   // by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         = 1000;

const int      P2P_DEFAULT_PORT                              = 44433;
const int      RPC_DEFAULT_PORT                              = 44455;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                = 1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 = 5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 128 * 1024 * 1024; //128 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;     // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds

const uint32_t  P2P_FAILED_ADDR_FORGET_SECONDS               = (60*60);       // 1 hour
const uint32_t  P2P_IP_BLOCKTIME                             = (60*60*24);    // 24 hour
const uint32_t  P2P_IP_FAILS_BEFORE_BLOCK                    = 10;
const uint32_t  P2P_IDLE_CONNECTION_KILL_INTERVAL            = (5*60);        // 5 minutes

const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = {
	"178.62.253.139:44433",
	"178.62.239.236:44433"
	};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{44, "1de292d0d5ae0da74c5a7b63651364e18ca528c7d9bc08eb44d65d1ce059cce4"},
{444, "04cd488093978fad0eef921568101ce7f02f5bc35a11b9c57490be05d91633f0"},
{1000, "390fc0b5bbea200c7697b7d982a8e083f1e9626c727c87381d326abbba699c6f"},
{5000, "6c7b8fcebe77da6057071b18c2ed0b2fb31b9894d31f2b89e87607171e34a428"},
{10000, "664662b7f2f1fcd23993a6d4699ad4f2d24e40342c1aeb42d2d14e82dbc75bd7"},
{15000, "d7c43ac01140ee3fa767a49e0e44b19e96f5478f008caee8cd9bf52043449329"},
{20000, "917458abe8507fff89ad9cdc1186b76ca0f6b998c4492d51de0e10ef3ee5f988"},
{25000, "45514426fdc55af44ce6ab74645d539a39cea2d166cddb0f3548842ed8015429"}
};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
