/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_CSI_ReportPeriodicityAndOffset_H_
#define	_NR_CSI_ReportPeriodicityAndOffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CSI_ReportPeriodicityAndOffset_PR {
	NR_CSI_ReportPeriodicityAndOffset_PR_NOTHING,	/* No components present */
	NR_CSI_ReportPeriodicityAndOffset_PR_slots4,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots5,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots8,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots10,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots16,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots20,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots40,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots80,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots160,
	NR_CSI_ReportPeriodicityAndOffset_PR_slots320
} NR_CSI_ReportPeriodicityAndOffset_PR;

/* NR_CSI-ReportPeriodicityAndOffset */
typedef struct NR_CSI_ReportPeriodicityAndOffset {
	NR_CSI_ReportPeriodicityAndOffset_PR present;
	union NR_CSI_ReportPeriodicityAndOffset_u {
		long	 slots4;
		long	 slots5;
		long	 slots8;
		long	 slots10;
		long	 slots16;
		long	 slots20;
		long	 slots40;
		long	 slots80;
		long	 slots160;
		long	 slots320;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CSI_ReportPeriodicityAndOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CSI_ReportPeriodicityAndOffset;
extern asn_CHOICE_specifics_t asn_SPC_NR_CSI_ReportPeriodicityAndOffset_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CSI_ReportPeriodicityAndOffset_1[10];
extern asn_per_constraints_t asn_PER_type_NR_CSI_ReportPeriodicityAndOffset_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CSI_ReportPeriodicityAndOffset_H_ */
#include <asn_internal.h>