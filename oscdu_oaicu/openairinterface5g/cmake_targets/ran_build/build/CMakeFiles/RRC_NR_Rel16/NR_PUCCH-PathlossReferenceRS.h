/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_PUCCH_PathlossReferenceRS_H_
#define	_NR_PUCCH_PathlossReferenceRS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PUCCH-PathlossReferenceRS-Id.h"
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUCCH_PathlossReferenceRS__referenceSignal_PR {
	NR_PUCCH_PathlossReferenceRS__referenceSignal_PR_NOTHING,	/* No components present */
	NR_PUCCH_PathlossReferenceRS__referenceSignal_PR_ssb_Index,
	NR_PUCCH_PathlossReferenceRS__referenceSignal_PR_csi_RS_Index
} NR_PUCCH_PathlossReferenceRS__referenceSignal_PR;

/* NR_PUCCH-PathlossReferenceRS */
typedef struct NR_PUCCH_PathlossReferenceRS {
	NR_PUCCH_PathlossReferenceRS_Id_t	 pucch_PathlossReferenceRS_Id;
	struct NR_PUCCH_PathlossReferenceRS__referenceSignal {
		NR_PUCCH_PathlossReferenceRS__referenceSignal_PR present;
		union NR_PUCCH_PathlossReferenceRS__NR_referenceSignal_u {
			NR_SSB_Index_t	 ssb_Index;
			NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUCCH_PathlossReferenceRS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_PathlossReferenceRS;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_PathlossReferenceRS_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUCCH_PathlossReferenceRS_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PUCCH_PathlossReferenceRS_H_ */
#include <asn_internal.h>