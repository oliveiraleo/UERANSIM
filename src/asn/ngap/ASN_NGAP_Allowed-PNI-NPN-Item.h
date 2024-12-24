/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_Allowed_PNI_NPN_Item_H_
#define	_ASN_NGAP_Allowed_PNI_NPN_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_PLMNIdentity.h"
#include <NativeEnumerated.h>
#include "ASN_NGAP_Allowed-CAG-List-per-PLMN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_Allowed_PNI_NPN_Item__pNI_NPN_restricted {
	ASN_NGAP_Allowed_PNI_NPN_Item__pNI_NPN_restricted_restricted	= 0,
	ASN_NGAP_Allowed_PNI_NPN_Item__pNI_NPN_restricted_not_restricted	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_Allowed_PNI_NPN_Item__pNI_NPN_restricted;

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_Allowed-PNI-NPN-Item */
typedef struct ASN_NGAP_Allowed_PNI_NPN_Item {
	ASN_NGAP_PLMNIdentity_t	 pLMNIdentity;
	long	 pNI_NPN_restricted;
	ASN_NGAP_Allowed_CAG_List_per_PLMN_t	 allowed_CAG_List_per_PLMN;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_Allowed_PNI_NPN_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_pNI_NPN_restricted_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_Allowed_PNI_NPN_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_Allowed_PNI_NPN_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_Allowed_PNI_NPN_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_Allowed_PNI_NPN_Item_H_ */
#include <asn_internal.h>