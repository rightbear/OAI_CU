/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_FailureReportSCG_H_
#define	_NR_FailureReportSCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FailureReportSCG__failureType {
	NR_FailureReportSCG__failureType_t310_Expiry	= 0,
	NR_FailureReportSCG__failureType_randomAccessProblem	= 1,
	NR_FailureReportSCG__failureType_rlc_MaxNumRetx	= 2,
	NR_FailureReportSCG__failureType_synchReconfigFailureSCG	= 3,
	NR_FailureReportSCG__failureType_scg_ReconfigFailure	= 4,
	NR_FailureReportSCG__failureType_srb3_IntegrityFailure	= 5,
	NR_FailureReportSCG__failureType_other_r16	= 6,
	NR_FailureReportSCG__failureType_spare1	= 7
} e_NR_FailureReportSCG__failureType;
typedef enum NR_FailureReportSCG__ext1__failureType_v1610 {
	NR_FailureReportSCG__ext1__failureType_v1610_scg_lbtFailure_r16	= 0,
	NR_FailureReportSCG__ext1__failureType_v1610_beamFailureRecoveryFailure_r16	= 1,
	NR_FailureReportSCG__ext1__failureType_v1610_t312_Expiry_r16	= 2,
	NR_FailureReportSCG__ext1__failureType_v1610_bh_RLF_r16	= 3,
	NR_FailureReportSCG__ext1__failureType_v1610_spare4	= 4,
	NR_FailureReportSCG__ext1__failureType_v1610_spare3	= 5,
	NR_FailureReportSCG__ext1__failureType_v1610_spare2	= 6,
	NR_FailureReportSCG__ext1__failureType_v1610_spare1	= 7
} e_NR_FailureReportSCG__ext1__failureType_v1610;

/* Forward declarations */
struct NR_MeasResultFreqList;
struct NR_LocationInfo_r16;

/* NR_FailureReportSCG */
typedef struct NR_FailureReportSCG {
	long	 failureType;
	struct NR_MeasResultFreqList	*measResultFreqList;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_Failure;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_FailureReportSCG__ext1 {
		struct NR_LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
		long	*failureType_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FailureReportSCG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_failureType_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_failureType_v1610_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FailureReportSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FailureReportSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FailureReportSCG_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasResultFreqList.h"
#include "NR_LocationInfo-r16.h"

#endif	/* _NR_FailureReportSCG_H_ */
#include <asn_internal.h>