/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_FreqSeparationClass_H_
#define	_NR_FreqSeparationClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FreqSeparationClass {
	NR_FreqSeparationClass_mhz800	= 0,
	NR_FreqSeparationClass_mhz1200	= 1,
	NR_FreqSeparationClass_mhz1400	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NR_FreqSeparationClass;

/* NR_FreqSeparationClass */
typedef long	 NR_FreqSeparationClass_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_FreqSeparationClass_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_FreqSeparationClass;
extern const asn_INTEGER_specifics_t asn_SPC_NR_FreqSeparationClass_specs_1;
asn_struct_free_f NR_FreqSeparationClass_free;
asn_struct_print_f NR_FreqSeparationClass_print;
asn_constr_check_f NR_FreqSeparationClass_constraint;
ber_type_decoder_f NR_FreqSeparationClass_decode_ber;
der_type_encoder_f NR_FreqSeparationClass_encode_der;
xer_type_decoder_f NR_FreqSeparationClass_decode_xer;
xer_type_encoder_f NR_FreqSeparationClass_encode_xer;
per_type_decoder_f NR_FreqSeparationClass_decode_uper;
per_type_encoder_f NR_FreqSeparationClass_encode_uper;
per_type_decoder_f NR_FreqSeparationClass_decode_aper;
per_type_encoder_f NR_FreqSeparationClass_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FreqSeparationClass_H_ */
#include <asn_internal.h>