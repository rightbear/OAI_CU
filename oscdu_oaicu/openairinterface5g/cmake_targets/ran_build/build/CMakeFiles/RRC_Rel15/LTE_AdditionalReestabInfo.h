/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_AdditionalReestabInfo_H_
#define	_LTE_AdditionalReestabInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellIdentity.h"
#include "LTE_Key-eNodeB-Star.h"
#include "LTE_ShortMAC-I.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_AdditionalReestabInfo */
typedef struct LTE_AdditionalReestabInfo {
	LTE_CellIdentity_t	 cellIdentity;
	LTE_Key_eNodeB_Star_t	 key_eNodeB_Star;
	LTE_ShortMAC_I_t	 shortMAC_I;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AdditionalReestabInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AdditionalReestabInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AdditionalReestabInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AdditionalReestabInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AdditionalReestabInfo_H_ */
#include <asn_internal.h>