/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_BeamFailureRecoveryConfig_H_
#define	_NR_BeamFailureRecoveryConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR_RSRP-Range.h"
#include <NativeEnumerated.h>
#include "NR_SearchSpaceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_SubcarrierSpacing.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion {
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_oneEighth	= 0,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_oneFourth	= 1,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_oneHalf	= 2,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_one	= 3,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_two	= 4,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_four	= 5,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_eight	= 6,
	NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion_sixteen	= 7
} e_NR_BeamFailureRecoveryConfig__ssb_perRACH_Occasion;
typedef enum NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer {
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms10	= 0,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms20	= 1,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms40	= 2,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms60	= 3,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms80	= 4,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms100	= 5,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms150	= 6,
	NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer_ms200	= 7
} e_NR_BeamFailureRecoveryConfig__beamFailureRecoveryTimer;
typedef enum NR_BeamFailureRecoveryConfig__ext3__spCell_BFR_CBRA_r16 {
	NR_BeamFailureRecoveryConfig__ext3__spCell_BFR_CBRA_r16_true	= 0
} e_NR_BeamFailureRecoveryConfig__ext3__spCell_BFR_CBRA_r16;

/* Forward declarations */
struct NR_RACH_ConfigGeneric;
struct NR_RA_Prioritization;
struct NR_PRACH_ResourceDedicatedBFR;
struct NR_SetupRelease_CandidateBeamRSListExt_r16;

/* NR_BeamFailureRecoveryConfig */
typedef struct NR_BeamFailureRecoveryConfig {
	long	*rootSequenceIndex_BFR;	/* OPTIONAL */
	struct NR_RACH_ConfigGeneric	*rach_ConfigBFR;	/* OPTIONAL */
	NR_RSRP_Range_t	*rsrp_ThresholdSSB;	/* OPTIONAL */
	struct NR_BeamFailureRecoveryConfig__candidateBeamRSList {
		A_SEQUENCE_OF(struct NR_PRACH_ResourceDedicatedBFR) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *candidateBeamRSList;
	long	*ssb_perRACH_Occasion;	/* OPTIONAL */
	long	*ra_ssb_OccasionMaskIndex;	/* OPTIONAL */
	NR_SearchSpaceId_t	*recoverySearchSpaceId;	/* OPTIONAL */
	struct NR_RA_Prioritization	*ra_Prioritization;	/* OPTIONAL */
	long	*beamFailureRecoveryTimer;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_BeamFailureRecoveryConfig__ext1 {
		NR_SubcarrierSpacing_t	*msg1_SubcarrierSpacing;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_BeamFailureRecoveryConfig__ext2 {
		struct NR_RA_Prioritization	*ra_PrioritizationTwoStep_r16;	/* OPTIONAL */
		struct NR_SetupRelease_CandidateBeamRSListExt_r16	*candidateBeamRSListExt_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_BeamFailureRecoveryConfig__ext3 {
		long	*spCell_BFR_CBRA_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BeamFailureRecoveryConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ssb_perRACH_Occasion_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_beamFailureRecoveryTimer_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_spCell_BFR_CBRA_r16_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BeamFailureRecoveryConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BeamFailureRecoveryConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BeamFailureRecoveryConfig_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RACH-ConfigGeneric.h"
#include "NR_RA-Prioritization.h"
#include "NR_PRACH-ResourceDedicatedBFR.h"
#include "NR_SetupRelease.h"

#endif	/* _NR_BeamFailureRecoveryConfig_H_ */
#include <asn_internal.h>