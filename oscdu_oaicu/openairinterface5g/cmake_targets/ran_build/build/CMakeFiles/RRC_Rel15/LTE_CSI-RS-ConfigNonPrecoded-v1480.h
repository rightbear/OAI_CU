/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_CSI_RS_ConfigNonPrecoded_v1480_H_
#define	_LTE_CSI_RS_ConfigNonPrecoded_v1480_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_CSI-RS-Config-NZP-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480 {
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n5	= 0,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n6	= 1,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n7	= 2,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n10	= 3,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n12	= 4,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n14	= 5,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480_n16	= 6
} e_LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN1_v1480;
typedef enum LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN2_r1480 {
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN2_r1480_n5	= 0,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN2_r1480_n6	= 1,
	LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN2_r1480_n7	= 2
} e_LTE_CSI_RS_ConfigNonPrecoded_v1480__codebookConfigN2_r1480;

/* Forward declarations */
struct LTE_CSI_RS_ConfigNZP_EMIMO_v1430;

/* LTE_CSI-RS-ConfigNonPrecoded-v1480 */
typedef struct LTE_CSI_RS_ConfigNonPrecoded_v1480 {
	struct LTE_CSI_RS_ConfigNZP_EMIMO_v1430	*csi_RS_ConfigNZP_EMIMO_v1480;	/* OPTIONAL */
	long	*codebookConfigN1_v1480;	/* OPTIONAL */
	long	*codebookConfigN2_r1480;	/* OPTIONAL */
	LTE_CSI_RS_Config_NZP_v1430_t	 nzp_ResourceConfigTM9_Original_v1480;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigNonPrecoded_v1480_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_codebookConfigN1_v1480_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_codebookConfigN2_r1480_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1480;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigNonPrecoded_v1480_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigNonPrecoded_v1480_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-RS-ConfigNZP-EMIMO-v1430.h"

#endif	/* _LTE_CSI_RS_ConfigNonPrecoded_v1480_H_ */
#include <asn_internal.h>