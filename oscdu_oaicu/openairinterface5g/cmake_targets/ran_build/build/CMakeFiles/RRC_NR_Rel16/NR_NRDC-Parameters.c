/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_NRDC-Parameters.h"

static const ber_tlv_tag_t asn_DEF_NR_dummy_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_dummy_specs_9 = {
	sizeof(struct NR_NRDC_Parameters__dummy),
	offsetof(struct NR_NRDC_Parameters__dummy, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dummy_9 = {
	"dummy",
	"dummy",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_dummy_tags_9,
	sizeof(asn_DEF_NR_dummy_tags_9)
		/sizeof(asn_DEF_NR_dummy_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_dummy_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_dummy_tags_9)
		/sizeof(asn_DEF_NR_dummy_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_dummy_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_NRDC_Parameters_1[] = {
	{ ATF_POINTER, 8, offsetof(struct NR_NRDC_Parameters, measAndMobParametersNRDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasAndMobParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersNRDC"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_NRDC_Parameters, generalParametersNRDC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_GeneralParametersMRDC_XDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generalParametersNRDC"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_NRDC_Parameters, fdd_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_NRDC_Parameters, tdd_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_NRDC_Parameters, fr1_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_NRDC_Parameters, fr2_Add_UE_NRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr2-Add-UE-NRDC-Capabilities"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_NRDC_Parameters, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy2"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_NRDC_Parameters, dummy),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_NR_dummy_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_NR_NRDC_Parameters_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_NR_NRDC_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_NRDC_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measAndMobParametersNRDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* generalParametersNRDC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fdd-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tdd-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fr1-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* fr2-Add-UE-NRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dummy2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* dummy */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_NRDC_Parameters_specs_1 = {
	sizeof(struct NR_NRDC_Parameters),
	offsetof(struct NR_NRDC_Parameters, _asn_ctx),
	asn_MAP_NR_NRDC_Parameters_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NR_NRDC_Parameters_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_NRDC_Parameters = {
	"NRDC-Parameters",
	"NRDC-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_NRDC_Parameters_tags_1,
	sizeof(asn_DEF_NR_NRDC_Parameters_tags_1)
		/sizeof(asn_DEF_NR_NRDC_Parameters_tags_1[0]), /* 1 */
	asn_DEF_NR_NRDC_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_NRDC_Parameters_tags_1)
		/sizeof(asn_DEF_NR_NRDC_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_NRDC_Parameters_1,
	8,	/* Elements count */
	&asn_SPC_NR_NRDC_Parameters_specs_1	/* Additional specs */
};
