/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_SL_CommTxPoolSensingConfig_r14_H_
#define	_LTE_SL_CommTxPoolSensingConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-PSSCH-TxConfigList-r14.h"
#include "LTE_SL-ThresPSSCH-RSRP-List-r14.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14 {
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_v0	= 0,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_v0dot2	= 1,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_v0dot4	= 2,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_v0dot6	= 3,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_v0dot8	= 4,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_spare3	= 5,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_spare2	= 6,
	LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14_spare1	= 7
} e_LTE_SL_CommTxPoolSensingConfig_r14__probResourceKeep_r14;
typedef enum LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14 {
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n1	= 0,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n2	= 1,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n3	= 2,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n4	= 3,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n5	= 4,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n6	= 5,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n7	= 6,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n8	= 7,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_n9	= 8,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare7	= 9,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare6	= 10,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare5	= 11,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare4	= 12,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare3	= 13,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare2	= 14,
	LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14_spare1	= 15
} e_LTE_SL_CommTxPoolSensingConfig_r14__sl_ReselectAfter_r14;

/* Forward declarations */
struct LTE_SL_RestrictResourceReservationPeriodList_r14;

/* LTE_SL-CommTxPoolSensingConfig-r14 */
typedef struct LTE_SL_CommTxPoolSensingConfig_r14 {
	LTE_SL_PSSCH_TxConfigList_r14_t	 pssch_TxConfigList_r14;
	LTE_SL_ThresPSSCH_RSRP_List_r14_t	 thresPSSCH_RSRP_List_r14;
	struct LTE_SL_RestrictResourceReservationPeriodList_r14	*restrictResourceReservationPeriod_r14;	/* OPTIONAL */
	long	 probResourceKeep_r14;
	struct LTE_SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14 {
		long	 minNumCandidateSF_r14;
		BIT_STRING_t	 gapCandidateSensing_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p2x_SensingConfig_r14;
	long	*sl_ReselectAfter_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_CommTxPoolSensingConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_probResourceKeep_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_ReselectAfter_r14_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_CommTxPoolSensingConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CommTxPoolSensingConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_CommTxPoolSensingConfig_r14_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-RestrictResourceReservationPeriodList-r14.h"

#endif	/* _LTE_SL_CommTxPoolSensingConfig_r14_H_ */
#include <asn_internal.h>