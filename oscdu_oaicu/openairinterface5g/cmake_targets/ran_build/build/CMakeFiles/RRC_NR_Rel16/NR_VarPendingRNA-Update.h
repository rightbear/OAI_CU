/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_VarPendingRNA_Update_H_
#define	_NR_VarPendingRNA_Update_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_VarPendingRNA-Update */
typedef struct NR_VarPendingRNA_Update {
	BOOLEAN_t	*pendingRNA_Update;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarPendingRNA_Update_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarPendingRNA_Update;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_VarPendingRNA_Update_H_ */
#include <asn_internal.h>