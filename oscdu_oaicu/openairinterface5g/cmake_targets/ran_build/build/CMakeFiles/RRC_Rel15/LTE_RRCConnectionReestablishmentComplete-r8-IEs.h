/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_RRCConnectionReestablishmentComplete_r8_IEs_H_
#define	_LTE_RRCConnectionReestablishmentComplete_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RRCConnectionReestablishmentComplete_v920_IEs;

/* LTE_RRCConnectionReestablishmentComplete-r8-IEs */
typedef struct LTE_RRCConnectionReestablishmentComplete_r8_IEs {
	struct LTE_RRCConnectionReestablishmentComplete_v920_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReestablishmentComplete_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentComplete_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentComplete_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentComplete_r8_IEs_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RRCConnectionReestablishmentComplete-v920-IEs.h"

#endif	/* _LTE_RRCConnectionReestablishmentComplete_r8_IEs_H_ */
#include <asn_internal.h>