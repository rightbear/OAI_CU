/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_SL_TxPower_r14_H_
#define	_LTE_SL_TxPower_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_TxPower_r14_PR {
	LTE_SL_TxPower_r14_PR_NOTHING,	/* No components present */
	LTE_SL_TxPower_r14_PR_minusinfinity_r14,
	LTE_SL_TxPower_r14_PR_txPower_r14
} LTE_SL_TxPower_r14_PR;

/* LTE_SL-TxPower-r14 */
typedef struct LTE_SL_TxPower_r14 {
	LTE_SL_TxPower_r14_PR present;
	union LTE_SL_TxPower_r14_u {
		NULL_t	 minusinfinity_r14;
		long	 txPower_r14;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_TxPower_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_TxPower_r14;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SL_TxPower_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_TxPower_r14_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SL_TxPower_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_TxPower_r14_H_ */
#include <asn_internal.h>