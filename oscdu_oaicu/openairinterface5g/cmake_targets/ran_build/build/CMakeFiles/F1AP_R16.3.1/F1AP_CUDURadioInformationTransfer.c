/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_CUDURadioInformationTransfer.h"

asn_TYPE_member_t asn_MBR_F1AP_CUDURadioInformationTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_CUDURadioInformationTransfer, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolIE_Container_117P49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_CUDURadioInformationTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_CUDURadioInformationTransfer_specs_1 = {
	sizeof(struct F1AP_CUDURadioInformationTransfer),
	offsetof(struct F1AP_CUDURadioInformationTransfer, _asn_ctx),
	asn_MAP_F1AP_CUDURadioInformationTransfer_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_CUDURadioInformationTransfer = {
	"CUDURadioInformationTransfer",
	"CUDURadioInformationTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1,
	sizeof(asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1)
		/sizeof(asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1[0]), /* 1 */
	asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1)
		/sizeof(asn_DEF_F1AP_CUDURadioInformationTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_CUDURadioInformationTransfer_1,
	1,	/* Elements count */
	&asn_SPC_F1AP_CUDURadioInformationTransfer_specs_1	/* Additional specs */
};
