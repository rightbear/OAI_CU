/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_RRCReconfigurationCompleteSidelink_IEs_r16_H_
#define	_NR_RRCReconfigurationCompleteSidelink_IEs_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RRCReconfigurationCompleteSidelink-IEs-r16 */
typedef struct NR_RRCReconfigurationCompleteSidelink_IEs_r16 {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_RRCReconfigurationCompleteSidelink_IEs_r16__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCReconfigurationCompleteSidelink_IEs_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfigurationCompleteSidelink_IEs_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfigurationCompleteSidelink_IEs_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCReconfigurationCompleteSidelink_IEs_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RRCReconfigurationCompleteSidelink_IEs_r16_H_ */
#include <asn_internal.h>