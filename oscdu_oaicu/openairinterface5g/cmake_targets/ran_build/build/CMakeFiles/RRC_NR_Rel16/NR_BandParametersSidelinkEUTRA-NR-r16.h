/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_BandParametersSidelinkEUTRA_NR_r16_H_
#define	_NR_BandParametersSidelinkEUTRA_NR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>
#include "NR_BandParametersSidelink-r16.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandParametersSidelinkEUTRA_NR_r16_PR {
	NR_BandParametersSidelinkEUTRA_NR_r16_PR_NOTHING,	/* No components present */
	NR_BandParametersSidelinkEUTRA_NR_r16_PR_eutra,
	NR_BandParametersSidelinkEUTRA_NR_r16_PR_nr
} NR_BandParametersSidelinkEUTRA_NR_r16_PR;

/* NR_BandParametersSidelinkEUTRA-NR-r16 */
typedef struct NR_BandParametersSidelinkEUTRA_NR_r16 {
	NR_BandParametersSidelinkEUTRA_NR_r16_PR present;
	union NR_BandParametersSidelinkEUTRA_NR_r16_u {
		struct NR_BandParametersSidelinkEUTRA_NR_r16__eutra {
			OCTET_STRING_t	*bandParametersSidelinkEUTRA1_r16;	/* OPTIONAL */
			OCTET_STRING_t	*bandParametersSidelinkEUTRA2_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *eutra;
		struct NR_BandParametersSidelinkEUTRA_NR_r16__nr {
			NR_BandParametersSidelink_r16_t	 bandParametersSidelinkNR_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandParametersSidelinkEUTRA_NR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandParametersSidelinkEUTRA_NR_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_BandParametersSidelinkEUTRA_NR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandParametersSidelinkEUTRA_NR_r16_1[2];
extern asn_per_constraints_t asn_PER_type_NR_BandParametersSidelinkEUTRA_NR_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandParametersSidelinkEUTRA_NR_r16_H_ */
#include <asn_internal.h>