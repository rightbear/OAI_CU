/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_ReportInterval_H_
#define	_LTE_ReportInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ReportInterval {
	LTE_ReportInterval_ms120	= 0,
	LTE_ReportInterval_ms240	= 1,
	LTE_ReportInterval_ms480	= 2,
	LTE_ReportInterval_ms640	= 3,
	LTE_ReportInterval_ms1024	= 4,
	LTE_ReportInterval_ms2048	= 5,
	LTE_ReportInterval_ms5120	= 6,
	LTE_ReportInterval_ms10240	= 7,
	LTE_ReportInterval_min1	= 8,
	LTE_ReportInterval_min6	= 9,
	LTE_ReportInterval_min12	= 10,
	LTE_ReportInterval_min30	= 11,
	LTE_ReportInterval_min60	= 12,
	LTE_ReportInterval_spare3	= 13,
	LTE_ReportInterval_spare2	= 14,
	LTE_ReportInterval_spare1	= 15
} e_LTE_ReportInterval;

/* LTE_ReportInterval */
typedef long	 LTE_ReportInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_ReportInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReportInterval;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_ReportInterval_specs_1;
asn_struct_free_f LTE_ReportInterval_free;
asn_struct_print_f LTE_ReportInterval_print;
asn_constr_check_f LTE_ReportInterval_constraint;
ber_type_decoder_f LTE_ReportInterval_decode_ber;
der_type_encoder_f LTE_ReportInterval_encode_der;
xer_type_decoder_f LTE_ReportInterval_decode_xer;
xer_type_encoder_f LTE_ReportInterval_encode_xer;
per_type_decoder_f LTE_ReportInterval_decode_uper;
per_type_encoder_f LTE_ReportInterval_encode_uper;
per_type_decoder_f LTE_ReportInterval_decode_aper;
per_type_encoder_f LTE_ReportInterval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ReportInterval_H_ */
#include <asn_internal.h>