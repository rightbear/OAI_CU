/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#ifndef	_F1AP_CauseRadioNetwork_H_
#define	_F1AP_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_CauseRadioNetwork {
	F1AP_CauseRadioNetwork_unspecified	= 0,
	F1AP_CauseRadioNetwork_rl_failure_rlc	= 1,
	F1AP_CauseRadioNetwork_unknown_or_already_allocated_gnb_cu_ue_f1ap_id	= 2,
	F1AP_CauseRadioNetwork_unknown_or_already_allocated_gnb_du_ue_f1ap_id	= 3,
	F1AP_CauseRadioNetwork_unknown_or_inconsistent_pair_of_ue_f1ap_id	= 4,
	F1AP_CauseRadioNetwork_interaction_with_other_procedure	= 5,
	F1AP_CauseRadioNetwork_not_supported_qci_Value	= 6,
	F1AP_CauseRadioNetwork_action_desirable_for_radio_reasons	= 7,
	F1AP_CauseRadioNetwork_no_radio_resources_available	= 8,
	F1AP_CauseRadioNetwork_procedure_cancelled	= 9,
	F1AP_CauseRadioNetwork_normal_release	= 10,
	/*
	 * Enumeration is extensible
	 */
	F1AP_CauseRadioNetwork_cell_not_available	= 11,
	F1AP_CauseRadioNetwork_rl_failure_others	= 12,
	F1AP_CauseRadioNetwork_ue_rejection	= 13,
	F1AP_CauseRadioNetwork_resources_not_available_for_the_slice	= 14,
	F1AP_CauseRadioNetwork_amf_initiated_abnormal_release	= 15,
	F1AP_CauseRadioNetwork_release_due_to_pre_emption	= 16,
	F1AP_CauseRadioNetwork_plmn_not_served_by_the_gNB_CU	= 17,
	F1AP_CauseRadioNetwork_multiple_drb_id_instances	= 18,
	F1AP_CauseRadioNetwork_unknown_drb_id	= 19,
	F1AP_CauseRadioNetwork_multiple_bh_rlc_ch_id_instances	= 20,
	F1AP_CauseRadioNetwork_unknown_bh_rlc_ch_id	= 21,
	F1AP_CauseRadioNetwork_cho_cpc_resources_tobechanged	= 22,
	F1AP_CauseRadioNetwork_nPN_not_supported	= 23,
	F1AP_CauseRadioNetwork_nPN_access_denied	= 24,
	F1AP_CauseRadioNetwork_gNB_CU_Cell_Capacity_Exceeded	= 25,
	F1AP_CauseRadioNetwork_report_characteristics_empty	= 26,
	F1AP_CauseRadioNetwork_existing_measurement_ID	= 27,
	F1AP_CauseRadioNetwork_measurement_temporarily_not_available	= 28,
	F1AP_CauseRadioNetwork_measurement_not_supported_for_the_object	= 29
} e_F1AP_CauseRadioNetwork;

/* F1AP_CauseRadioNetwork */
typedef long	 F1AP_CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_CauseRadioNetwork_specs_1;
asn_struct_free_f F1AP_CauseRadioNetwork_free;
asn_struct_print_f F1AP_CauseRadioNetwork_print;
asn_constr_check_f F1AP_CauseRadioNetwork_constraint;
ber_type_decoder_f F1AP_CauseRadioNetwork_decode_ber;
der_type_encoder_f F1AP_CauseRadioNetwork_encode_der;
xer_type_decoder_f F1AP_CauseRadioNetwork_decode_xer;
xer_type_encoder_f F1AP_CauseRadioNetwork_encode_xer;
per_type_decoder_f F1AP_CauseRadioNetwork_decode_uper;
per_type_encoder_f F1AP_CauseRadioNetwork_encode_uper;
per_type_decoder_f F1AP_CauseRadioNetwork_decode_aper;
per_type_encoder_f F1AP_CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_CauseRadioNetwork_H_ */
#include <asn_internal.h>