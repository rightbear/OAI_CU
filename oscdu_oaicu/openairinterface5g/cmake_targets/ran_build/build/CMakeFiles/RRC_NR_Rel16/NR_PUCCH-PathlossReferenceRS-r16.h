/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_PUCCH_PathlossReferenceRS_r16_H_
#define	_NR_PUCCH_PathlossReferenceRS_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PUCCH-PathlossReferenceRS-Id-v1610.h"
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR {
	NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR_NOTHING,	/* No components present */
	NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR_ssb_Index_r16,
	NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR_csi_RS_Index_r16
} NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR;

/* NR_PUCCH-PathlossReferenceRS-r16 */
typedef struct NR_PUCCH_PathlossReferenceRS_r16 {
	NR_PUCCH_PathlossReferenceRS_Id_v1610_t	 pucch_PathlossReferenceRS_Id_r16;
	struct NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16 {
		NR_PUCCH_PathlossReferenceRS_r16__referenceSignal_r16_PR present;
		union NR_PUCCH_PathlossReferenceRS_r16__NR_referenceSignal_r16_u {
			NR_SSB_Index_t	 ssb_Index_r16;
			NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUCCH_PathlossReferenceRS_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_PathlossReferenceRS_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_PathlossReferenceRS_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUCCH_PathlossReferenceRS_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PUCCH_PathlossReferenceRS_r16_H_ */
#include <asn_internal.h>