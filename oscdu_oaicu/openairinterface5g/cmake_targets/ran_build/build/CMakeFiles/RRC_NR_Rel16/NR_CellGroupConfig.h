/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_CellGroupConfig_H_
#define	_NR_CellGroupConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CellGroupId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_LogicalChannelIdentity.h"
#include "NR_SCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>
#include "NR_BH-RLC-ChannelID-r16.h"
#include "NR_ServCellIndex.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CellGroupConfig__ext1__reportUplinkTxDirectCurrent {
	NR_CellGroupConfig__ext1__reportUplinkTxDirectCurrent_true	= 0
} e_NR_CellGroupConfig__ext1__reportUplinkTxDirectCurrent;
typedef enum NR_CellGroupConfig__ext2__f1c_TransferPath_r16 {
	NR_CellGroupConfig__ext2__f1c_TransferPath_r16_lte	= 0,
	NR_CellGroupConfig__ext2__f1c_TransferPath_r16_nr	= 1,
	NR_CellGroupConfig__ext2__f1c_TransferPath_r16_both	= 2
} e_NR_CellGroupConfig__ext2__f1c_TransferPath_r16;
typedef enum NR_CellGroupConfig__ext2__uplinkTxSwitchingOption_r16 {
	NR_CellGroupConfig__ext2__uplinkTxSwitchingOption_r16_switchedUL	= 0,
	NR_CellGroupConfig__ext2__uplinkTxSwitchingOption_r16_dualUL	= 1
} e_NR_CellGroupConfig__ext2__uplinkTxSwitchingOption_r16;
typedef enum NR_CellGroupConfig__ext2__uplinkTxSwitchingPowerBoosting_r16 {
	NR_CellGroupConfig__ext2__uplinkTxSwitchingPowerBoosting_r16_enabled	= 0
} e_NR_CellGroupConfig__ext2__uplinkTxSwitchingPowerBoosting_r16;
typedef enum NR_CellGroupConfig__ext3__reportUplinkTxDirectCurrentTwoCarrier_r16 {
	NR_CellGroupConfig__ext3__reportUplinkTxDirectCurrentTwoCarrier_r16_true	= 0
} e_NR_CellGroupConfig__ext3__reportUplinkTxDirectCurrentTwoCarrier_r16;

/* Forward declarations */
struct NR_MAC_CellGroupConfig;
struct NR_PhysicalCellGroupConfig;
struct NR_SpCellConfig;
struct NR_RLC_BearerConfig;
struct NR_SCellConfig;
struct NR_BH_RLC_ChannelConfig_r16;

/* NR_CellGroupConfig */
typedef struct NR_CellGroupConfig {
	NR_CellGroupId_t	 cellGroupId;
	struct NR_CellGroupConfig__rlc_BearerToAddModList {
		A_SEQUENCE_OF(struct NR_RLC_BearerConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToAddModList;
	struct NR_CellGroupConfig__rlc_BearerToReleaseList {
		A_SEQUENCE_OF(NR_LogicalChannelIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToReleaseList;
	struct NR_MAC_CellGroupConfig	*mac_CellGroupConfig;	/* OPTIONAL */
	struct NR_PhysicalCellGroupConfig	*physicalCellGroupConfig;	/* OPTIONAL */
	struct NR_SpCellConfig	*spCellConfig;	/* OPTIONAL */
	struct NR_CellGroupConfig__sCellToAddModList {
		A_SEQUENCE_OF(struct NR_SCellConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToAddModList;
	struct NR_CellGroupConfig__sCellToReleaseList {
		A_SEQUENCE_OF(NR_SCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_CellGroupConfig__ext1 {
		long	*reportUplinkTxDirectCurrent;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_CellGroupConfig__ext2 {
		BIT_STRING_t	*bap_Address_r16;	/* OPTIONAL */
		struct NR_CellGroupConfig__ext2__bh_RLC_ChannelToAddModList_r16 {
			A_SEQUENCE_OF(struct NR_BH_RLC_ChannelConfig_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *bh_RLC_ChannelToAddModList_r16;
		struct NR_CellGroupConfig__ext2__bh_RLC_ChannelToReleaseList_r16 {
			A_SEQUENCE_OF(NR_BH_RLC_ChannelID_r16_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *bh_RLC_ChannelToReleaseList_r16;
		long	*f1c_TransferPath_r16;	/* OPTIONAL */
		struct NR_CellGroupConfig__ext2__simultaneousTCI_UpdateList1_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *simultaneousTCI_UpdateList1_r16;
		struct NR_CellGroupConfig__ext2__simultaneousTCI_UpdateList2_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *simultaneousTCI_UpdateList2_r16;
		struct NR_CellGroupConfig__ext2__simultaneousSpatial_UpdatedList1_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *simultaneousSpatial_UpdatedList1_r16;
		struct NR_CellGroupConfig__ext2__simultaneousSpatial_UpdatedList2_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *simultaneousSpatial_UpdatedList2_r16;
		long	*uplinkTxSwitchingOption_r16;	/* OPTIONAL */
		long	*uplinkTxSwitchingPowerBoosting_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_CellGroupConfig__ext3 {
		long	*reportUplinkTxDirectCurrentTwoCarrier_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CellGroupConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportUplinkTxDirectCurrent_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_f1c_TransferPath_r16_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitchingOption_r16_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitchingPowerBoosting_r16_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportUplinkTxDirectCurrentTwoCarrier_r16_42;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CellGroupConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MAC-CellGroupConfig.h"
#include "NR_PhysicalCellGroupConfig.h"
#include "NR_SpCellConfig.h"
#include "NR_RLC-BearerConfig.h"
#include "NR_SCellConfig.h"
#include "NR_BH-RLC-ChannelConfig-r16.h"

#endif	/* _NR_CellGroupConfig_H_ */
#include <asn_internal.h>