/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#ifndef	_F1AP_M6_Links_to_log_H_
#define	_F1AP_M6_Links_to_log_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_M6_Links_to_log {
	F1AP_M6_Links_to_log_uplink	= 0,
	F1AP_M6_Links_to_log_downlink	= 1,
	F1AP_M6_Links_to_log_both_uplink_and_downlink	= 2
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_M6_Links_to_log;

/* F1AP_M6-Links-to-log */
typedef long	 F1AP_M6_Links_to_log_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_M6_Links_to_log_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_M6_Links_to_log;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_M6_Links_to_log_specs_1;
asn_struct_free_f F1AP_M6_Links_to_log_free;
asn_struct_print_f F1AP_M6_Links_to_log_print;
asn_constr_check_f F1AP_M6_Links_to_log_constraint;
ber_type_decoder_f F1AP_M6_Links_to_log_decode_ber;
der_type_encoder_f F1AP_M6_Links_to_log_encode_der;
xer_type_decoder_f F1AP_M6_Links_to_log_decode_xer;
xer_type_encoder_f F1AP_M6_Links_to_log_encode_xer;
per_type_decoder_f F1AP_M6_Links_to_log_decode_uper;
per_type_encoder_f F1AP_M6_Links_to_log_encode_uper;
per_type_decoder_f F1AP_M6_Links_to_log_decode_aper;
per_type_encoder_f F1AP_M6_Links_to_log_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_M6_Links_to_log_H_ */
#include <asn_internal.h>