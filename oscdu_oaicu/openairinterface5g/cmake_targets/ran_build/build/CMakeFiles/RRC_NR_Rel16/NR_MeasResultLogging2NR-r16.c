/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_MeasResultLogging2NR-r16.h"

asn_TYPE_member_t asn_MBR_NR_MeasResultLogging2NR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasResultLogging2NR_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasResultLogging2NR_r16, measResultListLoggingNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultListLoggingNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListLoggingNR-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_MeasResultLogging2NR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasResultLogging2NR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultListLoggingNR-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultLogging2NR_r16_specs_1 = {
	sizeof(struct NR_MeasResultLogging2NR_r16),
	offsetof(struct NR_MeasResultLogging2NR_r16, _asn_ctx),
	asn_MAP_NR_MeasResultLogging2NR_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasResultLogging2NR_r16 = {
	"MeasResultLogging2NR-r16",
	"MeasResultLogging2NR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasResultLogging2NR_r16_tags_1,
	sizeof(asn_DEF_NR_MeasResultLogging2NR_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultLogging2NR_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasResultLogging2NR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasResultLogging2NR_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultLogging2NR_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MeasResultLogging2NR_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_MeasResultLogging2NR_r16_specs_1	/* Additional specs */
};
