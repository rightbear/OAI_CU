/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_SLRB-Config-r16.h"

asn_TYPE_member_t asn_MBR_NR_SLRB_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SLRB_Config_r16, slrb_PC5_ConfigIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SLRB_PC5_ConfigIndex_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slrb-PC5-ConfigIndex-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SLRB_Config_r16, sl_SDAP_ConfigPC5_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_SDAP_ConfigPC5_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-SDAP-ConfigPC5-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SLRB_Config_r16, sl_PDCP_ConfigPC5_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_PDCP_ConfigPC5_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-PDCP-ConfigPC5-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SLRB_Config_r16, sl_RLC_ConfigPC5_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_RLC_ConfigPC5_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-RLC-ConfigPC5-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SLRB_Config_r16, sl_MAC_LogicalChannelConfigPC5_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_LogicalChannelConfigPC5_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MAC-LogicalChannelConfigPC5-r16"
		},
};
static const int asn_MAP_NR_SLRB_Config_r16_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_SLRB_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SLRB_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* slrb-PC5-ConfigIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-SDAP-ConfigPC5-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-PDCP-ConfigPC5-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-RLC-ConfigPC5-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sl-MAC-LogicalChannelConfigPC5-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SLRB_Config_r16_specs_1 = {
	sizeof(struct NR_SLRB_Config_r16),
	offsetof(struct NR_SLRB_Config_r16, _asn_ctx),
	asn_MAP_NR_SLRB_Config_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_SLRB_Config_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SLRB_Config_r16 = {
	"SLRB-Config-r16",
	"SLRB-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SLRB_Config_r16_tags_1,
	sizeof(asn_DEF_NR_SLRB_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SLRB_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SLRB_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SLRB_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SLRB_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SLRB_Config_r16_1,
	5,	/* Elements count */
	&asn_SPC_NR_SLRB_Config_r16_specs_1	/* Additional specs */
};
