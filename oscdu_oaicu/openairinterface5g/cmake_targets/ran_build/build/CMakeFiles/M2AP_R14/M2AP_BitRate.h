/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/R14/m2ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -DEMIT_ASN_DEBUG=1 -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/M2AP_R14`
 */

#ifndef	_M2AP_BitRate_H_
#define	_M2AP_BitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M2AP_BitRate */
typedef INTEGER_t	 M2AP_BitRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_BitRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_BitRate;
asn_struct_free_f M2AP_BitRate_free;
asn_struct_print_f M2AP_BitRate_print;
asn_constr_check_f M2AP_BitRate_constraint;
ber_type_decoder_f M2AP_BitRate_decode_ber;
der_type_encoder_f M2AP_BitRate_encode_der;
xer_type_decoder_f M2AP_BitRate_decode_xer;
xer_type_encoder_f M2AP_BitRate_encode_xer;
per_type_decoder_f M2AP_BitRate_decode_uper;
per_type_encoder_f M2AP_BitRate_encode_uper;
per_type_decoder_f M2AP_BitRate_decode_aper;
per_type_encoder_f M2AP_BitRate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_BitRate_H_ */
#include <asn_internal.h>