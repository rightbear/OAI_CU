/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_MAC_ParametersCommon_H_
#define	_NR_MAC_ParametersCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MAC_ParametersCommon__lcp_Restriction {
	NR_MAC_ParametersCommon__lcp_Restriction_supported	= 0
} e_NR_MAC_ParametersCommon__lcp_Restriction;
typedef enum NR_MAC_ParametersCommon__dummy {
	NR_MAC_ParametersCommon__dummy_supported	= 0
} e_NR_MAC_ParametersCommon__dummy;
typedef enum NR_MAC_ParametersCommon__lch_ToSCellRestriction {
	NR_MAC_ParametersCommon__lch_ToSCellRestriction_supported	= 0
} e_NR_MAC_ParametersCommon__lch_ToSCellRestriction;
typedef enum NR_MAC_ParametersCommon__ext1__recommendedBitRate {
	NR_MAC_ParametersCommon__ext1__recommendedBitRate_supported	= 0
} e_NR_MAC_ParametersCommon__ext1__recommendedBitRate;
typedef enum NR_MAC_ParametersCommon__ext1__recommendedBitRateQuery {
	NR_MAC_ParametersCommon__ext1__recommendedBitRateQuery_supported	= 0
} e_NR_MAC_ParametersCommon__ext1__recommendedBitRateQuery;
typedef enum NR_MAC_ParametersCommon__ext2__recommendedBitRateMultiplier_r16 {
	NR_MAC_ParametersCommon__ext2__recommendedBitRateMultiplier_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__recommendedBitRateMultiplier_r16;
typedef enum NR_MAC_ParametersCommon__ext2__preEmptiveBSR_r16 {
	NR_MAC_ParametersCommon__ext2__preEmptiveBSR_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__preEmptiveBSR_r16;
typedef enum NR_MAC_ParametersCommon__ext2__autonomousTransmission_r16 {
	NR_MAC_ParametersCommon__ext2__autonomousTransmission_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__autonomousTransmission_r16;
typedef enum NR_MAC_ParametersCommon__ext2__lch_PriorityBasedPrioritization_r16 {
	NR_MAC_ParametersCommon__ext2__lch_PriorityBasedPrioritization_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__lch_PriorityBasedPrioritization_r16;
typedef enum NR_MAC_ParametersCommon__ext2__lch_ToConfiguredGrantMapping_r16 {
	NR_MAC_ParametersCommon__ext2__lch_ToConfiguredGrantMapping_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__lch_ToConfiguredGrantMapping_r16;
typedef enum NR_MAC_ParametersCommon__ext2__lch_ToGrantPriorityRestriction_r16 {
	NR_MAC_ParametersCommon__ext2__lch_ToGrantPriorityRestriction_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__lch_ToGrantPriorityRestriction_r16;
typedef enum NR_MAC_ParametersCommon__ext2__singlePHR_P_r16 {
	NR_MAC_ParametersCommon__ext2__singlePHR_P_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__singlePHR_P_r16;
typedef enum NR_MAC_ParametersCommon__ext2__ul_LBT_FailureDetectionRecovery_r16 {
	NR_MAC_ParametersCommon__ext2__ul_LBT_FailureDetectionRecovery_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__ul_LBT_FailureDetectionRecovery_r16;
typedef enum NR_MAC_ParametersCommon__ext2__tdd_MPE_P_MPR_Reporting_r16 {
	NR_MAC_ParametersCommon__ext2__tdd_MPE_P_MPR_Reporting_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__tdd_MPE_P_MPR_Reporting_r16;
typedef enum NR_MAC_ParametersCommon__ext2__lcid_ExtensionIAB_r16 {
	NR_MAC_ParametersCommon__ext2__lcid_ExtensionIAB_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext2__lcid_ExtensionIAB_r16;
typedef enum NR_MAC_ParametersCommon__ext3__spCell_BFR_CBRA_r16 {
	NR_MAC_ParametersCommon__ext3__spCell_BFR_CBRA_r16_supported	= 0
} e_NR_MAC_ParametersCommon__ext3__spCell_BFR_CBRA_r16;

/* NR_MAC-ParametersCommon */
typedef struct NR_MAC_ParametersCommon {
	long	*lcp_Restriction;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	long	*lch_ToSCellRestriction;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MAC_ParametersCommon__ext1 {
		long	*recommendedBitRate;	/* OPTIONAL */
		long	*recommendedBitRateQuery;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MAC_ParametersCommon__ext2 {
		long	*recommendedBitRateMultiplier_r16;	/* OPTIONAL */
		long	*preEmptiveBSR_r16;	/* OPTIONAL */
		long	*autonomousTransmission_r16;	/* OPTIONAL */
		long	*lch_PriorityBasedPrioritization_r16;	/* OPTIONAL */
		long	*lch_ToConfiguredGrantMapping_r16;	/* OPTIONAL */
		long	*lch_ToGrantPriorityRestriction_r16;	/* OPTIONAL */
		long	*singlePHR_P_r16;	/* OPTIONAL */
		long	*ul_LBT_FailureDetectionRecovery_r16;	/* OPTIONAL */
		long	*tdd_MPE_P_MPR_Reporting_r16;	/* OPTIONAL */
		long	*lcid_ExtensionIAB_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_MAC_ParametersCommon__ext3 {
		long	*spCell_BFR_CBRA_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MAC_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lcp_Restriction_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lch_ToSCellRestriction_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_recommendedBitRate_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_recommendedBitRateQuery_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_recommendedBitRateMultiplier_r16_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_preEmptiveBSR_r16_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_autonomousTransmission_r16_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lch_PriorityBasedPrioritization_r16_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lch_ToConfiguredGrantMapping_r16_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lch_ToGrantPriorityRestriction_r16_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_singlePHR_P_r16_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_LBT_FailureDetectionRecovery_r16_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdd_MPE_P_MPR_Reporting_r16_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lcid_ExtensionIAB_r16_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spCell_BFR_CBRA_r16_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MAC_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MAC_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MAC_ParametersCommon_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MAC_ParametersCommon_H_ */
#include <asn_internal.h>