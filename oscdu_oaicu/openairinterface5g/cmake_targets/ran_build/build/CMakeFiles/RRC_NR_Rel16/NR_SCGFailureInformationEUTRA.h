/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_SCGFailureInformationEUTRA_H_
#define	_NR_SCGFailureInformationEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SCGFailureInformationEUTRA__criticalExtensions_PR {
	NR_SCGFailureInformationEUTRA__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_SCGFailureInformationEUTRA__criticalExtensions_PR_scgFailureInformationEUTRA,
	NR_SCGFailureInformationEUTRA__criticalExtensions_PR_criticalExtensionsFuture
} NR_SCGFailureInformationEUTRA__criticalExtensions_PR;

/* Forward declarations */
struct NR_SCGFailureInformationEUTRA_IEs;

/* NR_SCGFailureInformationEUTRA */
typedef struct NR_SCGFailureInformationEUTRA {
	struct NR_SCGFailureInformationEUTRA__criticalExtensions {
		NR_SCGFailureInformationEUTRA__criticalExtensions_PR present;
		union NR_SCGFailureInformationEUTRA__NR_criticalExtensions_u {
			struct NR_SCGFailureInformationEUTRA_IEs	*scgFailureInformationEUTRA;
			struct NR_SCGFailureInformationEUTRA__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SCGFailureInformationEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SCGFailureInformationEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SCGFailureInformationEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SCGFailureInformationEUTRA_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SCGFailureInformationEUTRA-IEs.h"

#endif	/* _NR_SCGFailureInformationEUTRA_H_ */
#include <asn_internal.h>