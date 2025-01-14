/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "NGAP-CommonDataTypes.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_ProcedureCode_H_
#define	_ASN_NGAP_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_ProcedureCode */
typedef long	 ASN_NGAP_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ProcedureCode;
asn_struct_free_f ASN_NGAP_ProcedureCode_free;
asn_struct_print_f ASN_NGAP_ProcedureCode_print;
asn_constr_check_f ASN_NGAP_ProcedureCode_constraint;
ber_type_decoder_f ASN_NGAP_ProcedureCode_decode_ber;
der_type_encoder_f ASN_NGAP_ProcedureCode_encode_der;
xer_type_decoder_f ASN_NGAP_ProcedureCode_decode_xer;
xer_type_encoder_f ASN_NGAP_ProcedureCode_encode_xer;
per_type_decoder_f ASN_NGAP_ProcedureCode_decode_uper;
per_type_encoder_f ASN_NGAP_ProcedureCode_encode_uper;
per_type_decoder_f ASN_NGAP_ProcedureCode_decode_aper;
per_type_encoder_f ASN_NGAP_ProcedureCode_encode_aper;
#define ASN_NGAP_ProcedureCode_id_AMFConfigurationUpdate	((ASN_NGAP_ProcedureCode_t)0)
#define ASN_NGAP_ProcedureCode_id_AMFStatusIndication	((ASN_NGAP_ProcedureCode_t)1)
#define ASN_NGAP_ProcedureCode_id_CellTrafficTrace	((ASN_NGAP_ProcedureCode_t)2)
#define ASN_NGAP_ProcedureCode_id_DeactivateTrace	((ASN_NGAP_ProcedureCode_t)3)
#define ASN_NGAP_ProcedureCode_id_DownlinkNASTransport	((ASN_NGAP_ProcedureCode_t)4)
#define ASN_NGAP_ProcedureCode_id_DownlinkNonUEAssociatedNRPPaTransport	((ASN_NGAP_ProcedureCode_t)5)
#define ASN_NGAP_ProcedureCode_id_DownlinkRANConfigurationTransfer	((ASN_NGAP_ProcedureCode_t)6)
#define ASN_NGAP_ProcedureCode_id_DownlinkRANStatusTransfer	((ASN_NGAP_ProcedureCode_t)7)
#define ASN_NGAP_ProcedureCode_id_DownlinkUEAssociatedNRPPaTransport	((ASN_NGAP_ProcedureCode_t)8)
#define ASN_NGAP_ProcedureCode_id_ErrorIndication	((ASN_NGAP_ProcedureCode_t)9)
#define ASN_NGAP_ProcedureCode_id_HandoverCancel	((ASN_NGAP_ProcedureCode_t)10)
#define ASN_NGAP_ProcedureCode_id_HandoverNotification	((ASN_NGAP_ProcedureCode_t)11)
#define ASN_NGAP_ProcedureCode_id_HandoverPreparation	((ASN_NGAP_ProcedureCode_t)12)
#define ASN_NGAP_ProcedureCode_id_HandoverResourceAllocation	((ASN_NGAP_ProcedureCode_t)13)
#define ASN_NGAP_ProcedureCode_id_InitialContextSetup	((ASN_NGAP_ProcedureCode_t)14)
#define ASN_NGAP_ProcedureCode_id_InitialUEMessage	((ASN_NGAP_ProcedureCode_t)15)
#define ASN_NGAP_ProcedureCode_id_LocationReportingControl	((ASN_NGAP_ProcedureCode_t)16)
#define ASN_NGAP_ProcedureCode_id_LocationReportingFailureIndication	((ASN_NGAP_ProcedureCode_t)17)
#define ASN_NGAP_ProcedureCode_id_LocationReport	((ASN_NGAP_ProcedureCode_t)18)
#define ASN_NGAP_ProcedureCode_id_NASNonDeliveryIndication	((ASN_NGAP_ProcedureCode_t)19)
#define ASN_NGAP_ProcedureCode_id_NGReset	((ASN_NGAP_ProcedureCode_t)20)
#define ASN_NGAP_ProcedureCode_id_NGSetup	((ASN_NGAP_ProcedureCode_t)21)
#define ASN_NGAP_ProcedureCode_id_OverloadStart	((ASN_NGAP_ProcedureCode_t)22)
#define ASN_NGAP_ProcedureCode_id_OverloadStop	((ASN_NGAP_ProcedureCode_t)23)
#define ASN_NGAP_ProcedureCode_id_Paging	((ASN_NGAP_ProcedureCode_t)24)
#define ASN_NGAP_ProcedureCode_id_PathSwitchRequest	((ASN_NGAP_ProcedureCode_t)25)
#define ASN_NGAP_ProcedureCode_id_PDUSessionResourceModify	((ASN_NGAP_ProcedureCode_t)26)
#define ASN_NGAP_ProcedureCode_id_PDUSessionResourceModifyIndication	((ASN_NGAP_ProcedureCode_t)27)
#define ASN_NGAP_ProcedureCode_id_PDUSessionResourceRelease	((ASN_NGAP_ProcedureCode_t)28)
#define ASN_NGAP_ProcedureCode_id_PDUSessionResourceSetup	((ASN_NGAP_ProcedureCode_t)29)
#define ASN_NGAP_ProcedureCode_id_PDUSessionResourceNotify	((ASN_NGAP_ProcedureCode_t)30)
#define ASN_NGAP_ProcedureCode_id_PrivateMessage	((ASN_NGAP_ProcedureCode_t)31)
#define ASN_NGAP_ProcedureCode_id_PWSCancel	((ASN_NGAP_ProcedureCode_t)32)
#define ASN_NGAP_ProcedureCode_id_PWSFailureIndication	((ASN_NGAP_ProcedureCode_t)33)
#define ASN_NGAP_ProcedureCode_id_PWSRestartIndication	((ASN_NGAP_ProcedureCode_t)34)
#define ASN_NGAP_ProcedureCode_id_RANConfigurationUpdate	((ASN_NGAP_ProcedureCode_t)35)
#define ASN_NGAP_ProcedureCode_id_RerouteNASRequest	((ASN_NGAP_ProcedureCode_t)36)
#define ASN_NGAP_ProcedureCode_id_RRCInactiveTransitionReport	((ASN_NGAP_ProcedureCode_t)37)
#define ASN_NGAP_ProcedureCode_id_TraceFailureIndication	((ASN_NGAP_ProcedureCode_t)38)
#define ASN_NGAP_ProcedureCode_id_TraceStart	((ASN_NGAP_ProcedureCode_t)39)
#define ASN_NGAP_ProcedureCode_id_UEContextModification	((ASN_NGAP_ProcedureCode_t)40)
#define ASN_NGAP_ProcedureCode_id_UEContextRelease	((ASN_NGAP_ProcedureCode_t)41)
#define ASN_NGAP_ProcedureCode_id_UEContextReleaseRequest	((ASN_NGAP_ProcedureCode_t)42)
#define ASN_NGAP_ProcedureCode_id_UERadioCapabilityCheck	((ASN_NGAP_ProcedureCode_t)43)
#define ASN_NGAP_ProcedureCode_id_UERadioCapabilityInfoIndication	((ASN_NGAP_ProcedureCode_t)44)
#define ASN_NGAP_ProcedureCode_id_UETNLABindingRelease	((ASN_NGAP_ProcedureCode_t)45)
#define ASN_NGAP_ProcedureCode_id_UplinkNASTransport	((ASN_NGAP_ProcedureCode_t)46)
#define ASN_NGAP_ProcedureCode_id_UplinkNonUEAssociatedNRPPaTransport	((ASN_NGAP_ProcedureCode_t)47)
#define ASN_NGAP_ProcedureCode_id_UplinkRANConfigurationTransfer	((ASN_NGAP_ProcedureCode_t)48)
#define ASN_NGAP_ProcedureCode_id_UplinkRANStatusTransfer	((ASN_NGAP_ProcedureCode_t)49)
#define ASN_NGAP_ProcedureCode_id_UplinkUEAssociatedNRPPaTransport	((ASN_NGAP_ProcedureCode_t)50)
#define ASN_NGAP_ProcedureCode_id_WriteReplaceWarning	((ASN_NGAP_ProcedureCode_t)51)
#define ASN_NGAP_ProcedureCode_id_SecondaryRATDataUsageReport	((ASN_NGAP_ProcedureCode_t)52)
#define ASN_NGAP_ProcedureCode_id_UplinkRIMInformationTransfer	((ASN_NGAP_ProcedureCode_t)53)
#define ASN_NGAP_ProcedureCode_id_DownlinkRIMInformationTransfer	((ASN_NGAP_ProcedureCode_t)54)
#define ASN_NGAP_ProcedureCode_id_RetrieveUEInformation	((ASN_NGAP_ProcedureCode_t)55)
#define ASN_NGAP_ProcedureCode_id_UEInformationTransfer	((ASN_NGAP_ProcedureCode_t)56)
#define ASN_NGAP_ProcedureCode_id_RANCPRelocationIndication	((ASN_NGAP_ProcedureCode_t)57)
#define ASN_NGAP_ProcedureCode_id_UEContextResume	((ASN_NGAP_ProcedureCode_t)58)
#define ASN_NGAP_ProcedureCode_id_UEContextSuspend	((ASN_NGAP_ProcedureCode_t)59)
#define ASN_NGAP_ProcedureCode_id_UERadioCapabilityIDMapping	((ASN_NGAP_ProcedureCode_t)60)
#define ASN_NGAP_ProcedureCode_id_HandoverSuccess	((ASN_NGAP_ProcedureCode_t)61)
#define ASN_NGAP_ProcedureCode_id_UplinkRANEarlyStatusTransfer	((ASN_NGAP_ProcedureCode_t)62)
#define ASN_NGAP_ProcedureCode_id_DownlinkRANEarlyStatusTransfer	((ASN_NGAP_ProcedureCode_t)63)
#define ASN_NGAP_ProcedureCode_id_AMFCPRelocationIndication	((ASN_NGAP_ProcedureCode_t)64)
#define ASN_NGAP_ProcedureCode_id_ConnectionEstablishmentIndication	((ASN_NGAP_ProcedureCode_t)65)
#define ASN_NGAP_ProcedureCode_id_BroadcastSessionModification	((ASN_NGAP_ProcedureCode_t)66)
#define ASN_NGAP_ProcedureCode_id_BroadcastSessionRelease	((ASN_NGAP_ProcedureCode_t)67)
#define ASN_NGAP_ProcedureCode_id_BroadcastSessionSetup	((ASN_NGAP_ProcedureCode_t)68)
#define ASN_NGAP_ProcedureCode_id_DistributionSetup	((ASN_NGAP_ProcedureCode_t)69)
#define ASN_NGAP_ProcedureCode_id_DistributionRelease	((ASN_NGAP_ProcedureCode_t)70)
#define ASN_NGAP_ProcedureCode_id_MulticastSessionActivation	((ASN_NGAP_ProcedureCode_t)71)
#define ASN_NGAP_ProcedureCode_id_MulticastSessionDeactivation	((ASN_NGAP_ProcedureCode_t)72)
#define ASN_NGAP_ProcedureCode_id_MulticastSessionUpdate	((ASN_NGAP_ProcedureCode_t)73)
#define ASN_NGAP_ProcedureCode_id_MulticastGroupPaging	((ASN_NGAP_ProcedureCode_t)74)
#define ASN_NGAP_ProcedureCode_id_BroadcastSessionReleaseRequired	((ASN_NGAP_ProcedureCode_t)75)

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_ProcedureCode_H_ */
#include <asn_internal.h>
