/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_BT_NameListConfig_r15_H_
#define	_LTE_BT_NameListConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_BT-NameList-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BT_NameListConfig_r15_PR {
	LTE_BT_NameListConfig_r15_PR_NOTHING,	/* No components present */
	LTE_BT_NameListConfig_r15_PR_release,
	LTE_BT_NameListConfig_r15_PR_setup
} LTE_BT_NameListConfig_r15_PR;

/* LTE_BT-NameListConfig-r15 */
typedef struct LTE_BT_NameListConfig_r15 {
	LTE_BT_NameListConfig_r15_PR present;
	union LTE_BT_NameListConfig_r15_u {
		NULL_t	 release;
		LTE_BT_NameList_r15_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BT_NameListConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BT_NameListConfig_r15;
extern asn_CHOICE_specifics_t asn_SPC_LTE_BT_NameListConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BT_NameListConfig_r15_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_BT_NameListConfig_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BT_NameListConfig_r15_H_ */
#include <asn_internal.h>