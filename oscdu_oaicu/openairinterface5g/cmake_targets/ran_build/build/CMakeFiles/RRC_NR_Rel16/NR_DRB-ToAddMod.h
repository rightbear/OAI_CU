/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_DRB_ToAddMod_H_
#define	_NR_DRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_DRB-Identity.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DRB_ToAddMod__cnAssociation_PR {
	NR_DRB_ToAddMod__cnAssociation_PR_NOTHING,	/* No components present */
	NR_DRB_ToAddMod__cnAssociation_PR_eps_BearerIdentity,
	NR_DRB_ToAddMod__cnAssociation_PR_sdap_Config
} NR_DRB_ToAddMod__cnAssociation_PR;
typedef enum NR_DRB_ToAddMod__reestablishPDCP {
	NR_DRB_ToAddMod__reestablishPDCP_true	= 0
} e_NR_DRB_ToAddMod__reestablishPDCP;
typedef enum NR_DRB_ToAddMod__recoverPDCP {
	NR_DRB_ToAddMod__recoverPDCP_true	= 0
} e_NR_DRB_ToAddMod__recoverPDCP;
typedef enum NR_DRB_ToAddMod__ext1__daps_Config_r16 {
	NR_DRB_ToAddMod__ext1__daps_Config_r16_true	= 0
} e_NR_DRB_ToAddMod__ext1__daps_Config_r16;

/* Forward declarations */
struct NR_PDCP_Config;
struct NR_SDAP_Config;

/* NR_DRB-ToAddMod */
typedef struct NR_DRB_ToAddMod {
	struct NR_DRB_ToAddMod__cnAssociation {
		NR_DRB_ToAddMod__cnAssociation_PR present;
		union NR_DRB_ToAddMod__NR_cnAssociation_u {
			long	 eps_BearerIdentity;
			struct NR_SDAP_Config	*sdap_Config;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cnAssociation;
	NR_DRB_Identity_t	 drb_Identity;
	long	*reestablishPDCP;	/* OPTIONAL */
	long	*recoverPDCP;	/* OPTIONAL */
	struct NR_PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_DRB_ToAddMod__ext1 {
		long	*daps_Config_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reestablishPDCP_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_recoverPDCP_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_daps_Config_r16_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DRB_ToAddMod_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PDCP-Config.h"
#include "NR_SDAP-Config.h"

#endif	/* _NR_DRB_ToAddMod_H_ */
#include <asn_internal.h>