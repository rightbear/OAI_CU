/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#include "LTE_MBMS-SessionInfo-r9.h"

static int
memb_LTE_sessionId_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_logicalChannelIdentity_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_sessionId_r9_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_logicalChannelIdentity_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_MBMS_SessionInfo_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_SessionInfo_r9, tmgi_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TMGI_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tmgi-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MBMS_SessionInfo_r9, sessionId_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_sessionId_r9_constr_3,  memb_LTE_sessionId_r9_constraint_1 },
		0, 0, /* No default value */
		"sessionId-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_SessionInfo_r9, logicalChannelIdentity_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_logicalChannelIdentity_r9_constr_4,  memb_LTE_logicalChannelIdentity_r9_constraint_1 },
		0, 0, /* No default value */
		"logicalChannelIdentity-r9"
		},
};
static const int asn_MAP_LTE_MBMS_SessionInfo_r9_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBMS_SessionInfo_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tmgi-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sessionId-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelIdentity-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_SessionInfo_r9_specs_1 = {
	sizeof(struct LTE_MBMS_SessionInfo_r9),
	offsetof(struct LTE_MBMS_SessionInfo_r9, _asn_ctx),
	asn_MAP_LTE_MBMS_SessionInfo_r9_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_MBMS_SessionInfo_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_SessionInfo_r9 = {
	"MBMS-SessionInfo-r9",
	"MBMS-SessionInfo-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1,
	sizeof(asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_SessionInfo_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MBMS_SessionInfo_r9_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MBMS_SessionInfo_r9_specs_1	/* Additional specs */
};
