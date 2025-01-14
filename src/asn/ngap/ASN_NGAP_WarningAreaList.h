/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_WarningAreaList_H_
#define	_ASN_NGAP_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_WarningAreaList_PR {
	ASN_NGAP_WarningAreaList_PR_NOTHING,	/* No components present */
	ASN_NGAP_WarningAreaList_PR_eUTRA_CGIListForWarning,
	ASN_NGAP_WarningAreaList_PR_nR_CGIListForWarning,
	ASN_NGAP_WarningAreaList_PR_tAIListForWarning,
	ASN_NGAP_WarningAreaList_PR_emergencyAreaIDList,
	ASN_NGAP_WarningAreaList_PR_choice_Extensions
} ASN_NGAP_WarningAreaList_PR;

/* Forward declarations */
struct ASN_NGAP_EUTRA_CGIListForWarning;
struct ASN_NGAP_NR_CGIListForWarning;
struct ASN_NGAP_TAIListForWarning;
struct ASN_NGAP_EmergencyAreaIDList;
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_WarningAreaList */
typedef struct ASN_NGAP_WarningAreaList {
	ASN_NGAP_WarningAreaList_PR present;
	union ASN_NGAP_WarningAreaList_u {
		struct ASN_NGAP_EUTRA_CGIListForWarning	*eUTRA_CGIListForWarning;
		struct ASN_NGAP_NR_CGIListForWarning	*nR_CGIListForWarning;
		struct ASN_NGAP_TAIListForWarning	*tAIListForWarning;
		struct ASN_NGAP_EmergencyAreaIDList	*emergencyAreaIDList;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_WarningAreaList;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_WarningAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_WarningAreaList_1[5];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_WarningAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_WarningAreaList_H_ */
#include <asn_internal.h>
