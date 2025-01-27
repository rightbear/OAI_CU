/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: mac_primitives.proto */

#ifndef PROTOBUF_C_mac_5fprimitives_2eproto__INCLUDED
#define PROTOBUF_C_mac_5fprimitives_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Protocol__FlexDlDci Protocol__FlexDlDci;
typedef struct _Protocol__FlexUlDci Protocol__FlexUlDci;
typedef struct _Protocol__FlexRlcPdu Protocol__FlexRlcPdu;
typedef struct _Protocol__FlexRlcPduTb Protocol__FlexRlcPduTb;


/* --- enums --- */

typedef enum _Protocol__FlexDciFormat {
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1 = 0,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1A = 1,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1B = 2,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1C = 3,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_1D = 4,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2 = 5,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2A = 6,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_2B = 7,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_3 = 8,
  PROTOCOL__FLEX_DCI_FORMAT__FLDCIF_3A = 9
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__FLEX_DCI_FORMAT)
} Protocol__FlexDciFormat;
typedef enum _Protocol__FlexVrbFormat {
  PROTOCOL__FLEX_VRB_FORMAT__FLVRBF_LOCALIZED = 0,
  PROTOCOL__FLEX_VRB_FORMAT__FLVRBF_DISTRIBUTED = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__FLEX_VRB_FORMAT)
} Protocol__FlexVrbFormat;
typedef enum _Protocol__FlexNgapVal {
  PROTOCOL__FLEX_NGAP_VAL__FLNGV_1 = 0,
  PROTOCOL__FLEX_NGAP_VAL__FLNGV_2 = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__FLEX_NGAP_VAL)
} Protocol__FlexNgapVal;

/* --- messages --- */

struct  _Protocol__FlexDlDci
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  /*
   * Type of resource allocation
   */
  protobuf_c_boolean has_res_alloc;
  uint32_t res_alloc;
  /*
   * Bitmap for RB allocation
   */
  protobuf_c_boolean has_rb_bitmap;
  uint32_t rb_bitmap;
  /*
   * See TS 36.214, section 7.1.6.2
   */
  protobuf_c_boolean has_rb_shift;
  uint32_t rb_shift;
  /*
   * The size of each TBS
   */
  size_t n_tbs_size;
  uint32_t *tbs_size;
  /*
   * The MCS of each TB
   */
  size_t n_mcs;
  uint32_t *mcs;
  /*
   * New data indicator of each TB
   */
  size_t n_ndi;
  uint32_t *ndi;
  /*
   * Redundancy version of each TB
   */
  size_t n_rv;
  uint32_t *rv;
  /*
   * CCE index used to send the DCI
   */
  protobuf_c_boolean has_cce_index;
  uint32_t cce_index;
  protobuf_c_boolean has_aggr_level;
  uint32_t aggr_level;
  /*
   * 2 antenna ports:0..6,
   */
  protobuf_c_boolean has_precoding_info;
  uint32_t precoding_info;
  /*
   * 4 antenna ports:0..50
   */
  /*
   * DCI format. A FLDCIF_* value
   */
  protobuf_c_boolean has_format;
  uint32_t format;
  /*
   * TS 36.213, sec 5.1.1.1
   */
  protobuf_c_boolean has_tpc;
  uint32_t tpc;
  /*
   * HARQ process ID
   */
  protobuf_c_boolean has_harq_process;
  uint32_t harq_process;
  /*
   * TDD only
   */
  protobuf_c_boolean has_dai;
  uint32_t dai;
  /*
   * One of the FLVRBF_* values
   */
  protobuf_c_boolean has_vrb_format;
  uint32_t vrb_format;
  /*
   * Boolean. TB to codeword swap flag
   */
  protobuf_c_boolean has_tb_swap;
  uint32_t tb_swap;
  /*
   * Flag value
   */
  protobuf_c_boolean has_sps_release;
  uint32_t sps_release;
  protobuf_c_boolean has_pdcch_order;
  uint32_t pdcch_order;
  /*
   * Only valid if pdcch_order = 1
   */
  protobuf_c_boolean has_preamble_index;
  uint32_t preamble_index;
  /*
   * Only valid if pdcch_order = 1
   */
  protobuf_c_boolean has_prach_mask_index;
  uint32_t prach_mask_index;
  /*
   * One of the FLNGV_* values
   */
  protobuf_c_boolean has_n_gap;
  uint32_t n_gap;
  /*
   * The TBS index for Format 1A
   */
  protobuf_c_boolean has_tbs_idx;
  uint32_t tbs_idx;
  /*
   * For format 1D
   */
  protobuf_c_boolean has_dl_power_offset;
  uint32_t dl_power_offset;
  /*
   * DL PDCCH power boosting in dB
   */
  protobuf_c_boolean has_pdcch_power_offset;
  uint32_t pdcch_power_offset;
  /*
   * Boolean. Indication of CIF field
   */
  protobuf_c_boolean has_cif_present;
  uint32_t cif_present;
  /*
   * CIF for cross-carrier scheduling
   */
  protobuf_c_boolean has_cif;
  uint32_t cif;
};
#define PROTOCOL__FLEX_DL_DCI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_dl_dci__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _Protocol__FlexUlDci
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rnti;
  uint32_t rnti;
  /*
   * The start RB allocated to the UE 
   */
  protobuf_c_boolean has_rb_start;
  uint32_t rb_start;
  /*
   * The number of RBs allocated to the UE
   */
  protobuf_c_boolean has_rb_len;
  uint32_t rb_len;
  /*
   * Modulation and coding scheme
   */
  protobuf_c_boolean has_mcs;
  uint32_t mcs;
  /*
   *  match DCI format 0/4 PDU 
   */
  protobuf_c_boolean has_cyclic_shift2;
  uint32_t cyclic_shift2;
  /*
   * 0 no hopping, 1 hoppping
   */
  protobuf_c_boolean has_freq_hop_flag;
  uint32_t freq_hop_flag;
  /*
   * Frequency hopping bits (0..4) 
   */
  protobuf_c_boolean has_freq_hop_map;
  uint32_t freq_hop_map;
  /*
   * New data indicator
   */
  protobuf_c_boolean has_ndi;
  uint32_t ndi;
  /*
   * Redundancy version
   */
  protobuf_c_boolean has_rv;
  uint32_t rv;
  /*
   *  The harq process id
   */
  protobuf_c_boolean has_harq_pid;
  uint32_t harq_pid;
  /*
   *  A FLULM_* value
   */
  protobuf_c_boolean has_ultx_mode;
  uint32_t ultx_mode;
  /*
   * The size of each TBS
   */
  protobuf_c_boolean has_tbs_size;
  uint32_t tbs_size;
  /*
   * Overlap indication with srs
   */
  protobuf_c_boolean has_n_srs;
  uint32_t n_srs;
  /*
   * Type of resource allocation
   */
  protobuf_c_boolean has_res_alloc;
  uint32_t res_alloc;
  /*
   * Size of the ULSCH PDU in bytes for UL Grant.
   */
  protobuf_c_boolean has_size;
  uint32_t size;
  /*
   * TDD only
   */
  protobuf_c_boolean has_dai;
  uint32_t dai;
};
#define PROTOCOL__FLEX_UL_DCI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_ul_dci__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _Protocol__FlexRlcPdu
{
  ProtobufCMessage base;
  /*
   * list of parameters for the creation of RLC PDUs. One for each TB
   */
  size_t n_rlc_pdu_tb;
  Protocol__FlexRlcPduTb **rlc_pdu_tb;
};
#define PROTOCOL__FLEX_RLC_PDU__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_rlc_pdu__descriptor) \
    , 0,NULL }


struct  _Protocol__FlexRlcPduTb
{
  ProtobufCMessage base;
  protobuf_c_boolean has_logical_channel_id;
  uint32_t logical_channel_id;
  /*
   * Maximum RLC PDU to be created in bytes
   */
  protobuf_c_boolean has_size;
  uint32_t size;
};
#define PROTOCOL__FLEX_RLC_PDU_TB__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__flex_rlc_pdu_tb__descriptor) \
    , 0,0, 0,0 }


/* Protocol__FlexDlDci methods */
void   protocol__flex_dl_dci__init
                     (Protocol__FlexDlDci         *message);
size_t protocol__flex_dl_dci__get_packed_size
                     (const Protocol__FlexDlDci   *message);
size_t protocol__flex_dl_dci__pack
                     (const Protocol__FlexDlDci   *message,
                      uint8_t             *out);
size_t protocol__flex_dl_dci__pack_to_buffer
                     (const Protocol__FlexDlDci   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexDlDci *
       protocol__flex_dl_dci__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_dl_dci__free_unpacked
                     (Protocol__FlexDlDci *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexUlDci methods */
void   protocol__flex_ul_dci__init
                     (Protocol__FlexUlDci         *message);
size_t protocol__flex_ul_dci__get_packed_size
                     (const Protocol__FlexUlDci   *message);
size_t protocol__flex_ul_dci__pack
                     (const Protocol__FlexUlDci   *message,
                      uint8_t             *out);
size_t protocol__flex_ul_dci__pack_to_buffer
                     (const Protocol__FlexUlDci   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexUlDci *
       protocol__flex_ul_dci__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_ul_dci__free_unpacked
                     (Protocol__FlexUlDci *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexRlcPdu methods */
void   protocol__flex_rlc_pdu__init
                     (Protocol__FlexRlcPdu         *message);
size_t protocol__flex_rlc_pdu__get_packed_size
                     (const Protocol__FlexRlcPdu   *message);
size_t protocol__flex_rlc_pdu__pack
                     (const Protocol__FlexRlcPdu   *message,
                      uint8_t             *out);
size_t protocol__flex_rlc_pdu__pack_to_buffer
                     (const Protocol__FlexRlcPdu   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexRlcPdu *
       protocol__flex_rlc_pdu__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_rlc_pdu__free_unpacked
                     (Protocol__FlexRlcPdu *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FlexRlcPduTb methods */
void   protocol__flex_rlc_pdu_tb__init
                     (Protocol__FlexRlcPduTb         *message);
size_t protocol__flex_rlc_pdu_tb__get_packed_size
                     (const Protocol__FlexRlcPduTb   *message);
size_t protocol__flex_rlc_pdu_tb__pack
                     (const Protocol__FlexRlcPduTb   *message,
                      uint8_t             *out);
size_t protocol__flex_rlc_pdu_tb__pack_to_buffer
                     (const Protocol__FlexRlcPduTb   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FlexRlcPduTb *
       protocol__flex_rlc_pdu_tb__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__flex_rlc_pdu_tb__free_unpacked
                     (Protocol__FlexRlcPduTb *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__FlexDlDci_Closure)
                 (const Protocol__FlexDlDci *message,
                  void *closure_data);
typedef void (*Protocol__FlexUlDci_Closure)
                 (const Protocol__FlexUlDci *message,
                  void *closure_data);
typedef void (*Protocol__FlexRlcPdu_Closure)
                 (const Protocol__FlexRlcPdu *message,
                  void *closure_data);
typedef void (*Protocol__FlexRlcPduTb_Closure)
                 (const Protocol__FlexRlcPduTb *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__flex_dci_format__descriptor;
extern const ProtobufCEnumDescriptor    protocol__flex_vrb_format__descriptor;
extern const ProtobufCEnumDescriptor    protocol__flex_ngap_val__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_dl_dci__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_ul_dci__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_rlc_pdu__descriptor;
extern const ProtobufCMessageDescriptor protocol__flex_rlc_pdu_tb__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_mac_5fprimitives_2eproto__INCLUDED */
