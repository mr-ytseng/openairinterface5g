/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_VarWLAN_Status_r13_H_
#define	_VarWLAN_Status_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "WLAN-Status-r13.h"
#include "WLAN-Status-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarWLAN-Status-r13 */
typedef struct VarWLAN_Status_r13 {
	WLAN_Status_r13_t	 status_r13;
	WLAN_Status_v1430_t	*status_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarWLAN_Status_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarWLAN_Status_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _VarWLAN_Status_r13_H_ */
#include <asn_internal.h>