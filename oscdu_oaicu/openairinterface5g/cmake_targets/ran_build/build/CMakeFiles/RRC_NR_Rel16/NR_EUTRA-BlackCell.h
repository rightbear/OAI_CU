/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_EUTRA_BlackCell_H_
#define	_NR_EUTRA_BlackCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_EUTRA-CellIndex.h"
#include "NR_EUTRA-PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_EUTRA-BlackCell */
typedef struct NR_EUTRA_BlackCell {
	NR_EUTRA_CellIndex_t	 cellIndexEUTRA;
	NR_EUTRA_PhysCellIdRange_t	 physCellIdRange;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EUTRA_BlackCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_BlackCell;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_EUTRA_BlackCell_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EUTRA_BlackCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_EUTRA_BlackCell_H_ */
#include <asn_internal.h>