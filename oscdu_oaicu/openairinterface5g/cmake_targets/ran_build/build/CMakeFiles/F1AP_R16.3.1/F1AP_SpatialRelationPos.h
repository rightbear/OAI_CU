/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#ifndef	_F1AP_SpatialRelationPos_H_
#define	_F1AP_SpatialRelationPos_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_SpatialRelationPos_PR {
	F1AP_SpatialRelationPos_PR_NOTHING,	/* No components present */
	F1AP_SpatialRelationPos_PR_sSBPos,
	F1AP_SpatialRelationPos_PR_pRSInformationPos,
	F1AP_SpatialRelationPos_PR_choice_extension
} F1AP_SpatialRelationPos_PR;

/* Forward declarations */
struct F1AP_SSBPos;
struct F1AP_PRSInformationPos;
struct F1AP_ProtocolIE_SingleContainer;

/* F1AP_SpatialRelationPos */
typedef struct F1AP_SpatialRelationPos {
	F1AP_SpatialRelationPos_PR present;
	union F1AP_SpatialRelationPos_u {
		struct F1AP_SSBPos	*sSBPos;
		struct F1AP_PRSInformationPos	*pRSInformationPos;
		struct F1AP_ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_SpatialRelationPos_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_SpatialRelationPos;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_SpatialRelationPos_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_SpatialRelationPos_1[3];
extern asn_per_constraints_t asn_PER_type_F1AP_SpatialRelationPos_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_SpatialRelationPos_H_ */
#include <asn_internal.h>