/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#ifndef	_LTE_EstablishmentCause_5GC_H_
#define	_LTE_EstablishmentCause_5GC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_EstablishmentCause_5GC {
	LTE_EstablishmentCause_5GC_emergency	= 0,
	LTE_EstablishmentCause_5GC_highPriorityAccess	= 1,
	LTE_EstablishmentCause_5GC_mt_Access	= 2,
	LTE_EstablishmentCause_5GC_mo_Signalling	= 3,
	LTE_EstablishmentCause_5GC_mo_Data	= 4,
	LTE_EstablishmentCause_5GC_mo_VoiceCall	= 5,
	LTE_EstablishmentCause_5GC_spare2	= 6,
	LTE_EstablishmentCause_5GC_spare1	= 7
} e_LTE_EstablishmentCause_5GC;

/* LTE_EstablishmentCause-5GC */
typedef long	 LTE_EstablishmentCause_5GC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_EstablishmentCause_5GC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_EstablishmentCause_5GC;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_EstablishmentCause_5GC_specs_1;
asn_struct_free_f LTE_EstablishmentCause_5GC_free;
asn_struct_print_f LTE_EstablishmentCause_5GC_print;
asn_constr_check_f LTE_EstablishmentCause_5GC_constraint;
ber_type_decoder_f LTE_EstablishmentCause_5GC_decode_ber;
der_type_encoder_f LTE_EstablishmentCause_5GC_encode_der;
xer_type_decoder_f LTE_EstablishmentCause_5GC_decode_xer;
xer_type_encoder_f LTE_EstablishmentCause_5GC_encode_xer;
per_type_decoder_f LTE_EstablishmentCause_5GC_decode_uper;
per_type_encoder_f LTE_EstablishmentCause_5GC_encode_uper;
per_type_decoder_f LTE_EstablishmentCause_5GC_decode_aper;
per_type_encoder_f LTE_EstablishmentCause_5GC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_EstablishmentCause_5GC_H_ */
#include <asn_internal.h>