/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v10c0_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v10c0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_OTDOA_PositioningCapabilities_r10;
struct LTE_UE_EUTRA_Capability_v10f0_IEs;

/* LTE_UE-EUTRA-Capability-v10c0-IEs */
typedef struct LTE_UE_EUTRA_Capability_v10c0_IEs {
	struct LTE_OTDOA_PositioningCapabilities_r10	*otdoa_PositioningCapabilities_r10;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v10f0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v10c0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v10c0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v10c0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v10c0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_OTDOA-PositioningCapabilities-r10.h"
#include "LTE_UE-EUTRA-Capability-v10f0-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v10c0_IEs_H_ */
#include <asn_internal.h>