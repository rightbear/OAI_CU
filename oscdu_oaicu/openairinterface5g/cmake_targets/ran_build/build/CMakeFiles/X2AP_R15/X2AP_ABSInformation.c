/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/X2AP_R15`
 */

#include "X2AP_ABSInformation.h"

asn_per_constraints_t asn_PER_type_X2AP_ABSInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_ABSInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformation, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ABSInformationFDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformation, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ABSInformationTDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_ABSInformation, choice.abs_inactive),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"abs-inactive"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ABSInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* abs-inactive */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_ABSInformation_specs_1 = {
	sizeof(struct X2AP_ABSInformation),
	offsetof(struct X2AP_ABSInformation, _asn_ctx),
	offsetof(struct X2AP_ABSInformation, present),
	sizeof(((struct X2AP_ABSInformation *)0)->present),
	asn_MAP_X2AP_ABSInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ABSInformation = {
	"ABSInformation",
	"ABSInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_ABSInformation_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_ABSInformation_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_ABSInformation_specs_1	/* Additional specs */
};
