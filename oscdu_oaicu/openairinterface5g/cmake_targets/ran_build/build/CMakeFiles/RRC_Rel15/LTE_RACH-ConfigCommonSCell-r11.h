/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_RACH_ConfigCommonSCell_r11_H_
#define	_LTE_RACH_ConfigCommonSCell_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PowerRampingParameters.h"
#include "LTE_PreambleTransMax.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RACH-ConfigCommonSCell-r11 */
typedef struct LTE_RACH_ConfigCommonSCell_r11 {
	LTE_PowerRampingParameters_t	 powerRampingParameters_r11;
	struct LTE_RACH_ConfigCommonSCell_r11__ra_SupervisionInfo_r11 {
		LTE_PreambleTransMax_t	 preambleTransMax_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ra_SupervisionInfo_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RACH_ConfigCommonSCell_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RACH_ConfigCommonSCell_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RACH_ConfigCommonSCell_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RACH_ConfigCommonSCell_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RACH_ConfigCommonSCell_r11_H_ */
#include <asn_internal.h>