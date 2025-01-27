/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: controller_commands.proto */

#ifndef PROTOBUF_C_controller_5fcommands_2eproto__INCLUDED
#define PROTOBUF_C_controller_5fcommands_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "mac_primitives.pb-c.h"

typedef struct _Protocol__FlexDlData Protocol__FlexDlData;
typedef struct _Protocol__FlexUlData Protocol__FlexUlData;
typedef struct _Protocol__FlexDlRar Protocol__FlexDlRar;
typedef struct _Protocol__FlexDlBroadcast Protocol__FlexDlBroadcast;
typedef struct _Protocol__FlexPdcchOfdmSymCount Protocol__FlexPdcchOfdmSymCount;


/* --- enums --- */

typedef enum _Protocol__FlexBroadcastType {
  PROTOCOL__FLEX_BROADCAST_TYPE__FLBT_BCCH = 0,
  PROTOCOL__FLEX_BROADCAST_TYPE__FLBT_PCCH = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__FLEX_BROADCAST_TYPE)
} Protocol__FlexBroadcastType;

/* --- messages --- */

struct  _Protocol__FlexDlData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  Protocol__FlexDlDci *dl_dci;
  /*
   * list of 2 MAC CEs, one for each TB
   */
  size_t n_ce_bitmap;
  uint32_t *ce_bitmap;
  /*
   * list of parameters for the creation of RLC PDUs. One for each lcid
   */
  size_t n_rlc_pdu;
  Protocol__FlexRlcPdu **rlc_pdu;
  protobuf_c_boolean has_serv_cell_index;
  uint32_t serv_cell_index;
  /*
   *Hex content of MAC CE for Activation/Deactivation in CA
   */
  protobuf_c_boolean has_act_deact_ce;
  uint32_t act_deact_ce;
};
#define PROTOCOL__FLEX_DL_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_dl_data__descriptor) \
    , 0,0, NULL, 0,NULL, 0,NULL, 0,0, 0,0 }


struct  _Protocol__FlexUlData
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  Protocol__FlexUlDci *ul_dci;
};
#define PROTOCOL__FLEX_UL_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_ul_data__descriptor) \
    , 0,0, NULL }


/*
 * Body of the RAR scheduler configuration
 */
struct  _Protocol__FlexDlRar
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  /*
   * The 20-bit UL grant. TS 36.213, sec 6.2
   */
  protobuf_c_boolean has_grant;
  uint32_t grant;
  Protocol__FlexDlDci *rar_dci;
  /*
   * The carrier index for the RAR
   */
  protobuf_c_boolean has_carrier_index;
  uint32_t carrier_index;
};
#define PROTOCOL__FLEX_DL_RAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_dl_rar__descriptor) \
    , 0,0, 0,0, NULL, 0,0 }


struct  _Protocol__FlexDlBroadcast
{
  ProtobufCMessage base;
  /*
   * The FLBT_* values
   */
  protobuf_c_boolean has_type;
  uint32_t type;
  /*
   * Index of the broadcast message:
   */
  protobuf_c_boolean has_index;
  uint32_t index;
  /*
   * 0 - SIB1,
   * 1..31 - Six,
   * 32..63 - PCCH (PCCH index obtained from  flex_paging_info)
   */
  Protocol__FlexDlDci *broad_dci;
  /*
   * Index of the carrier for broadcast
   */
  protobuf_c_boolean has_carrier_index;
  uint32_t carrier_index;
};
#define PROTOCOL__FLEX_DL_BROADCAST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_dl_broadcast__descriptor) \
    , 0,0, 0,0, NULL, 0,0 }


struct  _Protocol__FlexPdcchOfdmSymCount
{
  ProtobufCMessage base;
  protobuf_c_boolean has_carrier_index;
  uint32_t carrier_index;
  protobuf_c_boolean has_num_pdcch_ofdm_symbols;
  uint32_t num_pdcch_ofdm_symbols;
};
#define PROTOCOL__FLEX_PDCCH_OFDM_SYM_COUNT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_pdcch_ofdm_sym_count__descriptor) \
    , 0,0, 0,0 }


/* Protocol__FlexDlData methods */
void   protocol__flex_dl_data__init
                     (Protocol__FlexDlData         *message);
size_t protocol__flex_dl_data__get_packed_size
                     (const Protocol__FlexDlData   *message);
size_t protocol__flex_dl_data__pack
                     (const Protocol__FlexDlData   *message,
                      uint8_t             *out);
size_t protocol__flex_dl_data__pack_to_buffer
                     (const Protocol__FlexDlData   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexDlData *
       protocol__flex_dl_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_dl_data__free_unpacked
                     (Protocol__FlexDlData *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexUlData methods */
void   protocol__flex_ul_data__init
                     (Protocol__FlexUlData         *message);
size_t protocol__flex_ul_data__get_packed_size
                     (const Protocol__FlexUlData   *message);
size_t protocol__flex_ul_data__pack
                     (const Protocol__FlexUlData   *message,
                      uint8_t             *out);
size_t protocol__flex_ul_data__pack_to_buffer
                     (const Protocol__FlexUlData   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexUlData *
       protocol__flex_ul_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_ul_data__free_unpacked
                     (Protocol__FlexUlData *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexDlRar methods */
void   protocol__flex_dl_rar__init
                     (Protocol__FlexDlRar         *message);
size_t protocol__flex_dl_rar__get_packed_size
                     (const Protocol__FlexDlRar   *message);
size_t protocol__flex_dl_rar__pack
                     (const Protocol__FlexDlRar   *message,
                      uint8_t             *out);
size_t protocol__flex_dl_rar__pack_to_buffer
                     (const Protocol__FlexDlRar   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexDlRar *
       protocol__flex_dl_rar__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_dl_rar__free_unpacked
                     (Protocol__FlexDlRar *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexDlBroadcast methods */
void   protocol__flex_dl_broadcast__init
                     (Protocol__FlexDlBroadcast         *message);
size_t protocol__flex_dl_broadcast__get_packed_size
                     (const Protocol__FlexDlBroadcast   *message);
size_t protocol__flex_dl_broadcast__pack
                     (const Protocol__FlexDlBroadcast   *message,
                      uint8_t             *out);
size_t protocol__flex_dl_broadcast__pack_to_buffer
                     (const Protocol__FlexDlBroadcast   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexDlBroadcast *
       protocol__flex_dl_broadcast__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_dl_broadcast__free_unpacked
                     (Protocol__FlexDlBroadcast *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexPdcchOfdmSymCount methods */
void   protocol__flex_pdcch_ofdm_sym_count__init
                     (Protocol__FlexPdcchOfdmSymCount         *message);
size_t protocol__flex_pdcch_ofdm_sym_count__get_packed_size
                     (const Protocol__FlexPdcchOfdmSymCount   *message);
size_t protocol__flex_pdcch_ofdm_sym_count__pack
                     (const Protocol__FlexPdcchOfdmSymCount   *message,
                      uint8_t             *out);
size_t protocol__flex_pdcch_ofdm_sym_count__pack_to_buffer
                     (const Protocol__FlexPdcchOfdmSymCount   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexPdcchOfdmSymCount *
       protocol__flex_pdcch_ofdm_sym_count__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_pdcch_ofdm_sym_count__free_unpacked
                     (Protocol__FlexPdcchOfdmSymCount *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__FlexDlData_Closure)
                 (const Protocol__FlexDlData *message,
                  void *closure_data);
typedef void (*Protocol__FlexUlData_Closure)
                 (const Protocol__FlexUlData *message,
                  void *closure_data);
typedef void (*Protocol__FlexDlRar_Closure)
                 (const Protocol__FlexDlRar *message,
                  void *closure_data);
typedef void (*Protocol__FlexDlBroadcast_Closure)
                 (const Protocol__FlexDlBroadcast *message,
                  void *closure_data);
typedef void (*Protocol__FlexPdcchOfdmSymCount_Closure)
                 (const Protocol__FlexPdcchOfdmSymCount *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__flex_broadcast_type__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_dl_data__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_ul_data__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_dl_rar__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_dl_broadcast__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_pdcch_ofdm_sym_count__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_controller_5fcommands_2eproto__INCLUDED */
