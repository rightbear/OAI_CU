/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_UE_CapabilityRequestFilterNR_H_
#define	_NR_UE_CapabilityRequestFilterNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_FreqBandList;
struct NR_UE_CapabilityRequestFilterNR_v1540;

/* NR_UE-CapabilityRequestFilterNR */
typedef struct NR_UE_CapabilityRequestFilterNR {
	struct NR_FreqBandList	*frequencyBandListFilter;	/* OPTIONAL */
	struct NR_UE_CapabilityRequestFilterNR_v1540	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_CapabilityRequestFilterNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_CapabilityRequestFilterNR;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_FreqBandList.h"
#include "NR_UE-CapabilityRequestFilterNR-v1540.h"

#endif	/* _NR_UE_CapabilityRequestFilterNR_H_ */
#include <asn_internal.h>