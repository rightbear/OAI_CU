/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_TimeReferenceInformation.h"

#include "F1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_F1AP_TimeReferenceInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_TimeReferenceInformation, referenceTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ReferenceTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_TimeReferenceInformation, referenceSFN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ReferenceSFN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceSFN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_TimeReferenceInformation, uncertainty),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_Uncertainty,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uncertainty"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_TimeReferenceInformation, timeInformationType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_TimeInformationType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeInformationType"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_TimeReferenceInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_154P297,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_TimeReferenceInformation_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_F1AP_TimeReferenceInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_TimeReferenceInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceSFN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uncertainty */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeInformationType */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_TimeReferenceInformation_specs_1 = {
	sizeof(struct F1AP_TimeReferenceInformation),
	offsetof(struct F1AP_TimeReferenceInformation, _asn_ctx),
	asn_MAP_F1AP_TimeReferenceInformation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_F1AP_TimeReferenceInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_TimeReferenceInformation = {
	"TimeReferenceInformation",
	"TimeReferenceInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_TimeReferenceInformation_tags_1,
	sizeof(asn_DEF_F1AP_TimeReferenceInformation_tags_1)
		/sizeof(asn_DEF_F1AP_TimeReferenceInformation_tags_1[0]), /* 1 */
	asn_DEF_F1AP_TimeReferenceInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_TimeReferenceInformation_tags_1)
		/sizeof(asn_DEF_F1AP_TimeReferenceInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_TimeReferenceInformation_1,
	5,	/* Elements count */
	&asn_SPC_F1AP_TimeReferenceInformation_specs_1	/* Additional specs */
};
