/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/X2AP_R15`
 */

#include "X2AP_LocationInformationSgNB.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_LocationInformationSgNB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_LocationInformationSgNB, pSCell_id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pSCell-id"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_LocationInformationSgNB, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P158,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_LocationInformationSgNB_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_X2AP_LocationInformationSgNB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_LocationInformationSgNB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pSCell-id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_LocationInformationSgNB_specs_1 = {
	sizeof(struct X2AP_LocationInformationSgNB),
	offsetof(struct X2AP_LocationInformationSgNB, _asn_ctx),
	asn_MAP_X2AP_LocationInformationSgNB_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_X2AP_LocationInformationSgNB_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_LocationInformationSgNB = {
	"LocationInformationSgNB",
	"LocationInformationSgNB",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_LocationInformationSgNB_tags_1,
	sizeof(asn_DEF_X2AP_LocationInformationSgNB_tags_1)
		/sizeof(asn_DEF_X2AP_LocationInformationSgNB_tags_1[0]), /* 1 */
	asn_DEF_X2AP_LocationInformationSgNB_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_LocationInformationSgNB_tags_1)
		/sizeof(asn_DEF_X2AP_LocationInformationSgNB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_LocationInformationSgNB_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_LocationInformationSgNB_specs_1	/* Additional specs */
};
