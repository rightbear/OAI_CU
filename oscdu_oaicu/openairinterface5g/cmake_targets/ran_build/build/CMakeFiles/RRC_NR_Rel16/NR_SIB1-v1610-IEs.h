/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_SIB1_v1610_IEs_H_
#define	_NR_SIB1_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16 {
	NR_SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16_true	= 0
} e_NR_SIB1_v1610_IEs__idleModeMeasurementsEUTRA_r16;
typedef enum NR_SIB1_v1610_IEs__idleModeMeasurementsNR_r16 {
	NR_SIB1_v1610_IEs__idleModeMeasurementsNR_r16_true	= 0
} e_NR_SIB1_v1610_IEs__idleModeMeasurementsNR_r16;

/* Forward declarations */
struct NR_PosSI_SchedulingInfo_r16;
struct NR_SIB1_v1630_IEs;

/* NR_SIB1-v1610-IEs */
typedef struct NR_SIB1_v1610_IEs {
	long	*idleModeMeasurementsEUTRA_r16;	/* OPTIONAL */
	long	*idleModeMeasurementsNR_r16;	/* OPTIONAL */
	struct NR_PosSI_SchedulingInfo_r16	*posSI_SchedulingInfo_r16;	/* OPTIONAL */
	struct NR_SIB1_v1630_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SIB1_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleModeMeasurementsEUTRA_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleModeMeasurementsNR_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SIB1_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SIB1_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SIB1_v1610_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PosSI-SchedulingInfo-r16.h"
#include "NR_SIB1-v1630-IEs.h"

#endif	/* _NR_SIB1_v1610_IEs_H_ */
#include <asn_internal.h>