/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_PRSAngleItem.h"

#include "F1AP_ProtocolExtensionContainer.h"
static int
memb_F1AP_nR_PRS_Azimuth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 359)) {
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
memb_F1AP_nR_PRS_Azimuth_fine_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
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
memb_F1AP_nR_PRS_Elevation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 180)) {
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
memb_F1AP_nR_PRS_Elevation_fine_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_F1AP_nR_PRS_Azimuth_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  359 }	/* (0..359) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_nR_PRS_Azimuth_fine_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_nR_PRS_Elevation_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  180 }	/* (0..180) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_nR_PRS_Elevation_fine_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_F1AP_PRSAngleItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_PRSAngleItem, nR_PRS_Azimuth),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_nR_PRS_Azimuth_constr_2,  memb_F1AP_nR_PRS_Azimuth_constraint_1 },
		0, 0, /* No default value */
		"nR-PRS-Azimuth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_PRSAngleItem, nR_PRS_Azimuth_fine),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_nR_PRS_Azimuth_fine_constr_3,  memb_F1AP_nR_PRS_Azimuth_fine_constraint_1 },
		0, 0, /* No default value */
		"nR-PRS-Azimuth-fine"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_PRSAngleItem, nR_PRS_Elevation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_nR_PRS_Elevation_constr_4,  memb_F1AP_nR_PRS_Elevation_constraint_1 },
		0, 0, /* No default value */
		"nR-PRS-Elevation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_PRSAngleItem, nR_PRS_Elevation_fine),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_nR_PRS_Elevation_fine_constr_5,  memb_F1AP_nR_PRS_Elevation_fine_constraint_1 },
		0, 0, /* No default value */
		"nR-PRS-Elevation-fine"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_PRSAngleItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_154P193,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_PRSAngleItem_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_F1AP_PRSAngleItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_PRSAngleItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-PRS-Azimuth */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-PRS-Azimuth-fine */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nR-PRS-Elevation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nR-PRS-Elevation-fine */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_PRSAngleItem_specs_1 = {
	sizeof(struct F1AP_PRSAngleItem),
	offsetof(struct F1AP_PRSAngleItem, _asn_ctx),
	asn_MAP_F1AP_PRSAngleItem_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_F1AP_PRSAngleItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_PRSAngleItem = {
	"PRSAngleItem",
	"PRSAngleItem",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_PRSAngleItem_tags_1,
	sizeof(asn_DEF_F1AP_PRSAngleItem_tags_1)
		/sizeof(asn_DEF_F1AP_PRSAngleItem_tags_1[0]), /* 1 */
	asn_DEF_F1AP_PRSAngleItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_PRSAngleItem_tags_1)
		/sizeof(asn_DEF_F1AP_PRSAngleItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_PRSAngleItem_1,
	5,	/* Elements count */
	&asn_SPC_F1AP_PRSAngleItem_specs_1	/* Additional specs */
};
