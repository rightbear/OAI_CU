/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: stats_messages.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "stats_messages.pb-c.h"
void   protocol__flex_complete_stats_request__init
                     (Protocol__FlexCompleteStatsRequest         *message)
{
  static Protocol__FlexCompleteStatsRequest init_value = PROTOCOL__FLEX_COMPLETE_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__flex_complete_stats_request__get_packed_size
                     (const Protocol__FlexCompleteStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__flex_complete_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_complete_stats_request__pack
                     (const Protocol__FlexCompleteStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_complete_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_complete_stats_request__pack_to_buffer
                     (const Protocol__FlexCompleteStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_complete_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexCompleteStatsRequest *
       protocol__flex_complete_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexCompleteStatsRequest *)
     protobuf_c_message_unpack (&protocol__flex_complete_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__flex_complete_stats_request__free_unpacked
                     (Protocol__FlexCompleteStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__flex_complete_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_cell_stats_request__init
                     (Protocol__FlexCellStatsRequest         *message)
{
  static Protocol__FlexCellStatsRequest init_value = PROTOCOL__FLEX_CELL_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__flex_cell_stats_request__get_packed_size
                     (const Protocol__FlexCellStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_cell_stats_request__pack
                     (const Protocol__FlexCellStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_cell_stats_request__pack_to_buffer
                     (const Protocol__FlexCellStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexCellStatsRequest *
       protocol__flex_cell_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexCellStatsRequest *)
     protobuf_c_message_unpack (&protocol__flex_cell_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__flex_cell_stats_request__free_unpacked
                     (Protocol__FlexCellStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_ue_stats_request__init
                     (Protocol__FlexUeStatsRequest         *message)
{
  static Protocol__FlexUeStatsRequest init_value = PROTOCOL__FLEX_UE_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__flex_ue_stats_request__get_packed_size
                     (const Protocol__FlexUeStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_ue_stats_request__pack
                     (const Protocol__FlexUeStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_ue_stats_request__pack_to_buffer
                     (const Protocol__FlexUeStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexUeStatsRequest *
       protocol__flex_ue_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexUeStatsRequest *)
     protobuf_c_message_unpack (&protocol__flex_ue_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__flex_ue_stats_request__free_unpacked
                     (Protocol__FlexUeStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_cell_stats_report__init
                     (Protocol__FlexCellStatsReport         *message)
{
  static Protocol__FlexCellStatsReport init_value = PROTOCOL__FLEX_CELL_STATS_REPORT__INIT;
  *message = init_value;
}
size_t protocol__flex_cell_stats_report__get_packed_size
                     (const Protocol__FlexCellStatsReport *message)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_cell_stats_report__pack
                     (const Protocol__FlexCellStatsReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_cell_stats_report__pack_to_buffer
                     (const Protocol__FlexCellStatsReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexCellStatsReport *
       protocol__flex_cell_stats_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexCellStatsReport *)
     protobuf_c_message_unpack (&protocol__flex_cell_stats_report__descriptor,
                                allocator, len, data);
}
void   protocol__flex_cell_stats_report__free_unpacked
                     (Protocol__FlexCellStatsReport *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__flex_cell_stats_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__flex_ue_stats_report__init
                     (Protocol__FlexUeStatsReport         *message)
{
  static Protocol__FlexUeStatsReport init_value = PROTOCOL__FLEX_UE_STATS_REPORT__INIT;
  *message = init_value;
}
size_t protocol__flex_ue_stats_report__get_packed_size
                     (const Protocol__FlexUeStatsReport *message)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__flex_ue_stats_report__pack
                     (const Protocol__FlexUeStatsReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__flex_ue_stats_report__pack_to_buffer
                     (const Protocol__FlexUeStatsReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__FlexUeStatsReport *
       protocol__flex_ue_stats_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__FlexUeStatsReport *)
     protobuf_c_message_unpack (&protocol__flex_ue_stats_report__descriptor,
                                allocator, len, data);
}
void   protocol__flex_ue_stats_report__free_unpacked
                     (Protocol__FlexUeStatsReport *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__flex_ue_stats_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__flex_complete_stats_request__field_descriptors[4] =
{
  {
    "report_frequency",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Protocol__FlexCompleteStatsRequest, has_report_frequency),
    offsetof(Protocol__FlexCompleteStatsRequest, report_frequency),
    &protocol__flex_stats_report_freq__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sf",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCompleteStatsRequest, has_sf),
    offsetof(Protocol__FlexCompleteStatsRequest, sf),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cell_report_flags",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCompleteStatsRequest, has_cell_report_flags),
    offsetof(Protocol__FlexCompleteStatsRequest, cell_report_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_report_flags",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCompleteStatsRequest, has_ue_report_flags),
    offsetof(Protocol__FlexCompleteStatsRequest, ue_report_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_complete_stats_request__field_indices_by_name[] = {
  2,   /* field[2] = cell_report_flags */
  0,   /* field[0] = report_frequency */
  1,   /* field[1] = sf */
  3,   /* field[3] = ue_report_flags */
};
static const ProtobufCIntRange protocol__flex_complete_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__flex_complete_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_complete_stats_request",
  "FlexCompleteStatsRequest",
  "Protocol__FlexCompleteStatsRequest",
  "protocol",
  sizeof(Protocol__FlexCompleteStatsRequest),
  4,
  protocol__flex_complete_stats_request__field_descriptors,
  protocol__flex_complete_stats_request__field_indices_by_name,
  1,  protocol__flex_complete_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__flex_complete_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_cell_stats_request__field_descriptors[2] =
{
  {
    "cell",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCellStatsRequest, n_cell),
    offsetof(Protocol__FlexCellStatsRequest, cell),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCellStatsRequest, has_flags),
    offsetof(Protocol__FlexCellStatsRequest, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_cell_stats_request__field_indices_by_name[] = {
  0,   /* field[0] = cell */
  1,   /* field[1] = flags */
};
static const ProtobufCIntRange protocol__flex_cell_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__flex_cell_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_cell_stats_request",
  "FlexCellStatsRequest",
  "Protocol__FlexCellStatsRequest",
  "protocol",
  sizeof(Protocol__FlexCellStatsRequest),
  2,
  protocol__flex_cell_stats_request__field_descriptors,
  protocol__flex_cell_stats_request__field_indices_by_name,
  1,  protocol__flex_cell_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__flex_cell_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_ue_stats_request__field_descriptors[2] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsRequest, n_rnti),
    offsetof(Protocol__FlexUeStatsRequest, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsRequest, has_flags),
    offsetof(Protocol__FlexUeStatsRequest, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_ue_stats_request__field_indices_by_name[] = {
  1,   /* field[1] = flags */
  0,   /* field[0] = rnti */
};
static const ProtobufCIntRange protocol__flex_ue_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__flex_ue_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_ue_stats_request",
  "FlexUeStatsRequest",
  "Protocol__FlexUeStatsRequest",
  "protocol",
  sizeof(Protocol__FlexUeStatsRequest),
  2,
  protocol__flex_ue_stats_request__field_descriptors,
  protocol__flex_ue_stats_request__field_indices_by_name,
  1,  protocol__flex_ue_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__flex_ue_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_cell_stats_report__field_descriptors[3] =
{
  {
    "carrier_index",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCellStatsReport, has_carrier_index),
    offsetof(Protocol__FlexCellStatsReport, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexCellStatsReport, has_flags),
    offsetof(Protocol__FlexCellStatsReport, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "noise_inter_report",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexCellStatsReport, noise_inter_report),
    &protocol__flex_noise_interference_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_cell_stats_report__field_indices_by_name[] = {
  0,   /* field[0] = carrier_index */
  1,   /* field[1] = flags */
  2,   /* field[2] = noise_inter_report */
};
static const ProtobufCIntRange protocol__flex_cell_stats_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor protocol__flex_cell_stats_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_cell_stats_report",
  "FlexCellStatsReport",
  "Protocol__FlexCellStatsReport",
  "protocol",
  sizeof(Protocol__FlexCellStatsReport),
  3,
  protocol__flex_cell_stats_report__field_descriptors,
  protocol__flex_cell_stats_report__field_indices_by_name,
  1,  protocol__flex_cell_stats_report__number_ranges,
  (ProtobufCMessageInit) protocol__flex_cell_stats_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__flex_ue_stats_report__field_descriptors[14] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsReport, has_rnti),
    offsetof(Protocol__FlexUeStatsReport, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsReport, has_flags),
    offsetof(Protocol__FlexUeStatsReport, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bsr",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsReport, n_bsr),
    offsetof(Protocol__FlexUeStatsReport, bsr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phr",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsReport, has_phr),
    offsetof(Protocol__FlexUeStatsReport, phr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlc_report",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__FlexUeStatsReport, n_rlc_report),
    offsetof(Protocol__FlexUeStatsReport, rlc_report),
    &protocol__flex_rlc_bsr__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pending_mac_ces",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__FlexUeStatsReport, has_pending_mac_ces),
    offsetof(Protocol__FlexUeStatsReport, pending_mac_ces),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_cqi_report",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, dl_cqi_report),
    &protocol__flex_dl_cqi_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pbr",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, pbr),
    &protocol__flex_paging_buffer_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ul_cqi_report",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, ul_cqi_report),
    &protocol__flex_ul_cqi_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rrc_measurements",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, rrc_measurements),
    &protocol__flex_rrc_measurements__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pdcp_stats",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, pdcp_stats),
    &protocol__flex_pdcp_stats__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mac_stats",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, mac_stats),
    &protocol__flex_mac_stats__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gtp_stats",
    13,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__FlexUeStatsReport, n_gtp_stats),
    offsetof(Protocol__FlexUeStatsReport, gtp_stats),
    &protocol__flex_gtp_stats__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "s1ap_stats",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__FlexUeStatsReport, s1ap_stats),
    &protocol__flex_s1ap_ue__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__flex_ue_stats_report__field_indices_by_name[] = {
  2,   /* field[2] = bsr */
  6,   /* field[6] = dl_cqi_report */
  1,   /* field[1] = flags */
  12,   /* field[12] = gtp_stats */
  11,   /* field[11] = mac_stats */
  7,   /* field[7] = pbr */
  10,   /* field[10] = pdcp_stats */
  5,   /* field[5] = pending_mac_ces */
  3,   /* field[3] = phr */
  4,   /* field[4] = rlc_report */
  0,   /* field[0] = rnti */
  9,   /* field[9] = rrc_measurements */
  13,   /* field[13] = s1ap_stats */
  8,   /* field[8] = ul_cqi_report */
};
static const ProtobufCIntRange protocol__flex_ue_stats_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 14 }
};
const ProtobufCMessageDescriptor protocol__flex_ue_stats_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.flex_ue_stats_report",
  "FlexUeStatsReport",
  "Protocol__FlexUeStatsReport",
  "protocol",
  sizeof(Protocol__FlexUeStatsReport),
  14,
  protocol__flex_ue_stats_report__field_descriptors,
  protocol__flex_ue_stats_report__field_indices_by_name,
  1,  protocol__flex_ue_stats_report__number_ranges,
  (ProtobufCMessageInit) protocol__flex_ue_stats_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue protocol__flex_stats_type__enum_values_by_number[3] =
{
  { "FLST_COMPLETE_STATS", "PROTOCOL__FLEX_STATS_TYPE__FLST_COMPLETE_STATS", 0 },
  { "FLST_CELL_STATS", "PROTOCOL__FLEX_STATS_TYPE__FLST_CELL_STATS", 1 },
  { "FLST_UE_STATS", "PROTOCOL__FLEX_STATS_TYPE__FLST_UE_STATS", 2 },
};
static const ProtobufCIntRange protocol__flex_stats_type__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex protocol__flex_stats_type__enum_values_by_name[3] =
{
  { "FLST_CELL_STATS", 1 },
  { "FLST_COMPLETE_STATS", 0 },
  { "FLST_UE_STATS", 2 },
};
const ProtobufCEnumDescriptor protocol__flex_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_stats_type",
  "flex_stats_type",
  "Protocol__FlexStatsType",
  "protocol",
  3,
  protocol__flex_stats_type__enum_values_by_number,
  3,
  protocol__flex_stats_type__enum_values_by_name,
  1,
  protocol__flex_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__flex_stats_report_freq__enum_values_by_number[4] =
{
  { "FLSRF_ONCE", "PROTOCOL__FLEX_STATS_REPORT_FREQ__FLSRF_ONCE", 0 },
  { "FLSRF_PERIODICAL", "PROTOCOL__FLEX_STATS_REPORT_FREQ__FLSRF_PERIODICAL", 1 },
  { "FLSRF_CONTINUOUS", "PROTOCOL__FLEX_STATS_REPORT_FREQ__FLSRF_CONTINUOUS", 2 },
  { "FLSRF_OFF", "PROTOCOL__FLEX_STATS_REPORT_FREQ__FLSRF_OFF", 3 },
};
static const ProtobufCIntRange protocol__flex_stats_report_freq__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex protocol__flex_stats_report_freq__enum_values_by_name[4] =
{
  { "FLSRF_CONTINUOUS", 2 },
  { "FLSRF_OFF", 3 },
  { "FLSRF_ONCE", 0 },
  { "FLSRF_PERIODICAL", 1 },
};
const ProtobufCEnumDescriptor protocol__flex_stats_report_freq__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_stats_report_freq",
  "flex_stats_report_freq",
  "Protocol__FlexStatsReportFreq",
  "protocol",
  4,
  protocol__flex_stats_report_freq__enum_values_by_number,
  4,
  protocol__flex_stats_report_freq__enum_values_by_name,
  1,
  protocol__flex_stats_report_freq__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__flex_cell_stats_type__enum_values_by_number[1] =
{
  { "FLCST_NOISE_INTERFERENCE", "PROTOCOL__FLEX_CELL_STATS_TYPE__FLCST_NOISE_INTERFERENCE", 1 },
};
static const ProtobufCIntRange protocol__flex_cell_stats_type__value_ranges[] = {
{1, 0},{0, 1}
};
static const ProtobufCEnumValueIndex protocol__flex_cell_stats_type__enum_values_by_name[1] =
{
  { "FLCST_NOISE_INTERFERENCE", 0 },
};
const ProtobufCEnumDescriptor protocol__flex_cell_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_cell_stats_type",
  "flex_cell_stats_type",
  "Protocol__FlexCellStatsType",
  "protocol",
  1,
  protocol__flex_cell_stats_type__enum_values_by_number,
  1,
  protocol__flex_cell_stats_type__enum_values_by_name,
  1,
  protocol__flex_cell_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__flex_ue_stats_type__enum_values_by_number[12] =
{
  { "FLUST_BSR", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_BSR", 1 },
  { "FLUST_PHR", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_PHR", 2 },
  { "FLUST_RLC_BS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_RLC_BS", 4 },
  { "FLUST_MAC_CE_BS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_MAC_CE_BS", 8 },
  { "FLUST_DL_CQI", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_DL_CQI", 16 },
  { "FLUST_PBS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_PBS", 32 },
  { "FLUST_UL_CQI", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_UL_CQI", 64 },
  { "FLUST_MAC_STATS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_MAC_STATS", 128 },
  { "FLUST_PDCP_STATS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_PDCP_STATS", 1024 },
  { "FLUST_GTP_STATS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_GTP_STATS", 2048 },
  { "FLUST_S1AP_STATS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_S1AP_STATS", 4096 },
  { "FLUST_RRC_MEASUREMENTS", "PROTOCOL__FLEX_UE_STATS_TYPE__FLUST_RRC_MEASUREMENTS", 65536 },
};
static const ProtobufCIntRange protocol__flex_ue_stats_type__value_ranges[] = {
{1, 0},{4, 2},{8, 3},{16, 4},{32, 5},{64, 6},{128, 7},{1024, 8},{2048, 9},{4096, 10},{65536, 11},{0, 12}
};
static const ProtobufCEnumValueIndex protocol__flex_ue_stats_type__enum_values_by_name[12] =
{
  { "FLUST_BSR", 0 },
  { "FLUST_DL_CQI", 4 },
  { "FLUST_GTP_STATS", 9 },
  { "FLUST_MAC_CE_BS", 3 },
  { "FLUST_MAC_STATS", 7 },
  { "FLUST_PBS", 5 },
  { "FLUST_PDCP_STATS", 8 },
  { "FLUST_PHR", 1 },
  { "FLUST_RLC_BS", 2 },
  { "FLUST_RRC_MEASUREMENTS", 11 },
  { "FLUST_S1AP_STATS", 10 },
  { "FLUST_UL_CQI", 6 },
};
const ProtobufCEnumDescriptor protocol__flex_ue_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.flex_ue_stats_type",
  "flex_ue_stats_type",
  "Protocol__FlexUeStatsType",
  "protocol",
  12,
  protocol__flex_ue_stats_type__enum_values_by_number,
  12,
  protocol__flex_ue_stats_type__enum_values_by_name,
  11,
  protocol__flex_ue_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
