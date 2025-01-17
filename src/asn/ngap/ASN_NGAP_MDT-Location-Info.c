/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_MDT-Location-Info.h"

#include "ASN_NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_NGAP_MDT_Location_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_MDT_Location_Info, mDT_Location_Information),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_MDT_Location_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mDT-Location-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_NGAP_MDT_Location_Info, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolExtensionContainer_174P190,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_NGAP_MDT_Location_Info_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_MDT_Location_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mDT-Location-Information */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_MDT_Location_Info_specs_1 = {
	sizeof(struct ASN_NGAP_MDT_Location_Info),
	offsetof(struct ASN_NGAP_MDT_Location_Info, _asn_ctx),
	asn_MAP_ASN_NGAP_MDT_Location_Info_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_NGAP_MDT_Location_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_MDT_Location_Info = {
	"MDT-Location-Info",
	"MDT-Location-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1,
	sizeof(asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_MDT_Location_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_MDT_Location_Info_1,
	2,	/* Elements count */
	&asn_SPC_ASN_NGAP_MDT_Location_Info_specs_1	/* Additional specs */
};

