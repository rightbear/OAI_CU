/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/M3AP_R14`
 */

#include "M3AP_TNL-Information.h"

#include "M3AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_M3AP_TNL_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_TNL_Information, iPMCAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_IPAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iPMCAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_TNL_Information, iPSourceAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_IPAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iPSourceAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M3AP_TNL_Information, gTP_DLTEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gTP-DLTEID"
		},
	{ ATF_POINTER, 1, offsetof(struct M3AP_TNL_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M3AP_ProtocolExtensionContainer_1045P9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_M3AP_TNL_Information_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_M3AP_TNL_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M3AP_TNL_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iPMCAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iPSourceAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gTP-DLTEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M3AP_TNL_Information_specs_1 = {
	sizeof(struct M3AP_TNL_Information),
	offsetof(struct M3AP_TNL_Information, _asn_ctx),
	asn_MAP_M3AP_TNL_Information_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_M3AP_TNL_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M3AP_TNL_Information = {
	"TNL-Information",
	"TNL-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_M3AP_TNL_Information_tags_1,
	sizeof(asn_DEF_M3AP_TNL_Information_tags_1)
		/sizeof(asn_DEF_M3AP_TNL_Information_tags_1[0]), /* 1 */
	asn_DEF_M3AP_TNL_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_TNL_Information_tags_1)
		/sizeof(asn_DEF_M3AP_TNL_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_M3AP_TNL_Information_1,
	4,	/* Elements count */
	&asn_SPC_M3AP_TNL_Information_specs_1	/* Additional specs */
};
