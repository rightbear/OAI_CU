/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_MIMO_UE_Parameters_v1470_H_
#define	_LTE_MIMO_UE_Parameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MIMO-UE-ParametersPerTM-v1470.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MIMO-UE-Parameters-v1470 */
typedef struct LTE_MIMO_UE_Parameters_v1470 {
	LTE_MIMO_UE_ParametersPerTM_v1470_t	 parametersTM9_v1470;
	LTE_MIMO_UE_ParametersPerTM_v1470_t	 parametersTM10_v1470;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MIMO_UE_Parameters_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_UE_Parameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_UE_Parameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MIMO_UE_Parameters_v1470_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MIMO_UE_Parameters_v1470_H_ */
#include <asn_internal.h>