/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_PUSCH_Config_H_
#define	_NR_PUSCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUSCH_Config__txConfig {
	NR_PUSCH_Config__txConfig_codebook	= 0,
	NR_PUSCH_Config__txConfig_nonCodebook	= 1
} e_NR_PUSCH_Config__txConfig;
typedef enum NR_PUSCH_Config__frequencyHopping {
	NR_PUSCH_Config__frequencyHopping_intraSlot	= 0,
	NR_PUSCH_Config__frequencyHopping_interSlot	= 1
} e_NR_PUSCH_Config__frequencyHopping;
typedef enum NR_PUSCH_Config__resourceAllocation {
	NR_PUSCH_Config__resourceAllocation_resourceAllocationType0	= 0,
	NR_PUSCH_Config__resourceAllocation_resourceAllocationType1	= 1,
	NR_PUSCH_Config__resourceAllocation_dynamicSwitch	= 2
} e_NR_PUSCH_Config__resourceAllocation;
typedef enum NR_PUSCH_Config__pusch_AggregationFactor {
	NR_PUSCH_Config__pusch_AggregationFactor_n2	= 0,
	NR_PUSCH_Config__pusch_AggregationFactor_n4	= 1,
	NR_PUSCH_Config__pusch_AggregationFactor_n8	= 2
} e_NR_PUSCH_Config__pusch_AggregationFactor;
typedef enum NR_PUSCH_Config__mcs_Table {
	NR_PUSCH_Config__mcs_Table_qam256	= 0,
	NR_PUSCH_Config__mcs_Table_qam64LowSE	= 1
} e_NR_PUSCH_Config__mcs_Table;
typedef enum NR_PUSCH_Config__mcs_TableTransformPrecoder {
	NR_PUSCH_Config__mcs_TableTransformPrecoder_qam256	= 0,
	NR_PUSCH_Config__mcs_TableTransformPrecoder_qam64LowSE	= 1
} e_NR_PUSCH_Config__mcs_TableTransformPrecoder;
typedef enum NR_PUSCH_Config__transformPrecoder {
	NR_PUSCH_Config__transformPrecoder_enabled	= 0,
	NR_PUSCH_Config__transformPrecoder_disabled	= 1
} e_NR_PUSCH_Config__transformPrecoder;
typedef enum NR_PUSCH_Config__codebookSubset {
	NR_PUSCH_Config__codebookSubset_fullyAndPartialAndNonCoherent	= 0,
	NR_PUSCH_Config__codebookSubset_partialAndNonCoherent	= 1,
	NR_PUSCH_Config__codebookSubset_nonCoherent	= 2
} e_NR_PUSCH_Config__codebookSubset;
typedef enum NR_PUSCH_Config__rbg_Size {
	NR_PUSCH_Config__rbg_Size_config2	= 0
} e_NR_PUSCH_Config__rbg_Size;
typedef enum NR_PUSCH_Config__tp_pi2BPSK {
	NR_PUSCH_Config__tp_pi2BPSK_enabled	= 0
} e_NR_PUSCH_Config__tp_pi2BPSK;
typedef enum NR_PUSCH_Config__ext1__dmrs_SequenceInitializationDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__dmrs_SequenceInitializationDCI_0_2_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__dmrs_SequenceInitializationDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__antennaPortsFieldPresenceDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__antennaPortsFieldPresenceDCI_0_2_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__antennaPortsFieldPresenceDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR {
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR_NOTHING,	/* No components present */
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR_pusch_RepTypeA,
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR_pusch_RepTypeB
} NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR;
typedef enum NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA {
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA_intraSlot	= 0,
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA_interSlot	= 1
} e_NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA;
typedef enum NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB {
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB_interRepetition	= 0,
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB_interSlot	= 1
} e_NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB;
typedef enum NR_PUSCH_Config__ext1__codebookSubsetDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__codebookSubsetDCI_0_2_r16_fullyAndPartialAndNonCoherent	= 0,
	NR_PUSCH_Config__ext1__codebookSubsetDCI_0_2_r16_partialAndNonCoherent	= 1,
	NR_PUSCH_Config__ext1__codebookSubsetDCI_0_2_r16_nonCoherent	= 2
} e_NR_PUSCH_Config__ext1__codebookSubsetDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_2_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__mcs_TableDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__mcs_TableDCI_0_2_r16_qam256	= 0,
	NR_PUSCH_Config__ext1__mcs_TableDCI_0_2_r16_qam64LowSE	= 1
} e_NR_PUSCH_Config__ext1__mcs_TableDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__mcs_TableTransformPrecoderDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__mcs_TableTransformPrecoderDCI_0_2_r16_qam256	= 0,
	NR_PUSCH_Config__ext1__mcs_TableTransformPrecoderDCI_0_2_r16_qam64LowSE	= 1
} e_NR_PUSCH_Config__ext1__mcs_TableTransformPrecoderDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_2_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeA	= 0,
	NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeB	= 1
} e_NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__resourceAllocationDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__resourceAllocationDCI_0_2_r16_resourceAllocationType0	= 0,
	NR_PUSCH_Config__ext1__resourceAllocationDCI_0_2_r16_resourceAllocationType1	= 1,
	NR_PUSCH_Config__ext1__resourceAllocationDCI_0_2_r16_dynamicSwitch	= 2
} e_NR_PUSCH_Config__ext1__resourceAllocationDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16 {
	NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16_n2	= 0,
	NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16_n4	= 1,
	NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16_n8	= 2,
	NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16_n16	= 3
} e_NR_PUSCH_Config__ext1__resourceAllocationType1GranularityDCI_0_2_r16;
typedef enum NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_1_r16 {
	NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_1_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__invalidSymbolPatternIndicatorDCI_0_1_r16;
typedef enum NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_1_r16 {
	NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_1_r16_enabled	= 0
} e_NR_PUSCH_Config__ext1__priorityIndicatorDCI_0_1_r16;
typedef enum NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_1_r16 {
	NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeA	= 0,
	NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeB	= 1
} e_NR_PUSCH_Config__ext1__pusch_RepTypeIndicatorDCI_0_1_r16;
typedef enum NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_1_r16 {
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_1_r16_interRepetition	= 0,
	NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_1_r16_interSlot	= 1
} e_NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_1_r16;
typedef enum NR_PUSCH_Config__ext1__ul_FullPowerTransmission_r16 {
	NR_PUSCH_Config__ext1__ul_FullPowerTransmission_r16_fullpower	= 0,
	NR_PUSCH_Config__ext1__ul_FullPowerTransmission_r16_fullpowerMode1	= 1,
	NR_PUSCH_Config__ext1__ul_FullPowerTransmission_r16_fullpowerMode2	= 2
} e_NR_PUSCH_Config__ext1__ul_FullPowerTransmission_r16;

/* Forward declarations */
struct NR_SetupRelease_DMRS_UplinkConfig;
struct NR_PUSCH_PowerControl;
struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList;
struct NR_SetupRelease_UCI_OnPUSCH;
struct NR_SetupRelease_MinSchedulingOffsetK2_Values_r16;
struct NR_SetupRelease_UL_AccessConfigListDCI_0_1_r16;
struct NR_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16;
struct NR_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16;
struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16;
struct NR_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16;
struct NR_InvalidSymbolPattern_r16;
struct NR_SetupRelease_PUSCH_PowerControl_v1610;

/* NR_PUSCH-Config */
typedef struct NR_PUSCH_Config {
	long	*dataScramblingIdentityPUSCH;	/* OPTIONAL */
	long	*txConfig;	/* OPTIONAL */
	struct NR_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeA;	/* OPTIONAL */
	struct NR_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeB;	/* OPTIONAL */
	struct NR_PUSCH_PowerControl	*pusch_PowerControl;	/* OPTIONAL */
	long	*frequencyHopping;	/* OPTIONAL */
	struct NR_PUSCH_Config__frequencyHoppingOffsetLists {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyHoppingOffsetLists;
	long	 resourceAllocation;
	struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList	*pusch_TimeDomainAllocationList;	/* OPTIONAL */
	long	*pusch_AggregationFactor;	/* OPTIONAL */
	long	*mcs_Table;	/* OPTIONAL */
	long	*mcs_TableTransformPrecoder;	/* OPTIONAL */
	long	*transformPrecoder;	/* OPTIONAL */
	long	*codebookSubset;	/* OPTIONAL */
	long	*maxRank;	/* OPTIONAL */
	long	*rbg_Size;	/* OPTIONAL */
	struct NR_SetupRelease_UCI_OnPUSCH	*uci_OnPUSCH;	/* OPTIONAL */
	long	*tp_pi2BPSK;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PUSCH_Config__ext1 {
		struct NR_SetupRelease_MinSchedulingOffsetK2_Values_r16	*minimumSchedulingOffsetK2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_UL_AccessConfigListDCI_0_1_r16	*ul_AccessConfigListDCI_0_1_r16;	/* OPTIONAL */
		long	*harq_ProcessNumberSizeDCI_0_2_r16;	/* OPTIONAL */
		long	*dmrs_SequenceInitializationDCI_0_2_r16;	/* OPTIONAL */
		long	*numberOfBitsForRV_DCI_0_2_r16;	/* OPTIONAL */
		long	*antennaPortsFieldPresenceDCI_0_2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16;	/* OPTIONAL */
		struct NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16 {
			NR_PUSCH_Config__ext1__frequencyHoppingDCI_0_2_r16_PR present;
			union NR_PUSCH_Config__NR_ext1__NR_frequencyHoppingDCI_0_2_r16_u {
				long	 pusch_RepTypeA;
				long	 pusch_RepTypeB;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *frequencyHoppingDCI_0_2_r16;
		struct NR_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16	*frequencyHoppingOffsetListsDCI_0_2_r16;	/* OPTIONAL */
		long	*codebookSubsetDCI_0_2_r16;	/* OPTIONAL */
		long	*invalidSymbolPatternIndicatorDCI_0_2_r16;	/* OPTIONAL */
		long	*maxRankDCI_0_2_r16;	/* OPTIONAL */
		long	*mcs_TableDCI_0_2_r16;	/* OPTIONAL */
		long	*mcs_TableTransformPrecoderDCI_0_2_r16;	/* OPTIONAL */
		long	*priorityIndicatorDCI_0_2_r16;	/* OPTIONAL */
		long	*pusch_RepTypeIndicatorDCI_0_2_r16;	/* OPTIONAL */
		long	*resourceAllocationDCI_0_2_r16;	/* OPTIONAL */
		long	*resourceAllocationType1GranularityDCI_0_2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16	*uci_OnPUSCH_ListDCI_0_2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16	*pusch_TimeDomainAllocationListDCI_0_2_r16;	/* OPTIONAL */
		struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16	*pusch_TimeDomainAllocationListDCI_0_1_r16;	/* OPTIONAL */
		long	*invalidSymbolPatternIndicatorDCI_0_1_r16;	/* OPTIONAL */
		long	*priorityIndicatorDCI_0_1_r16;	/* OPTIONAL */
		long	*pusch_RepTypeIndicatorDCI_0_1_r16;	/* OPTIONAL */
		long	*frequencyHoppingDCI_0_1_r16;	/* OPTIONAL */
		struct NR_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16	*uci_OnPUSCH_ListDCI_0_1_r16;	/* OPTIONAL */
		struct NR_InvalidSymbolPattern_r16	*invalidSymbolPattern_r16;	/* OPTIONAL */
		struct NR_SetupRelease_PUSCH_PowerControl_v1610	*pusch_PowerControl_v1610;	/* OPTIONAL */
		long	*ul_FullPowerTransmission_r16;	/* OPTIONAL */
		struct NR_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16	*pusch_TimeDomainAllocationListForMultiPUSCH_r16;	/* OPTIONAL */
		long	*numberOfInvalidSymbolsForDL_UL_Switching_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUSCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_txConfig_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_frequencyHopping_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceAllocation_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_AggregationFactor_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_Table_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_TableTransformPrecoder_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_transformPrecoder_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_codebookSubset_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rbg_Size_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tp_pi2BPSK_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_SequenceInitializationDCI_0_2_r16_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_antennaPortsFieldPresenceDCI_0_2_r16_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_RepTypeA_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_RepTypeB_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_codebookSubsetDCI_0_2_r16_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_invalidSymbolPatternIndicatorDCI_0_2_r16_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_TableDCI_0_2_r16_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_TableTransformPrecoderDCI_0_2_r16_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_priorityIndicatorDCI_0_2_r16_75;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_RepTypeIndicatorDCI_0_2_r16_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceAllocationDCI_0_2_r16_80;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceAllocationType1GranularityDCI_0_2_r16_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_invalidSymbolPatternIndicatorDCI_0_1_r16_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_priorityIndicatorDCI_0_1_r16_94;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_RepTypeIndicatorDCI_0_1_r16_96;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_frequencyHoppingDCI_0_1_r16_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_FullPowerTransmission_r16_105;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUSCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUSCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUSCH_Config_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"
#include "NR_PUSCH-PowerControl.h"
#include "NR_InvalidSymbolPattern-r16.h"

#endif	/* _NR_PUSCH_Config_H_ */
#include <asn_internal.h>