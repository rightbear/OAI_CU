/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_SL_SDAP_Config_r16_H_
#define	_NR_SL_SDAP_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_SDAP_Config_r16__sl_SDAP_Header_r16 {
	NR_SL_SDAP_Config_r16__sl_SDAP_Header_r16_present	= 0,
	NR_SL_SDAP_Config_r16__sl_SDAP_Header_r16_absent	= 1
} e_NR_SL_SDAP_Config_r16__sl_SDAP_Header_r16;
typedef enum NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR {
	NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR_NOTHING,	/* No components present */
	NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR_sl_MappedQoS_FlowsList_r16,
	NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR_sl_MappedQoS_FlowsListDedicated_r16
} NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR;
typedef enum NR_SL_SDAP_Config_r16__sl_CastType_r16 {
	NR_SL_SDAP_Config_r16__sl_CastType_r16_broadcast	= 0,
	NR_SL_SDAP_Config_r16__sl_CastType_r16_groupcast	= 1,
	NR_SL_SDAP_Config_r16__sl_CastType_r16_unicast	= 2,
	NR_SL_SDAP_Config_r16__sl_CastType_r16_spare1	= 3
} e_NR_SL_SDAP_Config_r16__sl_CastType_r16;

/* Forward declarations */
struct NR_SL_MappedQoS_FlowsListDedicated_r16;
struct NR_SL_QoS_Profile_r16;

/* NR_SL-SDAP-Config-r16 */
typedef struct NR_SL_SDAP_Config_r16 {
	long	 sl_SDAP_Header_r16;
	BOOLEAN_t	 sl_DefaultRB_r16;
	struct NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16 {
		NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16_PR present;
		union NR_SL_SDAP_Config_r16__NR_sl_MappedQoS_Flows_r16_u {
			struct NR_SL_SDAP_Config_r16__sl_MappedQoS_Flows_r16__sl_MappedQoS_FlowsList_r16 {
				A_SEQUENCE_OF(struct NR_SL_QoS_Profile_r16) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *sl_MappedQoS_FlowsList_r16;
			struct NR_SL_MappedQoS_FlowsListDedicated_r16	*sl_MappedQoS_FlowsListDedicated_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_MappedQoS_Flows_r16;
	long	*sl_CastType_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_SDAP_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_SDAP_Header_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_CastType_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_SDAP_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_SDAP_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_SDAP_Config_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-MappedQoS-FlowsListDedicated-r16.h"
#include "NR_SL-QoS-Profile-r16.h"

#endif	/* _NR_SL_SDAP_Config_r16_H_ */
#include <asn_internal.h>