/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/X2AP_R15`
 */

#ifndef	_X2AP_ProcedureCode_H_
#define	_X2AP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_ProcedureCode */
typedef long	 X2AP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ProcedureCode;
asn_struct_free_f X2AP_ProcedureCode_free;
asn_struct_print_f X2AP_ProcedureCode_print;
asn_constr_check_f X2AP_ProcedureCode_constraint;
ber_type_decoder_f X2AP_ProcedureCode_decode_ber;
der_type_encoder_f X2AP_ProcedureCode_encode_der;
xer_type_decoder_f X2AP_ProcedureCode_decode_xer;
xer_type_encoder_f X2AP_ProcedureCode_encode_xer;
per_type_decoder_f X2AP_ProcedureCode_decode_uper;
per_type_encoder_f X2AP_ProcedureCode_encode_uper;
per_type_decoder_f X2AP_ProcedureCode_decode_aper;
per_type_encoder_f X2AP_ProcedureCode_encode_aper;
#define X2AP_ProcedureCode_id_handoverPreparation	((X2AP_ProcedureCode_t)0)
#define X2AP_ProcedureCode_id_handoverCancel	((X2AP_ProcedureCode_t)1)
#define X2AP_ProcedureCode_id_loadIndication	((X2AP_ProcedureCode_t)2)
#define X2AP_ProcedureCode_id_errorIndication	((X2AP_ProcedureCode_t)3)
#define X2AP_ProcedureCode_id_snStatusTransfer	((X2AP_ProcedureCode_t)4)
#define X2AP_ProcedureCode_id_uEContextRelease	((X2AP_ProcedureCode_t)5)
#define X2AP_ProcedureCode_id_x2Setup	((X2AP_ProcedureCode_t)6)
#define X2AP_ProcedureCode_id_reset	((X2AP_ProcedureCode_t)7)
#define X2AP_ProcedureCode_id_eNBConfigurationUpdate	((X2AP_ProcedureCode_t)8)
#define X2AP_ProcedureCode_id_resourceStatusReportingInitiation	((X2AP_ProcedureCode_t)9)
#define X2AP_ProcedureCode_id_resourceStatusReporting	((X2AP_ProcedureCode_t)10)
#define X2AP_ProcedureCode_id_privateMessage	((X2AP_ProcedureCode_t)11)
#define X2AP_ProcedureCode_id_mobilitySettingsChange	((X2AP_ProcedureCode_t)12)
#define X2AP_ProcedureCode_id_rLFIndication	((X2AP_ProcedureCode_t)13)
#define X2AP_ProcedureCode_id_handoverReport	((X2AP_ProcedureCode_t)14)
#define X2AP_ProcedureCode_id_cellActivation	((X2AP_ProcedureCode_t)15)
#define X2AP_ProcedureCode_id_x2Release	((X2AP_ProcedureCode_t)16)
#define X2AP_ProcedureCode_id_x2APMessageTransfer	((X2AP_ProcedureCode_t)17)
#define X2AP_ProcedureCode_id_x2Removal	((X2AP_ProcedureCode_t)18)
#define X2AP_ProcedureCode_id_seNBAdditionPreparation	((X2AP_ProcedureCode_t)19)
#define X2AP_ProcedureCode_id_seNBReconfigurationCompletion	((X2AP_ProcedureCode_t)20)
#define X2AP_ProcedureCode_id_meNBinitiatedSeNBModificationPreparation	((X2AP_ProcedureCode_t)21)
#define X2AP_ProcedureCode_id_seNBinitiatedSeNBModification	((X2AP_ProcedureCode_t)22)
#define X2AP_ProcedureCode_id_meNBinitiatedSeNBRelease	((X2AP_ProcedureCode_t)23)
#define X2AP_ProcedureCode_id_seNBinitiatedSeNBRelease	((X2AP_ProcedureCode_t)24)
#define X2AP_ProcedureCode_id_seNBCounterCheck	((X2AP_ProcedureCode_t)25)
#define X2AP_ProcedureCode_id_retrieveUEContext	((X2AP_ProcedureCode_t)26)
#define X2AP_ProcedureCode_id_sgNBAdditionPreparation	((X2AP_ProcedureCode_t)27)
#define X2AP_ProcedureCode_id_sgNBReconfigurationCompletion	((X2AP_ProcedureCode_t)28)
#define X2AP_ProcedureCode_id_meNBinitiatedSgNBModificationPreparation	((X2AP_ProcedureCode_t)29)
#define X2AP_ProcedureCode_id_sgNBinitiatedSgNBModification	((X2AP_ProcedureCode_t)30)
#define X2AP_ProcedureCode_id_meNBinitiatedSgNBRelease	((X2AP_ProcedureCode_t)31)
#define X2AP_ProcedureCode_id_sgNBinitiatedSgNBRelease	((X2AP_ProcedureCode_t)32)
#define X2AP_ProcedureCode_id_sgNBCounterCheck	((X2AP_ProcedureCode_t)33)
#define X2AP_ProcedureCode_id_sgNBChange	((X2AP_ProcedureCode_t)34)
#define X2AP_ProcedureCode_id_rRCTransfer	((X2AP_ProcedureCode_t)35)
#define X2AP_ProcedureCode_id_endcX2Setup	((X2AP_ProcedureCode_t)36)
#define X2AP_ProcedureCode_id_endcConfigurationUpdate	((X2AP_ProcedureCode_t)37)
#define X2AP_ProcedureCode_id_secondaryRATDataUsageReport	((X2AP_ProcedureCode_t)38)
#define X2AP_ProcedureCode_id_endcCellActivation	((X2AP_ProcedureCode_t)39)
#define X2AP_ProcedureCode_id_endcPartialReset	((X2AP_ProcedureCode_t)40)
#define X2AP_ProcedureCode_id_eUTRANRCellResourceCoordination	((X2AP_ProcedureCode_t)41)
#define X2AP_ProcedureCode_id_SgNBActivityNotification	((X2AP_ProcedureCode_t)42)
#define X2AP_ProcedureCode_id_endcX2Removal	((X2AP_ProcedureCode_t)43)
#define X2AP_ProcedureCode_id_dataForwardingAddressIndication	((X2AP_ProcedureCode_t)44)
#define X2AP_ProcedureCode_id_gNBStatusIndication	((X2AP_ProcedureCode_t)45)
#define X2AP_ProcedureCode_id_deactivateTrace	((X2AP_ProcedureCode_t)46)
#define X2AP_ProcedureCode_id_traceStart	((X2AP_ProcedureCode_t)47)
#define X2AP_ProcedureCode_id_endcConfigurationTransfer	((X2AP_ProcedureCode_t)48)

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ProcedureCode_H_ */
#include <asn_internal.h>