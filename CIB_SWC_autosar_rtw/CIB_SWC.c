/*
 * File: CIB_SWC.c
 *
 * Code generated for Simulink model 'CIB_SWC'.
 *
 * Model version                  : 1.148
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 12 17:52:40 2021
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CIB_SWC.h"
#include "CIB_SWC_private.h"

/* Block signals (default storage) */
B_CIB_SWC_T CIB_SWC_B;

/* Block states (default storage) */
DW_CIB_SWC_T CIB_SWC_DW;

/* Model step function */
void Runnable_Step(void)
{
    Diag *tmpIRead;
    ACC *tmpIRead_0;
    VCAN *tmpIRead_1;
    HandCode_To_AEB *tmpIRead_2;
    target_of_interest *tmpIRead_3;
    HSP *tmpIRead_4;
    HSP *tmpIRead_5;
    TP_Out *tmpIRead_6;

    /* Inport: '<Root>/Fusion_VRU' */
    tmpIRead_6 = Rte_IRead_Runnable_Step_Fusion_VRU_Fusion_VRU();

    /* Inport: '<Root>/Host_Vehicle_State' */
    tmpIRead_5 = Rte_IRead_Runnable_Step_Host_Vehicle_State_Host_Vehicle_State();

    /* Inport: '<Root>/proc_input_signals' */
    tmpIRead_4 = Rte_IRead_Runnable_Step_proc_input_signals_proc_input_signals();

    /* Inport: '<Root>/Tracks_of_Interest' */
    tmpIRead_3 = Rte_IRead_Runnable_Step_Tracks_of_Interest_Tracks_of_Interest();

    /* Inport: '<Root>/From_HandCode' */
    tmpIRead_2 = Rte_IRead_Runnable_Step_From_HandCode_From_HandCode();

    /* Inport: '<Root>/From_VCAN' */
    tmpIRead_1 = Rte_IRead_Runnable_Step_From_VCAN_From_VCAN();

    /* Inport: '<Root>/Vehicle_Control' */
    tmpIRead_0 = Rte_IRead_Runnable_Step_Vehicle_Control_Vehicle_Control();

    /* Inport: '<Root>/enable_inhibit_latch' */
    tmpIRead = Rte_IRead_Runnable_Step_enable_inhibit_latch_enable_inhibit_latch
        ();

    /* ModelReference: '<Root>/AEB_SWC' */
    AEB_Lib(&tmpIRead->Allow_CIB, &tmpIRead->Driver_Pressing_FCA_Brake_Pedal,
            &tmpIRead->SensorPlausibilityActiveFault,
            &tmpIRead->DriverBraking_CIB_Confirm, &tmpIRead_0->ACCBSC_ACCAccl,
            &tmpIRead_0->ACCBSC_AutoBrkReqd, &tmpIRead_1->AccActPos,
            &tmpIRead_1->BPDAPS_BkPDrvApP, &tmpIRead_1->BrkPdlPos,
            &tmpIRead_1->ElecPrkBrkStat, &tmpIRead_1->StrWhAngGrd,
            &tmpIRead_1->TransEstGear, &tmpIRead_1->WhlGrndVlctyLftNnDrvn,
            &tmpIRead_1->WhlGrndVlctyRtNnDrvn, &tmpIRead_1->IMULatAccPrim,
            &tmpIRead_1->IMULonAccPri, &tmpIRead_2->Host_Width,
            &tmpIRead_2->JA_PedColPrSysCrntStng,
            &tmpIRead_2->JA_ColPrSysCrntStng, &tmpIRead_2->PedColPrSysCrntStng,
            &tmpIRead_2->ColPrSysCrntStng, &tmpIRead_2->Yaw_Rate_Compensated,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_TrackID,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Range,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_RangeRate,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_RangeAccel,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Angle,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_LatPos,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_LatRate,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Status,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Obj_Class,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Width,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Amplitude,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Match_Conf,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Movement,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_DetectionSensor,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_VisID,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_Age,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_LeadVel,
            &tmpIRead_3->CMbBCIPV.CMbBCIPV_LeadAccel,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_TrackID,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Range,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_RangeRate,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_RangeAccel,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Angle,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_LatPos,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_LatRate,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Status,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Obj_Class,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Width,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Amplitude,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Match_Conf,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Movement,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_DetectionSensor,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_VisID,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_Age,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_LeadVel,
            &tmpIRead_3->CMbBCIPS.CMbBCIPS_LeadAccel,
            &tmpIRead_4->Exit_For_Throttle_Override, &tmpIRead_4->SysPwrMode,
            &tmpIRead_4->StrWhAng, &tmpIRead_5->Host_Speed_kph_CIB,
            &tmpIRead_5->Estimated_Radius_Curvature,
            &tmpIRead_6->Ped_Movement.VRU_OC_Crossing,
            &tmpIRead_6->Ped_Movement.VRU_Proceeding,
            &tmpIRead_6->Ped_Movement.VRU_Crossing,
            &tmpIRead_6->Ped_Movement.VRU_Stop,
            &tmpIRead_6->Ped_Movement.VRU_NBSM,
            &tmpIRead_6->Ped_Debug_Info.Ped_VisVRUClutter,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPedTTC,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPedVisID,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_Lat_est,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_TrackID,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPedRangeRate,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPedXPos,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPedYPos,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_Obj_Class,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_Match_Conf,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_DetSensor,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_LatRate,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_MovOutFun_HoldSel,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_XOLC,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_Age,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_Oncoming,
            &tmpIRead_6->Ped_Tsel_AEBTgt.CibPed_LongBicyclist,
            &CIB_SWC_B.AEB_SWC, &(CIB_SWC_DW.AEB_SWC_InstanceData.rtb),
            &(CIB_SWC_DW.AEB_SWC_InstanceData.rtdw));

    /* Outport: '<Root>/AEB_Out' */
    Rte_IWrite_Runnable_Step_AEB_Out_AEB_Out(&CIB_SWC_B.AEB_SWC);
}

/* Model initialize function */
void Runnable_Init(void)
{
    /* Start for ModelReference: '<Root>/AEB_SWC' incorporates:
     *  Inport: '<Root>/From_HandCode'
     *  Inport: '<Root>/From_VCAN'
     *  Inport: '<Root>/Fusion_VRU'
     *  Inport: '<Root>/Host_Vehicle_State'
     *  Inport: '<Root>/Tracks_of_Interest'
     *  Inport: '<Root>/Vehicle_Control'
     *  Inport: '<Root>/enable_inhibit_latch'
     *  Inport: '<Root>/proc_input_signals'
     */
    AEB_Lib_Start(&(CIB_SWC_DW.AEB_SWC_InstanceData.rtdw));

    /* SystemInitialize for ModelReference: '<Root>/AEB_SWC' incorporates:
     *  Inport: '<Root>/From_HandCode'
     *  Inport: '<Root>/From_VCAN'
     *  Inport: '<Root>/Fusion_VRU'
     *  Inport: '<Root>/Host_Vehicle_State'
     *  Inport: '<Root>/Tracks_of_Interest'
     *  Inport: '<Root>/Vehicle_Control'
     *  Inport: '<Root>/enable_inhibit_latch'
     *  Inport: '<Root>/proc_input_signals'
     */
    AEB_Lib_Init(&CIB_SWC_B.AEB_SWC, &(CIB_SWC_DW.AEB_SWC_InstanceData.rtb),
                 &(CIB_SWC_DW.AEB_SWC_InstanceData.rtdw));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
