/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_UEAssistanceInformation_v1540_IEs_H_
#define	_NR_UEAssistanceInformation_v1540_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_OverheatingAssistance;
struct NR_UEAssistanceInformation_v1610_IEs;

/* NR_UEAssistanceInformation-v1540-IEs */
typedef struct NR_UEAssistanceInformation_v1540_IEs {
	struct NR_OverheatingAssistance	*overheatingAssistance;	/* OPTIONAL */
	struct NR_UEAssistanceInformation_v1610_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UEAssistanceInformation_v1540_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UEAssistanceInformation_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UEAssistanceInformation_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UEAssistanceInformation_v1540_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_OverheatingAssistance.h"
#include "NR_UEAssistanceInformation-v1610-IEs.h"

#endif	/* _NR_UEAssistanceInformation_v1540_IEs_H_ */
#include <asn_internal.h>