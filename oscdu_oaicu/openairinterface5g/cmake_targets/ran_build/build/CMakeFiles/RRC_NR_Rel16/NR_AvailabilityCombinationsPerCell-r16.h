/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_AvailabilityCombinationsPerCell_r16_H_
#define	_NR_AvailabilityCombinationsPerCell_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_AvailabilityCombinationsPerCellIndex-r16.h"
#include "NR_CellIdentity.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_AvailabilityCombination_r16;

/* NR_AvailabilityCombinationsPerCell-r16 */
typedef struct NR_AvailabilityCombinationsPerCell_r16 {
	NR_AvailabilityCombinationsPerCellIndex_r16_t	 availabilityCombinationsPerCellIndex_r16;
	NR_CellIdentity_t	 iab_DU_CellIdentity_r16;
	long	*positionInDCI_AI_r16;	/* OPTIONAL */
	struct NR_AvailabilityCombinationsPerCell_r16__availabilityCombinations_r16 {
		A_SEQUENCE_OF(struct NR_AvailabilityCombination_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} availabilityCombinations_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_AvailabilityCombinationsPerCell_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_AvailabilityCombinationsPerCell_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_AvailabilityCombinationsPerCell_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_AvailabilityCombinationsPerCell_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_AvailabilityCombination-r16.h"

#endif	/* _NR_AvailabilityCombinationsPerCell_r16_H_ */
#include <asn_internal.h>