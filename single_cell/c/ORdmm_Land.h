#include <math.h>
#include <string.h>
// Gotran generated C/C++ code for the "ORdmm_Land" model

enum state {
  STATE_CaMKt,
  STATE_m,
  STATE_hf,
  STATE_hs,
  STATE_j,
  STATE_hsp,
  STATE_jp,
  STATE_mL,
  STATE_hL,
  STATE_hLp,
  STATE_a,
  STATE_iF,
  STATE_iS,
  STATE_ap,
  STATE_iFp,
  STATE_iSp,
  STATE_d,
  STATE_ff,
  STATE_fs,
  STATE_fcaf,
  STATE_fcas,
  STATE_jca,
  STATE_ffp,
  STATE_fcafp,
  STATE_nca,
  STATE_xrf,
  STATE_xrs,
  STATE_xs1,
  STATE_xs2,
  STATE_xk1,
  STATE_v,
  STATE_Jrelnp,
  STATE_Jrelp,
  STATE_nai,
  STATE_nass,
  STATE_ki,
  STATE_kss,
  STATE_cass,
  STATE_cansr,
  STATE_cajsr,
  STATE_XS,
  STATE_XW,
  STATE_CaTrpn,
  STATE_TmB,
  STATE_Zetas,
  STATE_Zetaw,
  STATE_Cd,
  STATE_cai,
  NUM_STATES,
};

enum parameter {
  PARAM_scale_ICaL,
  PARAM_scale_IK1,
  PARAM_scale_IKr,
  PARAM_scale_IKs,
  PARAM_scale_INaL,
  PARAM_celltype,
  PARAM_cao,
  PARAM_ko,
  PARAM_nao,
  PARAM_F,
  PARAM_R,
  PARAM_T,
  PARAM_L,
  PARAM_rad,
  PARAM_scale_HF_CaMKa,
  PARAM_scale_HF_GK1,
  PARAM_scale_HF_GNaL,
  PARAM_scale_HF_Gncx,
  PARAM_scale_HF_Gto,
  PARAM_scale_HF_Jleak,
  PARAM_scale_HF_Jrel_inf,
  PARAM_scale_HF_Jup,
  PARAM_scale_HF_Pnak,
  PARAM_scale_HF_cat50_ref,
  PARAM_scale_HF_thL,
  PARAM_scale_drug_ICaL,
  PARAM_scale_drug_ICab,
  PARAM_scale_drug_IK1,
  PARAM_scale_drug_IKb,
  PARAM_scale_drug_IKr,
  PARAM_scale_drug_IKs,
  PARAM_scale_drug_INa,
  PARAM_scale_drug_INaL,
  PARAM_scale_drug_INab,
  PARAM_scale_drug_IpCa,
  PARAM_scale_drug_Isack,
  PARAM_scale_drug_Isacns,
  PARAM_scale_drug_Ito,
  PARAM_Ahf,
  PARAM_GNa,
  PARAM_thL,
  PARAM_Gto,
  PARAM_delta_epi,
  PARAM_Aff,
  PARAM_Kmn,
  PARAM_k2n,
  PARAM_tjca,
  PARAM_zca,
  PARAM_bt,
  PARAM_Beta0,
  PARAM_Beta1,
  PARAM_Tot_A,
  PARAM_Tref,
  PARAM_Trpn50,
  PARAM_calib,
  PARAM_cat50_ref,
  PARAM_dLambda,
  PARAM_emcoupling,
  PARAM_etal,
  PARAM_etas,
  PARAM_gammas,
  PARAM_gammaw,
  PARAM_isacs,
  PARAM_ktrpn,
  PARAM_ku,
  PARAM_kuw,
  PARAM_kws,
  PARAM_lmbda,
  PARAM_mode,
  PARAM_ntm,
  PARAM_ntrpn,
  PARAM_p_a,
  PARAM_p_b,
  PARAM_p_k,
  PARAM_phi,
  PARAM_rs,
  PARAM_rw,
  PARAM_CaMKo,
  PARAM_KmCaM,
  PARAM_KmCaMK,
  PARAM_aCaMK,
  PARAM_bCaMK,
  PARAM_PKNa,
  PARAM_Gncx,
  PARAM_KmCaAct,
  PARAM_kasymm,
  PARAM_kcaoff,
  PARAM_kcaon,
  PARAM_kna1,
  PARAM_kna2,
  PARAM_kna3,
  PARAM_qca,
  PARAM_qna,
  PARAM_wca,
  PARAM_wna,
  PARAM_wnaca,
  PARAM_H,
  PARAM_Khp,
  PARAM_Kki,
  PARAM_Kko,
  PARAM_Kmgatp,
  PARAM_Knai0,
  PARAM_Knao0,
  PARAM_Knap,
  PARAM_Kxkur,
  PARAM_MgADP,
  PARAM_MgATP,
  PARAM_Pnak,
  PARAM_delta,
  PARAM_eP,
  PARAM_k1m,
  PARAM_k1p,
  PARAM_k2m,
  PARAM_k2p,
  PARAM_k3m,
  PARAM_k3p,
  PARAM_k4m,
  PARAM_k4p,
  PARAM_zk,
  PARAM_GKb,
  PARAM_PNab,
  PARAM_PCab,
  PARAM_GpCa,
  PARAM_Esac_ns,
  PARAM_Gsac_k,
  PARAM_Gsac_ns,
  PARAM_lambda_max,
  PARAM_amp,
  PARAM_duration,
  PARAM_BSLmax,
  PARAM_BSRmax,
  PARAM_KmBSL,
  PARAM_KmBSR,
  PARAM_cmdnmax,
  PARAM_csqnmax,
  PARAM_kmcmdn,
  PARAM_kmcsqn,
  PARAM_kmtrpn,
  PARAM_trpnmax,
  NUM_PARAMS,
};

enum monitored {
  MONITOR_vcell,
  MONITOR_Ageo,
  MONITOR_Acap,
  MONITOR_vmyo,
  MONITOR_vnsr,
  MONITOR_vjsr,
  MONITOR_vss,
  MONITOR_CaMKb,
  MONITOR_CaMKa,
  MONITOR_mss,
  MONITOR_tm,
  MONITOR_hss,
  MONITOR_thf,
  MONITOR_ths,
  MONITOR_Ahs,
  MONITOR_h,
  MONITOR_jss,
  MONITOR_tj,
  MONITOR_hssp,
  MONITOR_thsp,
  MONITOR_hp,
  MONITOR_tjp,
  MONITOR_fINap,
  MONITOR_INa,
  MONITOR_mLss,
  MONITOR_tmL,
  MONITOR_hLss,
  MONITOR_hLssp,
  MONITOR_thLp,
  MONITOR_GNaL,
  MONITOR_fINaLp,
  MONITOR_INaL,
  MONITOR_ass,
  MONITOR_ta,
  MONITOR_iss,
  MONITOR_tiF,
  MONITOR_tiS,
  MONITOR_AiF,
  MONITOR_AiS,
  MONITOR_i,
  MONITOR_assp,
  MONITOR_dti_develop,
  MONITOR_dti_recover,
  MONITOR_tiFp,
  MONITOR_tiSp,
  MONITOR_ip,
  MONITOR_fItop,
  MONITOR_Ito,
  MONITOR_dss,
  MONITOR_td,
  MONITOR_fss,
  MONITOR_tff,
  MONITOR_tfs,
  MONITOR_Afs,
  MONITOR_f,
  MONITOR_fcass,
  MONITOR_tfcaf,
  MONITOR_tfcas,
  MONITOR_Afcaf,
  MONITOR_Afcas,
  MONITOR_fca,
  MONITOR_tffp,
  MONITOR_fp,
  MONITOR_tfcafp,
  MONITOR_fcap,
  MONITOR_km2n,
  MONITOR_anca,
  MONITOR_PhiCaL,
  MONITOR_PhiCaNa,
  MONITOR_PhiCaK,
  MONITOR_PCa,
  MONITOR_PCap,
  MONITOR_PCaNa,
  MONITOR_PCaK,
  MONITOR_PCaNap,
  MONITOR_PCaKp,
  MONITOR_fICaLp,
  MONITOR_ICaL,
  MONITOR_ICaNa,
  MONITOR_ICaK,
  MONITOR_xrss,
  MONITOR_txrf,
  MONITOR_txrs,
  MONITOR_Axrf,
  MONITOR_Axrs,
  MONITOR_xr,
  MONITOR_rkr,
  MONITOR_GKr,
  MONITOR_IKr,
  MONITOR_xs1ss,
  MONITOR_txs1,
  MONITOR_xs2ss,
  MONITOR_txs2,
  MONITOR_KsCa,
  MONITOR_GKs,
  MONITOR_IKs,
  MONITOR_xk1ss,
  MONITOR_txk1,
  MONITOR_rk1,
  MONITOR_GK1,
  MONITOR_IK1,
  MONITOR_a_rel,
  MONITOR_Jrel_inf,
  MONITOR_tau_rel_tmp,
  MONITOR_tau_rel,
  MONITOR_btp,
  MONITOR_a_relp,
  MONITOR_Jrel_infp,
  MONITOR_tau_relp_tmp,
  MONITOR_tau_relp,
  MONITOR_fJrelp,
  MONITOR_Jrel,
  MONITOR_Bcass,
  MONITOR_Bcajsr,
  MONITOR_XS_max,
  MONITOR_XW_max,
  MONITOR_CaTrpn_max,
  MONITOR_kwu,
  MONITOR_ksu,
  MONITOR_Aw,
  MONITOR_As,
  MONITOR_cw,
  MONITOR_cs,
  MONITOR_lambda_min12,
  MONITOR_lambda_min087,
  MONITOR_h_lambda_prima,
  MONITOR_h_lambda,
  MONITOR_XU,
  MONITOR_gammawu,
  MONITOR_gammasu,
  MONITOR_cat50,
  MONITOR_kb,
  MONITOR_Ta,
  MONITOR_C,
  MONITOR_dCd,
  MONITOR_eta,
  MONITOR_Fd,
  MONITOR_F1,
  MONITOR_Tp,
  MONITOR_Ttot,
  MONITOR_Bcai,
  MONITOR_J_TRPN,
  MONITOR_ENa,
  MONITOR_EK,
  MONITOR_EKs,
  MONITOR_vffrt,
  MONITOR_vfrt,
  MONITOR_hca,
  MONITOR_hna,
  MONITOR_h1_i,
  MONITOR_h2_i,
  MONITOR_h3_i,
  MONITOR_h4_i,
  MONITOR_h5_i,
  MONITOR_h6_i,
  MONITOR_h7_i,
  MONITOR_h8_i,
  MONITOR_h9_i,
  MONITOR_h10_i,
  MONITOR_h11_i,
  MONITOR_h12_i,
  MONITOR_k1_i,
  MONITOR_k2_i,
  MONITOR_k3p_i,
  MONITOR_k3pp_i,
  MONITOR_k3_i,
  MONITOR_k4p_i,
  MONITOR_k4pp_i,
  MONITOR_k4_i,
  MONITOR_k5_i,
  MONITOR_k6_i,
  MONITOR_k7_i,
  MONITOR_k8_i,
  MONITOR_x1_i,
  MONITOR_x2_i,
  MONITOR_x3_i,
  MONITOR_x4_i,
  MONITOR_E1_i,
  MONITOR_E2_i,
  MONITOR_E3_i,
  MONITOR_E4_i,
  MONITOR_allo_i,
  MONITOR_zna,
  MONITOR_JncxNa_i,
  MONITOR_JncxCa_i,
  MONITOR_INaCa_i,
  MONITOR_h1,
  MONITOR_h2,
  MONITOR_h3,
  MONITOR_h4,
  MONITOR_h5,
  MONITOR_h6,
  MONITOR_h7,
  MONITOR_h8,
  MONITOR_h9,
  MONITOR_h10,
  MONITOR_h11,
  MONITOR_h12,
  MONITOR_k1,
  MONITOR_k2,
  MONITOR_k3p_ss,
  MONITOR_k3pp,
  MONITOR_k3,
  MONITOR_k4p_ss,
  MONITOR_k4pp,
  MONITOR_k4,
  MONITOR_k5,
  MONITOR_k6,
  MONITOR_k7,
  MONITOR_k8,
  MONITOR_x1_ss,
  MONITOR_x2_ss,
  MONITOR_x3_ss,
  MONITOR_x4_ss,
  MONITOR_E1_ss,
  MONITOR_E2_ss,
  MONITOR_E3_ss,
  MONITOR_E4_ss,
  MONITOR_allo_ss,
  MONITOR_JncxNa_ss,
  MONITOR_JncxCa_ss,
  MONITOR_INaCa_ss,
  MONITOR_Knai,
  MONITOR_Knao,
  MONITOR_P,
  MONITOR_a1,
  MONITOR_b1,
  MONITOR_a2,
  MONITOR_b2,
  MONITOR_a3,
  MONITOR_b3,
  MONITOR_a4,
  MONITOR_b4,
  MONITOR_x1,
  MONITOR_x2,
  MONITOR_x3,
  MONITOR_x4,
  MONITOR_E1,
  MONITOR_E2,
  MONITOR_E3,
  MONITOR_E4,
  MONITOR_JnakNa,
  MONITOR_JnakK,
  MONITOR_INaK,
  MONITOR_xkb,
  MONITOR_IKb,
  MONITOR_INab,
  MONITOR_ICab,
  MONITOR_IpCa,
  MONITOR_Isac_P_ns,
  MONITOR_Isac_P_k,
  MONITOR_Istim,
  MONITOR_JdiffNa,
  MONITOR_JdiffK,
  MONITOR_Jdiff,
  MONITOR_Jupnp,
  MONITOR_Jupp,
  MONITOR_fJupp,
  MONITOR_Jleak,
  MONITOR_Jup,
  MONITOR_Jtr,
  MONITOR_dCaMKt_dt,
  MONITOR_dm_dt,
  MONITOR_dhf_dt,
  MONITOR_dhs_dt,
  MONITOR_dj_dt,
  MONITOR_dhsp_dt,
  MONITOR_djp_dt,
  MONITOR_dmL_dt,
  MONITOR_dhL_dt,
  MONITOR_dhLp_dt,
  MONITOR_da_dt,
  MONITOR_diF_dt,
  MONITOR_diS_dt,
  MONITOR_dap_dt,
  MONITOR_diFp_dt,
  MONITOR_diSp_dt,
  MONITOR_dd_dt,
  MONITOR_dff_dt,
  MONITOR_dfs_dt,
  MONITOR_dfcaf_dt,
  MONITOR_dfcas_dt,
  MONITOR_djca_dt,
  MONITOR_dffp_dt,
  MONITOR_dfcafp_dt,
  MONITOR_dnca_dt,
  MONITOR_dxrf_dt,
  MONITOR_dxrs_dt,
  MONITOR_dxs1_dt,
  MONITOR_dxs2_dt,
  MONITOR_dxk1_dt,
  MONITOR_dv_dt,
  MONITOR_dJrelnp_dt,
  MONITOR_dJrelp_dt,
  MONITOR_dnai_dt,
  MONITOR_dnass_dt,
  MONITOR_dki_dt,
  MONITOR_dkss_dt,
  MONITOR_dcass_dt,
  MONITOR_dcansr_dt,
  MONITOR_dcajsr_dt,
  MONITOR_dXS_dt,
  MONITOR_dXW_dt,
  MONITOR_dCaTrpn_dt,
  MONITOR_dTmB_dt,
  MONITOR_dZetas_dt,
  MONITOR_dZetaw_dt,
  MONITOR_dCd_dt,
  MONITOR_dcai_dt,
  NUM_MONITORED,
};

// Init state values
void init_state_values(double* states)
{
  states[STATE_CaMKt] = 0.0;
  states[STATE_m] = 0.0;
  states[STATE_hf] = 1.0;
  states[STATE_hs] = 1.0;
  states[STATE_j] = 1.0;
  states[STATE_hsp] = 1.0;
  states[STATE_jp] = 1.0;
  states[STATE_mL] = 0.0;
  states[STATE_hL] = 1.0;
  states[STATE_hLp] = 1.0;
  states[STATE_a] = 0.0;
  states[STATE_iF] = 1.0;
  states[STATE_iS] = 1.0;
  states[STATE_ap] = 0.0;
  states[STATE_iFp] = 1.0;
  states[STATE_iSp] = 1.0;
  states[STATE_d] = 0.0;
  states[STATE_ff] = 1.0;
  states[STATE_fs] = 1.0;
  states[STATE_fcaf] = 1.0;
  states[STATE_fcas] = 1.0;
  states[STATE_jca] = 1.0;
  states[STATE_ffp] = 1.0;
  states[STATE_fcafp] = 1.0;
  states[STATE_nca] = 0.0;
  states[STATE_xrf] = 0.0;
  states[STATE_xrs] = 0.0;
  states[STATE_xs1] = 0.0;
  states[STATE_xs2] = 0.0;
  states[STATE_xk1] = 1.0;
  states[STATE_v] = -87.0;
  states[STATE_Jrelnp] = 0.0;
  states[STATE_Jrelp] = 0.0;
  states[STATE_nai] = 7.0;
  states[STATE_nass] = 7.0;
  states[STATE_ki] = 145.0;
  states[STATE_kss] = 145.0;
  states[STATE_cass] = 0.0001;
  states[STATE_cansr] = 1.2;
  states[STATE_cajsr] = 1.2;
  states[STATE_XS] = 0.0;
  states[STATE_XW] = 0.0;
  states[STATE_CaTrpn] = 0.0;
  states[STATE_TmB] = 1.0;
  states[STATE_Zetas] = 0.0;
  states[STATE_Zetaw] = 0.0;
  states[STATE_Cd] = 0.0;
  states[STATE_cai] = 0.0001;
}

// Default parameter values
void init_parameters_values(double* parameters)
{
  parameters[PARAM_scale_ICaL] = 1.018;
  parameters[PARAM_scale_IK1] = 1.414;
  parameters[PARAM_scale_IKr] = 1.119;
  parameters[PARAM_scale_IKs] = 1.648;
  parameters[PARAM_scale_INaL] = 2.274;
  parameters[PARAM_celltype] = 0.0;
  parameters[PARAM_cao] = 1.8;
  parameters[PARAM_ko] = 5.4;
  parameters[PARAM_nao] = 140.0;
  parameters[PARAM_F] = 96485.0;
  parameters[PARAM_R] = 8314.0;
  parameters[PARAM_T] = 310.0;
  parameters[PARAM_L] = 0.01;
  parameters[PARAM_rad] = 0.0011;
  parameters[PARAM_scale_HF_CaMKa] = 1.0;
  parameters[PARAM_scale_HF_GK1] = 1.0;
  parameters[PARAM_scale_HF_GNaL] = 1.0;
  parameters[PARAM_scale_HF_Gncx] = 1.0;
  parameters[PARAM_scale_HF_Gto] = 1.0;
  parameters[PARAM_scale_HF_Jleak] = 1.0;
  parameters[PARAM_scale_HF_Jrel_inf] = 1.0;
  parameters[PARAM_scale_HF_Jup] = 1.0;
  parameters[PARAM_scale_HF_Pnak] = 1.0;
  parameters[PARAM_scale_HF_cat50_ref] = 1.0;
  parameters[PARAM_scale_HF_thL] = 1.0;
  parameters[PARAM_scale_drug_ICaL] = 1.0;
  parameters[PARAM_scale_drug_ICab] = 1.0;
  parameters[PARAM_scale_drug_IK1] = 1.0;
  parameters[PARAM_scale_drug_IKb] = 1.0;
  parameters[PARAM_scale_drug_IKr] = 1.0;
  parameters[PARAM_scale_drug_IKs] = 1.0;
  parameters[PARAM_scale_drug_INa] = 1.0;
  parameters[PARAM_scale_drug_INaL] = 1.0;
  parameters[PARAM_scale_drug_INab] = 1.0;
  parameters[PARAM_scale_drug_IpCa] = 1.0;
  parameters[PARAM_scale_drug_Isack] = 1.0;
  parameters[PARAM_scale_drug_Isacns] = 1.0;
  parameters[PARAM_scale_drug_Ito] = 1.0;
  parameters[PARAM_Ahf] = 0.99;
  parameters[PARAM_GNa] = 31.0;
  parameters[PARAM_thL] = 200.0;
  parameters[PARAM_Gto] = 0.02;
  parameters[PARAM_delta_epi] = 1.0;
  parameters[PARAM_Aff] = 0.6;
  parameters[PARAM_Kmn] = 0.002;
  parameters[PARAM_k2n] = 1000.0;
  parameters[PARAM_tjca] = 75.0;
  parameters[PARAM_zca] = 2.0;
  parameters[PARAM_bt] = 4.75;
  parameters[PARAM_Beta0] = 2.3;
  parameters[PARAM_Beta1] = -2.4;
  parameters[PARAM_Tot_A] = 25.0;
  parameters[PARAM_Tref] = 120.0;
  parameters[PARAM_Trpn50] = 0.35;
  parameters[PARAM_calib] = 1.0;
  parameters[PARAM_cat50_ref] = 0.805;
  parameters[PARAM_dLambda] = 0.0;
  parameters[PARAM_emcoupling] = 1.0;
  parameters[PARAM_etal] = 200.0;
  parameters[PARAM_etas] = 20.0;
  parameters[PARAM_gammas] = 0.0085;
  parameters[PARAM_gammaw] = 0.615;
  parameters[PARAM_isacs] = 0.0;
  parameters[PARAM_ktrpn] = 0.1;
  parameters[PARAM_ku] = 0.04;
  parameters[PARAM_kuw] = 0.182;
  parameters[PARAM_kws] = 0.012;
  parameters[PARAM_lmbda] = 1.0;
  parameters[PARAM_mode] = 1.0;
  parameters[PARAM_ntm] = 2.4;
  parameters[PARAM_ntrpn] = 2.0;
  parameters[PARAM_p_a] = 2.1;
  parameters[PARAM_p_b] = 9.1;
  parameters[PARAM_p_k] = 7.0;
  parameters[PARAM_phi] = 2.23;
  parameters[PARAM_rs] = 0.25;
  parameters[PARAM_rw] = 0.5;
  parameters[PARAM_CaMKo] = 0.05;
  parameters[PARAM_KmCaM] = 0.0015;
  parameters[PARAM_KmCaMK] = 0.15;
  parameters[PARAM_aCaMK] = 0.05;
  parameters[PARAM_bCaMK] = 0.00068;
  parameters[PARAM_PKNa] = 0.01833;
  parameters[PARAM_Gncx] = 0.0008;
  parameters[PARAM_KmCaAct] = 0.00015;
  parameters[PARAM_kasymm] = 12.5;
  parameters[PARAM_kcaoff] = 5000.0;
  parameters[PARAM_kcaon] = 1500000.0;
  parameters[PARAM_kna1] = 15.0;
  parameters[PARAM_kna2] = 5.0;
  parameters[PARAM_kna3] = 88.12;
  parameters[PARAM_qca] = 0.167;
  parameters[PARAM_qna] = 0.5224;
  parameters[PARAM_wca] = 60000.0;
  parameters[PARAM_wna] = 60000.0;
  parameters[PARAM_wnaca] = 5000.0;
  parameters[PARAM_H] = 1e-07;
  parameters[PARAM_Khp] = 1.698e-07;
  parameters[PARAM_Kki] = 0.5;
  parameters[PARAM_Kko] = 0.3582;
  parameters[PARAM_Kmgatp] = 1.698e-07;
  parameters[PARAM_Knai0] = 9.073;
  parameters[PARAM_Knao0] = 27.78;
  parameters[PARAM_Knap] = 224.0;
  parameters[PARAM_Kxkur] = 292.0;
  parameters[PARAM_MgADP] = 0.05;
  parameters[PARAM_MgATP] = 9.8;
  parameters[PARAM_Pnak] = 30.0;
  parameters[PARAM_delta] = -0.155;
  parameters[PARAM_eP] = 4.2;
  parameters[PARAM_k1m] = 182.4;
  parameters[PARAM_k1p] = 949.5;
  parameters[PARAM_k2m] = 39.4;
  parameters[PARAM_k2p] = 687.2;
  parameters[PARAM_k3m] = 79300.0;
  parameters[PARAM_k3p] = 1899.0;
  parameters[PARAM_k4m] = 40.0;
  parameters[PARAM_k4p] = 639.0;
  parameters[PARAM_zk] = 1.0;
  parameters[PARAM_GKb] = 0.003;
  parameters[PARAM_PNab] = 3.75e-10;
  parameters[PARAM_PCab] = 2.5e-08;
  parameters[PARAM_GpCa] = 0.0005;
  parameters[PARAM_Esac_ns] = -10.0;
  parameters[PARAM_Gsac_k] = 1.097904761904762;
  parameters[PARAM_Gsac_ns] = 0.006;
  parameters[PARAM_lambda_max] = 1.1;
  parameters[PARAM_amp] = -80.0;
  parameters[PARAM_duration] = 0.5;
  parameters[PARAM_BSLmax] = 1.124;
  parameters[PARAM_BSRmax] = 0.047;
  parameters[PARAM_KmBSL] = 0.0087;
  parameters[PARAM_KmBSR] = 0.00087;
  parameters[PARAM_cmdnmax] = 0.05;
  parameters[PARAM_csqnmax] = 10.0;
  parameters[PARAM_kmcmdn] = 0.00238;
  parameters[PARAM_kmcsqn] = 0.8;
  parameters[PARAM_kmtrpn] = 0.0005;
  parameters[PARAM_trpnmax] = 0.07;
}

// State index
int state_index(const char name[])
{
  if (strcmp(name, "CaMKt")==0)
  {
    return STATE_CaMKt;
  }
  else if (strcmp(name, "m")==0)
  {
    return STATE_m;
  }
  else if (strcmp(name, "hf")==0)
  {
    return STATE_hf;
  }
  else if (strcmp(name, "hs")==0)
  {
    return STATE_hs;
  }
  else if (strcmp(name, "j")==0)
  {
    return STATE_j;
  }
  else if (strcmp(name, "hsp")==0)
  {
    return STATE_hsp;
  }
  else if (strcmp(name, "jp")==0)
  {
    return STATE_jp;
  }
  else if (strcmp(name, "mL")==0)
  {
    return STATE_mL;
  }
  else if (strcmp(name, "hL")==0)
  {
    return STATE_hL;
  }
  else if (strcmp(name, "hLp")==0)
  {
    return STATE_hLp;
  }
  else if (strcmp(name, "a")==0)
  {
    return STATE_a;
  }
  else if (strcmp(name, "iF")==0)
  {
    return STATE_iF;
  }
  else if (strcmp(name, "iS")==0)
  {
    return STATE_iS;
  }
  else if (strcmp(name, "ap")==0)
  {
    return STATE_ap;
  }
  else if (strcmp(name, "iFp")==0)
  {
    return STATE_iFp;
  }
  else if (strcmp(name, "iSp")==0)
  {
    return STATE_iSp;
  }
  else if (strcmp(name, "d")==0)
  {
    return STATE_d;
  }
  else if (strcmp(name, "ff")==0)
  {
    return STATE_ff;
  }
  else if (strcmp(name, "fs")==0)
  {
    return STATE_fs;
  }
  else if (strcmp(name, "fcaf")==0)
  {
    return STATE_fcaf;
  }
  else if (strcmp(name, "fcas")==0)
  {
    return STATE_fcas;
  }
  else if (strcmp(name, "jca")==0)
  {
    return STATE_jca;
  }
  else if (strcmp(name, "ffp")==0)
  {
    return STATE_ffp;
  }
  else if (strcmp(name, "fcafp")==0)
  {
    return STATE_fcafp;
  }
  else if (strcmp(name, "nca")==0)
  {
    return STATE_nca;
  }
  else if (strcmp(name, "xrf")==0)
  {
    return STATE_xrf;
  }
  else if (strcmp(name, "xrs")==0)
  {
    return STATE_xrs;
  }
  else if (strcmp(name, "xs1")==0)
  {
    return STATE_xs1;
  }
  else if (strcmp(name, "xs2")==0)
  {
    return STATE_xs2;
  }
  else if (strcmp(name, "xk1")==0)
  {
    return STATE_xk1;
  }
  else if (strcmp(name, "v")==0)
  {
    return STATE_v;
  }
  else if (strcmp(name, "Jrelnp")==0)
  {
    return STATE_Jrelnp;
  }
  else if (strcmp(name, "Jrelp")==0)
  {
    return STATE_Jrelp;
  }
  else if (strcmp(name, "nai")==0)
  {
    return STATE_nai;
  }
  else if (strcmp(name, "nass")==0)
  {
    return STATE_nass;
  }
  else if (strcmp(name, "ki")==0)
  {
    return STATE_ki;
  }
  else if (strcmp(name, "kss")==0)
  {
    return STATE_kss;
  }
  else if (strcmp(name, "cass")==0)
  {
    return STATE_cass;
  }
  else if (strcmp(name, "cansr")==0)
  {
    return STATE_cansr;
  }
  else if (strcmp(name, "cajsr")==0)
  {
    return STATE_cajsr;
  }
  else if (strcmp(name, "XS")==0)
  {
    return STATE_XS;
  }
  else if (strcmp(name, "XW")==0)
  {
    return STATE_XW;
  }
  else if (strcmp(name, "CaTrpn")==0)
  {
    return STATE_CaTrpn;
  }
  else if (strcmp(name, "TmB")==0)
  {
    return STATE_TmB;
  }
  else if (strcmp(name, "Zetas")==0)
  {
    return STATE_Zetas;
  }
  else if (strcmp(name, "Zetaw")==0)
  {
    return STATE_Zetaw;
  }
  else if (strcmp(name, "Cd")==0)
  {
    return STATE_Cd;
  }
  else if (strcmp(name, "cai")==0)
  {
    return STATE_cai;
  }
  return -1;
}

// Parameter index
int parameter_index(const char name[])
{
  if (strcmp(name, "scale_ICaL")==0)
  {
    return PARAM_scale_ICaL;
  }
  else if (strcmp(name, "scale_IK1")==0)
  {
    return PARAM_scale_IK1;
  }
  else if (strcmp(name, "scale_IKr")==0)
  {
    return PARAM_scale_IKr;
  }
  else if (strcmp(name, "scale_IKs")==0)
  {
    return PARAM_scale_IKs;
  }
  else if (strcmp(name, "scale_INaL")==0)
  {
    return PARAM_scale_INaL;
  }
  else if (strcmp(name, "celltype")==0)
  {
    return PARAM_celltype;
  }
  else if (strcmp(name, "cao")==0)
  {
    return PARAM_cao;
  }
  else if (strcmp(name, "ko")==0)
  {
    return PARAM_ko;
  }
  else if (strcmp(name, "nao")==0)
  {
    return PARAM_nao;
  }
  else if (strcmp(name, "F")==0)
  {
    return PARAM_F;
  }
  else if (strcmp(name, "R")==0)
  {
    return PARAM_R;
  }
  else if (strcmp(name, "T")==0)
  {
    return PARAM_T;
  }
  else if (strcmp(name, "L")==0)
  {
    return PARAM_L;
  }
  else if (strcmp(name, "rad")==0)
  {
    return PARAM_rad;
  }
  else if (strcmp(name, "scale_HF_CaMKa")==0)
  {
    return PARAM_scale_HF_CaMKa;
  }
  else if (strcmp(name, "scale_HF_GK1")==0)
  {
    return PARAM_scale_HF_GK1;
  }
  else if (strcmp(name, "scale_HF_GNaL")==0)
  {
    return PARAM_scale_HF_GNaL;
  }
  else if (strcmp(name, "scale_HF_Gncx")==0)
  {
    return PARAM_scale_HF_Gncx;
  }
  else if (strcmp(name, "scale_HF_Gto")==0)
  {
    return PARAM_scale_HF_Gto;
  }
  else if (strcmp(name, "scale_HF_Jleak")==0)
  {
    return PARAM_scale_HF_Jleak;
  }
  else if (strcmp(name, "scale_HF_Jrel_inf")==0)
  {
    return PARAM_scale_HF_Jrel_inf;
  }
  else if (strcmp(name, "scale_HF_Jup")==0)
  {
    return PARAM_scale_HF_Jup;
  }
  else if (strcmp(name, "scale_HF_Pnak")==0)
  {
    return PARAM_scale_HF_Pnak;
  }
  else if (strcmp(name, "scale_HF_cat50_ref")==0)
  {
    return PARAM_scale_HF_cat50_ref;
  }
  else if (strcmp(name, "scale_HF_thL")==0)
  {
    return PARAM_scale_HF_thL;
  }
  else if (strcmp(name, "scale_drug_ICaL")==0)
  {
    return PARAM_scale_drug_ICaL;
  }
  else if (strcmp(name, "scale_drug_ICab")==0)
  {
    return PARAM_scale_drug_ICab;
  }
  else if (strcmp(name, "scale_drug_IK1")==0)
  {
    return PARAM_scale_drug_IK1;
  }
  else if (strcmp(name, "scale_drug_IKb")==0)
  {
    return PARAM_scale_drug_IKb;
  }
  else if (strcmp(name, "scale_drug_IKr")==0)
  {
    return PARAM_scale_drug_IKr;
  }
  else if (strcmp(name, "scale_drug_IKs")==0)
  {
    return PARAM_scale_drug_IKs;
  }
  else if (strcmp(name, "scale_drug_INa")==0)
  {
    return PARAM_scale_drug_INa;
  }
  else if (strcmp(name, "scale_drug_INaL")==0)
  {
    return PARAM_scale_drug_INaL;
  }
  else if (strcmp(name, "scale_drug_INab")==0)
  {
    return PARAM_scale_drug_INab;
  }
  else if (strcmp(name, "scale_drug_IpCa")==0)
  {
    return PARAM_scale_drug_IpCa;
  }
  else if (strcmp(name, "scale_drug_Isack")==0)
  {
    return PARAM_scale_drug_Isack;
  }
  else if (strcmp(name, "scale_drug_Isacns")==0)
  {
    return PARAM_scale_drug_Isacns;
  }
  else if (strcmp(name, "scale_drug_Ito")==0)
  {
    return PARAM_scale_drug_Ito;
  }
  else if (strcmp(name, "Ahf")==0)
  {
    return PARAM_Ahf;
  }
  else if (strcmp(name, "GNa")==0)
  {
    return PARAM_GNa;
  }
  else if (strcmp(name, "thL")==0)
  {
    return PARAM_thL;
  }
  else if (strcmp(name, "Gto")==0)
  {
    return PARAM_Gto;
  }
  else if (strcmp(name, "delta_epi")==0)
  {
    return PARAM_delta_epi;
  }
  else if (strcmp(name, "Aff")==0)
  {
    return PARAM_Aff;
  }
  else if (strcmp(name, "Kmn")==0)
  {
    return PARAM_Kmn;
  }
  else if (strcmp(name, "k2n")==0)
  {
    return PARAM_k2n;
  }
  else if (strcmp(name, "tjca")==0)
  {
    return PARAM_tjca;
  }
  else if (strcmp(name, "zca")==0)
  {
    return PARAM_zca;
  }
  else if (strcmp(name, "bt")==0)
  {
    return PARAM_bt;
  }
  else if (strcmp(name, "Beta0")==0)
  {
    return PARAM_Beta0;
  }
  else if (strcmp(name, "Beta1")==0)
  {
    return PARAM_Beta1;
  }
  else if (strcmp(name, "Tot_A")==0)
  {
    return PARAM_Tot_A;
  }
  else if (strcmp(name, "Tref")==0)
  {
    return PARAM_Tref;
  }
  else if (strcmp(name, "Trpn50")==0)
  {
    return PARAM_Trpn50;
  }
  else if (strcmp(name, "calib")==0)
  {
    return PARAM_calib;
  }
  else if (strcmp(name, "cat50_ref")==0)
  {
    return PARAM_cat50_ref;
  }
  else if (strcmp(name, "dLambda")==0)
  {
    return PARAM_dLambda;
  }
  else if (strcmp(name, "emcoupling")==0)
  {
    return PARAM_emcoupling;
  }
  else if (strcmp(name, "etal")==0)
  {
    return PARAM_etal;
  }
  else if (strcmp(name, "etas")==0)
  {
    return PARAM_etas;
  }
  else if (strcmp(name, "gammas")==0)
  {
    return PARAM_gammas;
  }
  else if (strcmp(name, "gammaw")==0)
  {
    return PARAM_gammaw;
  }
  else if (strcmp(name, "isacs")==0)
  {
    return PARAM_isacs;
  }
  else if (strcmp(name, "ktrpn")==0)
  {
    return PARAM_ktrpn;
  }
  else if (strcmp(name, "ku")==0)
  {
    return PARAM_ku;
  }
  else if (strcmp(name, "kuw")==0)
  {
    return PARAM_kuw;
  }
  else if (strcmp(name, "kws")==0)
  {
    return PARAM_kws;
  }
  else if (strcmp(name, "lmbda")==0)
  {
    return PARAM_lmbda;
  }
  else if (strcmp(name, "mode")==0)
  {
    return PARAM_mode;
  }
  else if (strcmp(name, "ntm")==0)
  {
    return PARAM_ntm;
  }
  else if (strcmp(name, "ntrpn")==0)
  {
    return PARAM_ntrpn;
  }
  else if (strcmp(name, "p_a")==0)
  {
    return PARAM_p_a;
  }
  else if (strcmp(name, "p_b")==0)
  {
    return PARAM_p_b;
  }
  else if (strcmp(name, "p_k")==0)
  {
    return PARAM_p_k;
  }
  else if (strcmp(name, "phi")==0)
  {
    return PARAM_phi;
  }
  else if (strcmp(name, "rs")==0)
  {
    return PARAM_rs;
  }
  else if (strcmp(name, "rw")==0)
  {
    return PARAM_rw;
  }
  else if (strcmp(name, "CaMKo")==0)
  {
    return PARAM_CaMKo;
  }
  else if (strcmp(name, "KmCaM")==0)
  {
    return PARAM_KmCaM;
  }
  else if (strcmp(name, "KmCaMK")==0)
  {
    return PARAM_KmCaMK;
  }
  else if (strcmp(name, "aCaMK")==0)
  {
    return PARAM_aCaMK;
  }
  else if (strcmp(name, "bCaMK")==0)
  {
    return PARAM_bCaMK;
  }
  else if (strcmp(name, "PKNa")==0)
  {
    return PARAM_PKNa;
  }
  else if (strcmp(name, "Gncx")==0)
  {
    return PARAM_Gncx;
  }
  else if (strcmp(name, "KmCaAct")==0)
  {
    return PARAM_KmCaAct;
  }
  else if (strcmp(name, "kasymm")==0)
  {
    return PARAM_kasymm;
  }
  else if (strcmp(name, "kcaoff")==0)
  {
    return PARAM_kcaoff;
  }
  else if (strcmp(name, "kcaon")==0)
  {
    return PARAM_kcaon;
  }
  else if (strcmp(name, "kna1")==0)
  {
    return PARAM_kna1;
  }
  else if (strcmp(name, "kna2")==0)
  {
    return PARAM_kna2;
  }
  else if (strcmp(name, "kna3")==0)
  {
    return PARAM_kna3;
  }
  else if (strcmp(name, "qca")==0)
  {
    return PARAM_qca;
  }
  else if (strcmp(name, "qna")==0)
  {
    return PARAM_qna;
  }
  else if (strcmp(name, "wca")==0)
  {
    return PARAM_wca;
  }
  else if (strcmp(name, "wna")==0)
  {
    return PARAM_wna;
  }
  else if (strcmp(name, "wnaca")==0)
  {
    return PARAM_wnaca;
  }
  else if (strcmp(name, "H")==0)
  {
    return PARAM_H;
  }
  else if (strcmp(name, "Khp")==0)
  {
    return PARAM_Khp;
  }
  else if (strcmp(name, "Kki")==0)
  {
    return PARAM_Kki;
  }
  else if (strcmp(name, "Kko")==0)
  {
    return PARAM_Kko;
  }
  else if (strcmp(name, "Kmgatp")==0)
  {
    return PARAM_Kmgatp;
  }
  else if (strcmp(name, "Knai0")==0)
  {
    return PARAM_Knai0;
  }
  else if (strcmp(name, "Knao0")==0)
  {
    return PARAM_Knao0;
  }
  else if (strcmp(name, "Knap")==0)
  {
    return PARAM_Knap;
  }
  else if (strcmp(name, "Kxkur")==0)
  {
    return PARAM_Kxkur;
  }
  else if (strcmp(name, "MgADP")==0)
  {
    return PARAM_MgADP;
  }
  else if (strcmp(name, "MgATP")==0)
  {
    return PARAM_MgATP;
  }
  else if (strcmp(name, "Pnak")==0)
  {
    return PARAM_Pnak;
  }
  else if (strcmp(name, "delta")==0)
  {
    return PARAM_delta;
  }
  else if (strcmp(name, "eP")==0)
  {
    return PARAM_eP;
  }
  else if (strcmp(name, "k1m")==0)
  {
    return PARAM_k1m;
  }
  else if (strcmp(name, "k1p")==0)
  {
    return PARAM_k1p;
  }
  else if (strcmp(name, "k2m")==0)
  {
    return PARAM_k2m;
  }
  else if (strcmp(name, "k2p")==0)
  {
    return PARAM_k2p;
  }
  else if (strcmp(name, "k3m")==0)
  {
    return PARAM_k3m;
  }
  else if (strcmp(name, "k3p")==0)
  {
    return PARAM_k3p;
  }
  else if (strcmp(name, "k4m")==0)
  {
    return PARAM_k4m;
  }
  else if (strcmp(name, "k4p")==0)
  {
    return PARAM_k4p;
  }
  else if (strcmp(name, "zk")==0)
  {
    return PARAM_zk;
  }
  else if (strcmp(name, "GKb")==0)
  {
    return PARAM_GKb;
  }
  else if (strcmp(name, "PNab")==0)
  {
    return PARAM_PNab;
  }
  else if (strcmp(name, "PCab")==0)
  {
    return PARAM_PCab;
  }
  else if (strcmp(name, "GpCa")==0)
  {
    return PARAM_GpCa;
  }
  else if (strcmp(name, "Esac_ns")==0)
  {
    return PARAM_Esac_ns;
  }
  else if (strcmp(name, "Gsac_k")==0)
  {
    return PARAM_Gsac_k;
  }
  else if (strcmp(name, "Gsac_ns")==0)
  {
    return PARAM_Gsac_ns;
  }
  else if (strcmp(name, "lambda_max")==0)
  {
    return PARAM_lambda_max;
  }
  else if (strcmp(name, "amp")==0)
  {
    return PARAM_amp;
  }
  else if (strcmp(name, "duration")==0)
  {
    return PARAM_duration;
  }
  else if (strcmp(name, "BSLmax")==0)
  {
    return PARAM_BSLmax;
  }
  else if (strcmp(name, "BSRmax")==0)
  {
    return PARAM_BSRmax;
  }
  else if (strcmp(name, "KmBSL")==0)
  {
    return PARAM_KmBSL;
  }
  else if (strcmp(name, "KmBSR")==0)
  {
    return PARAM_KmBSR;
  }
  else if (strcmp(name, "cmdnmax")==0)
  {
    return PARAM_cmdnmax;
  }
  else if (strcmp(name, "csqnmax")==0)
  {
    return PARAM_csqnmax;
  }
  else if (strcmp(name, "kmcmdn")==0)
  {
    return PARAM_kmcmdn;
  }
  else if (strcmp(name, "kmcsqn")==0)
  {
    return PARAM_kmcsqn;
  }
  else if (strcmp(name, "kmtrpn")==0)
  {
    return PARAM_kmtrpn;
  }
  else if (strcmp(name, "trpnmax")==0)
  {
    return PARAM_trpnmax;
  }
  return -1;
}

int monitored_index(const char name[])
{
  if (strcmp(name, "vcell")==0)
  {
    return MONITOR_vcell;
  }
  else if (strcmp(name, "Ageo")==0)
  {
    return MONITOR_Ageo;
  }
  else if (strcmp(name, "Acap")==0)
  {
    return MONITOR_Acap;
  }
  else if (strcmp(name, "vmyo")==0)
  {
    return MONITOR_vmyo;
  }
  else if (strcmp(name, "vnsr")==0)
  {
    return MONITOR_vnsr;
  }
  else if (strcmp(name, "vjsr")==0)
  {
    return MONITOR_vjsr;
  }
  else if (strcmp(name, "vss")==0)
  {
    return MONITOR_vss;
  }
  else if (strcmp(name, "CaMKb")==0)
  {
    return MONITOR_CaMKb;
  }
  else if (strcmp(name, "CaMKa")==0)
  {
    return MONITOR_CaMKa;
  }
  else if (strcmp(name, "mss")==0)
  {
    return MONITOR_mss;
  }
  else if (strcmp(name, "tm")==0)
  {
    return MONITOR_tm;
  }
  else if (strcmp(name, "hss")==0)
  {
    return MONITOR_hss;
  }
  else if (strcmp(name, "thf")==0)
  {
    return MONITOR_thf;
  }
  else if (strcmp(name, "ths")==0)
  {
    return MONITOR_ths;
  }
  else if (strcmp(name, "Ahs")==0)
  {
    return MONITOR_Ahs;
  }
  else if (strcmp(name, "h")==0)
  {
    return MONITOR_h;
  }
  else if (strcmp(name, "jss")==0)
  {
    return MONITOR_jss;
  }
  else if (strcmp(name, "tj")==0)
  {
    return MONITOR_tj;
  }
  else if (strcmp(name, "hssp")==0)
  {
    return MONITOR_hssp;
  }
  else if (strcmp(name, "thsp")==0)
  {
    return MONITOR_thsp;
  }
  else if (strcmp(name, "hp")==0)
  {
    return MONITOR_hp;
  }
  else if (strcmp(name, "tjp")==0)
  {
    return MONITOR_tjp;
  }
  else if (strcmp(name, "fINap")==0)
  {
    return MONITOR_fINap;
  }
  else if (strcmp(name, "INa")==0)
  {
    return MONITOR_INa;
  }
  else if (strcmp(name, "mLss")==0)
  {
    return MONITOR_mLss;
  }
  else if (strcmp(name, "tmL")==0)
  {
    return MONITOR_tmL;
  }
  else if (strcmp(name, "hLss")==0)
  {
    return MONITOR_hLss;
  }
  else if (strcmp(name, "hLssp")==0)
  {
    return MONITOR_hLssp;
  }
  else if (strcmp(name, "thLp")==0)
  {
    return MONITOR_thLp;
  }
  else if (strcmp(name, "GNaL")==0)
  {
    return MONITOR_GNaL;
  }
  else if (strcmp(name, "fINaLp")==0)
  {
    return MONITOR_fINaLp;
  }
  else if (strcmp(name, "INaL")==0)
  {
    return MONITOR_INaL;
  }
  else if (strcmp(name, "ass")==0)
  {
    return MONITOR_ass;
  }
  else if (strcmp(name, "ta")==0)
  {
    return MONITOR_ta;
  }
  else if (strcmp(name, "iss")==0)
  {
    return MONITOR_iss;
  }
  else if (strcmp(name, "tiF")==0)
  {
    return MONITOR_tiF;
  }
  else if (strcmp(name, "tiS")==0)
  {
    return MONITOR_tiS;
  }
  else if (strcmp(name, "AiF")==0)
  {
    return MONITOR_AiF;
  }
  else if (strcmp(name, "AiS")==0)
  {
    return MONITOR_AiS;
  }
  else if (strcmp(name, "i")==0)
  {
    return MONITOR_i;
  }
  else if (strcmp(name, "assp")==0)
  {
    return MONITOR_assp;
  }
  else if (strcmp(name, "dti_develop")==0)
  {
    return MONITOR_dti_develop;
  }
  else if (strcmp(name, "dti_recover")==0)
  {
    return MONITOR_dti_recover;
  }
  else if (strcmp(name, "tiFp")==0)
  {
    return MONITOR_tiFp;
  }
  else if (strcmp(name, "tiSp")==0)
  {
    return MONITOR_tiSp;
  }
  else if (strcmp(name, "ip")==0)
  {
    return MONITOR_ip;
  }
  else if (strcmp(name, "fItop")==0)
  {
    return MONITOR_fItop;
  }
  else if (strcmp(name, "Ito")==0)
  {
    return MONITOR_Ito;
  }
  else if (strcmp(name, "dss")==0)
  {
    return MONITOR_dss;
  }
  else if (strcmp(name, "td")==0)
  {
    return MONITOR_td;
  }
  else if (strcmp(name, "fss")==0)
  {
    return MONITOR_fss;
  }
  else if (strcmp(name, "tff")==0)
  {
    return MONITOR_tff;
  }
  else if (strcmp(name, "tfs")==0)
  {
    return MONITOR_tfs;
  }
  else if (strcmp(name, "Afs")==0)
  {
    return MONITOR_Afs;
  }
  else if (strcmp(name, "f")==0)
  {
    return MONITOR_f;
  }
  else if (strcmp(name, "fcass")==0)
  {
    return MONITOR_fcass;
  }
  else if (strcmp(name, "tfcaf")==0)
  {
    return MONITOR_tfcaf;
  }
  else if (strcmp(name, "tfcas")==0)
  {
    return MONITOR_tfcas;
  }
  else if (strcmp(name, "Afcaf")==0)
  {
    return MONITOR_Afcaf;
  }
  else if (strcmp(name, "Afcas")==0)
  {
    return MONITOR_Afcas;
  }
  else if (strcmp(name, "fca")==0)
  {
    return MONITOR_fca;
  }
  else if (strcmp(name, "tffp")==0)
  {
    return MONITOR_tffp;
  }
  else if (strcmp(name, "fp")==0)
  {
    return MONITOR_fp;
  }
  else if (strcmp(name, "tfcafp")==0)
  {
    return MONITOR_tfcafp;
  }
  else if (strcmp(name, "fcap")==0)
  {
    return MONITOR_fcap;
  }
  else if (strcmp(name, "km2n")==0)
  {
    return MONITOR_km2n;
  }
  else if (strcmp(name, "anca")==0)
  {
    return MONITOR_anca;
  }
  else if (strcmp(name, "PhiCaL")==0)
  {
    return MONITOR_PhiCaL;
  }
  else if (strcmp(name, "PhiCaNa")==0)
  {
    return MONITOR_PhiCaNa;
  }
  else if (strcmp(name, "PhiCaK")==0)
  {
    return MONITOR_PhiCaK;
  }
  else if (strcmp(name, "PCa")==0)
  {
    return MONITOR_PCa;
  }
  else if (strcmp(name, "PCap")==0)
  {
    return MONITOR_PCap;
  }
  else if (strcmp(name, "PCaNa")==0)
  {
    return MONITOR_PCaNa;
  }
  else if (strcmp(name, "PCaK")==0)
  {
    return MONITOR_PCaK;
  }
  else if (strcmp(name, "PCaNap")==0)
  {
    return MONITOR_PCaNap;
  }
  else if (strcmp(name, "PCaKp")==0)
  {
    return MONITOR_PCaKp;
  }
  else if (strcmp(name, "fICaLp")==0)
  {
    return MONITOR_fICaLp;
  }
  else if (strcmp(name, "ICaL")==0)
  {
    return MONITOR_ICaL;
  }
  else if (strcmp(name, "ICaNa")==0)
  {
    return MONITOR_ICaNa;
  }
  else if (strcmp(name, "ICaK")==0)
  {
    return MONITOR_ICaK;
  }
  else if (strcmp(name, "xrss")==0)
  {
    return MONITOR_xrss;
  }
  else if (strcmp(name, "txrf")==0)
  {
    return MONITOR_txrf;
  }
  else if (strcmp(name, "txrs")==0)
  {
    return MONITOR_txrs;
  }
  else if (strcmp(name, "Axrf")==0)
  {
    return MONITOR_Axrf;
  }
  else if (strcmp(name, "Axrs")==0)
  {
    return MONITOR_Axrs;
  }
  else if (strcmp(name, "xr")==0)
  {
    return MONITOR_xr;
  }
  else if (strcmp(name, "rkr")==0)
  {
    return MONITOR_rkr;
  }
  else if (strcmp(name, "GKr")==0)
  {
    return MONITOR_GKr;
  }
  else if (strcmp(name, "IKr")==0)
  {
    return MONITOR_IKr;
  }
  else if (strcmp(name, "xs1ss")==0)
  {
    return MONITOR_xs1ss;
  }
  else if (strcmp(name, "txs1")==0)
  {
    return MONITOR_txs1;
  }
  else if (strcmp(name, "xs2ss")==0)
  {
    return MONITOR_xs2ss;
  }
  else if (strcmp(name, "txs2")==0)
  {
    return MONITOR_txs2;
  }
  else if (strcmp(name, "KsCa")==0)
  {
    return MONITOR_KsCa;
  }
  else if (strcmp(name, "GKs")==0)
  {
    return MONITOR_GKs;
  }
  else if (strcmp(name, "IKs")==0)
  {
    return MONITOR_IKs;
  }
  else if (strcmp(name, "xk1ss")==0)
  {
    return MONITOR_xk1ss;
  }
  else if (strcmp(name, "txk1")==0)
  {
    return MONITOR_txk1;
  }
  else if (strcmp(name, "rk1")==0)
  {
    return MONITOR_rk1;
  }
  else if (strcmp(name, "GK1")==0)
  {
    return MONITOR_GK1;
  }
  else if (strcmp(name, "IK1")==0)
  {
    return MONITOR_IK1;
  }
  else if (strcmp(name, "a_rel")==0)
  {
    return MONITOR_a_rel;
  }
  else if (strcmp(name, "Jrel_inf")==0)
  {
    return MONITOR_Jrel_inf;
  }
  else if (strcmp(name, "tau_rel_tmp")==0)
  {
    return MONITOR_tau_rel_tmp;
  }
  else if (strcmp(name, "tau_rel")==0)
  {
    return MONITOR_tau_rel;
  }
  else if (strcmp(name, "btp")==0)
  {
    return MONITOR_btp;
  }
  else if (strcmp(name, "a_relp")==0)
  {
    return MONITOR_a_relp;
  }
  else if (strcmp(name, "Jrel_infp")==0)
  {
    return MONITOR_Jrel_infp;
  }
  else if (strcmp(name, "tau_relp_tmp")==0)
  {
    return MONITOR_tau_relp_tmp;
  }
  else if (strcmp(name, "tau_relp")==0)
  {
    return MONITOR_tau_relp;
  }
  else if (strcmp(name, "fJrelp")==0)
  {
    return MONITOR_fJrelp;
  }
  else if (strcmp(name, "Jrel")==0)
  {
    return MONITOR_Jrel;
  }
  else if (strcmp(name, "Bcass")==0)
  {
    return MONITOR_Bcass;
  }
  else if (strcmp(name, "Bcajsr")==0)
  {
    return MONITOR_Bcajsr;
  }
  else if (strcmp(name, "XS_max")==0)
  {
    return MONITOR_XS_max;
  }
  else if (strcmp(name, "XW_max")==0)
  {
    return MONITOR_XW_max;
  }
  else if (strcmp(name, "CaTrpn_max")==0)
  {
    return MONITOR_CaTrpn_max;
  }
  else if (strcmp(name, "kwu")==0)
  {
    return MONITOR_kwu;
  }
  else if (strcmp(name, "ksu")==0)
  {
    return MONITOR_ksu;
  }
  else if (strcmp(name, "Aw")==0)
  {
    return MONITOR_Aw;
  }
  else if (strcmp(name, "As")==0)
  {
    return MONITOR_As;
  }
  else if (strcmp(name, "cw")==0)
  {
    return MONITOR_cw;
  }
  else if (strcmp(name, "cs")==0)
  {
    return MONITOR_cs;
  }
  else if (strcmp(name, "lambda_min12")==0)
  {
    return MONITOR_lambda_min12;
  }
  else if (strcmp(name, "lambda_min087")==0)
  {
    return MONITOR_lambda_min087;
  }
  else if (strcmp(name, "h_lambda_prima")==0)
  {
    return MONITOR_h_lambda_prima;
  }
  else if (strcmp(name, "h_lambda")==0)
  {
    return MONITOR_h_lambda;
  }
  else if (strcmp(name, "XU")==0)
  {
    return MONITOR_XU;
  }
  else if (strcmp(name, "gammawu")==0)
  {
    return MONITOR_gammawu;
  }
  else if (strcmp(name, "gammasu")==0)
  {
    return MONITOR_gammasu;
  }
  else if (strcmp(name, "cat50")==0)
  {
    return MONITOR_cat50;
  }
  else if (strcmp(name, "kb")==0)
  {
    return MONITOR_kb;
  }
  else if (strcmp(name, "Ta")==0)
  {
    return MONITOR_Ta;
  }
  else if (strcmp(name, "C")==0)
  {
    return MONITOR_C;
  }
  else if (strcmp(name, "dCd")==0)
  {
    return MONITOR_dCd;
  }
  else if (strcmp(name, "eta")==0)
  {
    return MONITOR_eta;
  }
  else if (strcmp(name, "Fd")==0)
  {
    return MONITOR_Fd;
  }
  else if (strcmp(name, "F1")==0)
  {
    return MONITOR_F1;
  }
  else if (strcmp(name, "Tp")==0)
  {
    return MONITOR_Tp;
  }
  else if (strcmp(name, "Ttot")==0)
  {
    return MONITOR_Ttot;
  }
  else if (strcmp(name, "Bcai")==0)
  {
    return MONITOR_Bcai;
  }
  else if (strcmp(name, "J_TRPN")==0)
  {
    return MONITOR_J_TRPN;
  }
  else if (strcmp(name, "ENa")==0)
  {
    return MONITOR_ENa;
  }
  else if (strcmp(name, "EK")==0)
  {
    return MONITOR_EK;
  }
  else if (strcmp(name, "EKs")==0)
  {
    return MONITOR_EKs;
  }
  else if (strcmp(name, "vffrt")==0)
  {
    return MONITOR_vffrt;
  }
  else if (strcmp(name, "vfrt")==0)
  {
    return MONITOR_vfrt;
  }
  else if (strcmp(name, "hca")==0)
  {
    return MONITOR_hca;
  }
  else if (strcmp(name, "hna")==0)
  {
    return MONITOR_hna;
  }
  else if (strcmp(name, "h1_i")==0)
  {
    return MONITOR_h1_i;
  }
  else if (strcmp(name, "h2_i")==0)
  {
    return MONITOR_h2_i;
  }
  else if (strcmp(name, "h3_i")==0)
  {
    return MONITOR_h3_i;
  }
  else if (strcmp(name, "h4_i")==0)
  {
    return MONITOR_h4_i;
  }
  else if (strcmp(name, "h5_i")==0)
  {
    return MONITOR_h5_i;
  }
  else if (strcmp(name, "h6_i")==0)
  {
    return MONITOR_h6_i;
  }
  else if (strcmp(name, "h7_i")==0)
  {
    return MONITOR_h7_i;
  }
  else if (strcmp(name, "h8_i")==0)
  {
    return MONITOR_h8_i;
  }
  else if (strcmp(name, "h9_i")==0)
  {
    return MONITOR_h9_i;
  }
  else if (strcmp(name, "h10_i")==0)
  {
    return MONITOR_h10_i;
  }
  else if (strcmp(name, "h11_i")==0)
  {
    return MONITOR_h11_i;
  }
  else if (strcmp(name, "h12_i")==0)
  {
    return MONITOR_h12_i;
  }
  else if (strcmp(name, "k1_i")==0)
  {
    return MONITOR_k1_i;
  }
  else if (strcmp(name, "k2_i")==0)
  {
    return MONITOR_k2_i;
  }
  else if (strcmp(name, "k3p_i")==0)
  {
    return MONITOR_k3p_i;
  }
  else if (strcmp(name, "k3pp_i")==0)
  {
    return MONITOR_k3pp_i;
  }
  else if (strcmp(name, "k3_i")==0)
  {
    return MONITOR_k3_i;
  }
  else if (strcmp(name, "k4p_i")==0)
  {
    return MONITOR_k4p_i;
  }
  else if (strcmp(name, "k4pp_i")==0)
  {
    return MONITOR_k4pp_i;
  }
  else if (strcmp(name, "k4_i")==0)
  {
    return MONITOR_k4_i;
  }
  else if (strcmp(name, "k5_i")==0)
  {
    return MONITOR_k5_i;
  }
  else if (strcmp(name, "k6_i")==0)
  {
    return MONITOR_k6_i;
  }
  else if (strcmp(name, "k7_i")==0)
  {
    return MONITOR_k7_i;
  }
  else if (strcmp(name, "k8_i")==0)
  {
    return MONITOR_k8_i;
  }
  else if (strcmp(name, "x1_i")==0)
  {
    return MONITOR_x1_i;
  }
  else if (strcmp(name, "x2_i")==0)
  {
    return MONITOR_x2_i;
  }
  else if (strcmp(name, "x3_i")==0)
  {
    return MONITOR_x3_i;
  }
  else if (strcmp(name, "x4_i")==0)
  {
    return MONITOR_x4_i;
  }
  else if (strcmp(name, "E1_i")==0)
  {
    return MONITOR_E1_i;
  }
  else if (strcmp(name, "E2_i")==0)
  {
    return MONITOR_E2_i;
  }
  else if (strcmp(name, "E3_i")==0)
  {
    return MONITOR_E3_i;
  }
  else if (strcmp(name, "E4_i")==0)
  {
    return MONITOR_E4_i;
  }
  else if (strcmp(name, "allo_i")==0)
  {
    return MONITOR_allo_i;
  }
  else if (strcmp(name, "zna")==0)
  {
    return MONITOR_zna;
  }
  else if (strcmp(name, "JncxNa_i")==0)
  {
    return MONITOR_JncxNa_i;
  }
  else if (strcmp(name, "JncxCa_i")==0)
  {
    return MONITOR_JncxCa_i;
  }
  else if (strcmp(name, "INaCa_i")==0)
  {
    return MONITOR_INaCa_i;
  }
  else if (strcmp(name, "h1")==0)
  {
    return MONITOR_h1;
  }
  else if (strcmp(name, "h2")==0)
  {
    return MONITOR_h2;
  }
  else if (strcmp(name, "h3")==0)
  {
    return MONITOR_h3;
  }
  else if (strcmp(name, "h4")==0)
  {
    return MONITOR_h4;
  }
  else if (strcmp(name, "h5")==0)
  {
    return MONITOR_h5;
  }
  else if (strcmp(name, "h6")==0)
  {
    return MONITOR_h6;
  }
  else if (strcmp(name, "h7")==0)
  {
    return MONITOR_h7;
  }
  else if (strcmp(name, "h8")==0)
  {
    return MONITOR_h8;
  }
  else if (strcmp(name, "h9")==0)
  {
    return MONITOR_h9;
  }
  else if (strcmp(name, "h10")==0)
  {
    return MONITOR_h10;
  }
  else if (strcmp(name, "h11")==0)
  {
    return MONITOR_h11;
  }
  else if (strcmp(name, "h12")==0)
  {
    return MONITOR_h12;
  }
  else if (strcmp(name, "k1")==0)
  {
    return MONITOR_k1;
  }
  else if (strcmp(name, "k2")==0)
  {
    return MONITOR_k2;
  }
  else if (strcmp(name, "k3p_ss")==0)
  {
    return MONITOR_k3p_ss;
  }
  else if (strcmp(name, "k3pp")==0)
  {
    return MONITOR_k3pp;
  }
  else if (strcmp(name, "k3")==0)
  {
    return MONITOR_k3;
  }
  else if (strcmp(name, "k4p_ss")==0)
  {
    return MONITOR_k4p_ss;
  }
  else if (strcmp(name, "k4pp")==0)
  {
    return MONITOR_k4pp;
  }
  else if (strcmp(name, "k4")==0)
  {
    return MONITOR_k4;
  }
  else if (strcmp(name, "k5")==0)
  {
    return MONITOR_k5;
  }
  else if (strcmp(name, "k6")==0)
  {
    return MONITOR_k6;
  }
  else if (strcmp(name, "k7")==0)
  {
    return MONITOR_k7;
  }
  else if (strcmp(name, "k8")==0)
  {
    return MONITOR_k8;
  }
  else if (strcmp(name, "x1_ss")==0)
  {
    return MONITOR_x1_ss;
  }
  else if (strcmp(name, "x2_ss")==0)
  {
    return MONITOR_x2_ss;
  }
  else if (strcmp(name, "x3_ss")==0)
  {
    return MONITOR_x3_ss;
  }
  else if (strcmp(name, "x4_ss")==0)
  {
    return MONITOR_x4_ss;
  }
  else if (strcmp(name, "E1_ss")==0)
  {
    return MONITOR_E1_ss;
  }
  else if (strcmp(name, "E2_ss")==0)
  {
    return MONITOR_E2_ss;
  }
  else if (strcmp(name, "E3_ss")==0)
  {
    return MONITOR_E3_ss;
  }
  else if (strcmp(name, "E4_ss")==0)
  {
    return MONITOR_E4_ss;
  }
  else if (strcmp(name, "allo_ss")==0)
  {
    return MONITOR_allo_ss;
  }
  else if (strcmp(name, "JncxNa_ss")==0)
  {
    return MONITOR_JncxNa_ss;
  }
  else if (strcmp(name, "JncxCa_ss")==0)
  {
    return MONITOR_JncxCa_ss;
  }
  else if (strcmp(name, "INaCa_ss")==0)
  {
    return MONITOR_INaCa_ss;
  }
  else if (strcmp(name, "Knai")==0)
  {
    return MONITOR_Knai;
  }
  else if (strcmp(name, "Knao")==0)
  {
    return MONITOR_Knao;
  }
  else if (strcmp(name, "P")==0)
  {
    return MONITOR_P;
  }
  else if (strcmp(name, "a1")==0)
  {
    return MONITOR_a1;
  }
  else if (strcmp(name, "b1")==0)
  {
    return MONITOR_b1;
  }
  else if (strcmp(name, "a2")==0)
  {
    return MONITOR_a2;
  }
  else if (strcmp(name, "b2")==0)
  {
    return MONITOR_b2;
  }
  else if (strcmp(name, "a3")==0)
  {
    return MONITOR_a3;
  }
  else if (strcmp(name, "b3")==0)
  {
    return MONITOR_b3;
  }
  else if (strcmp(name, "a4")==0)
  {
    return MONITOR_a4;
  }
  else if (strcmp(name, "b4")==0)
  {
    return MONITOR_b4;
  }
  else if (strcmp(name, "x1")==0)
  {
    return MONITOR_x1;
  }
  else if (strcmp(name, "x2")==0)
  {
    return MONITOR_x2;
  }
  else if (strcmp(name, "x3")==0)
  {
    return MONITOR_x3;
  }
  else if (strcmp(name, "x4")==0)
  {
    return MONITOR_x4;
  }
  else if (strcmp(name, "E1")==0)
  {
    return MONITOR_E1;
  }
  else if (strcmp(name, "E2")==0)
  {
    return MONITOR_E2;
  }
  else if (strcmp(name, "E3")==0)
  {
    return MONITOR_E3;
  }
  else if (strcmp(name, "E4")==0)
  {
    return MONITOR_E4;
  }
  else if (strcmp(name, "JnakNa")==0)
  {
    return MONITOR_JnakNa;
  }
  else if (strcmp(name, "JnakK")==0)
  {
    return MONITOR_JnakK;
  }
  else if (strcmp(name, "INaK")==0)
  {
    return MONITOR_INaK;
  }
  else if (strcmp(name, "xkb")==0)
  {
    return MONITOR_xkb;
  }
  else if (strcmp(name, "IKb")==0)
  {
    return MONITOR_IKb;
  }
  else if (strcmp(name, "INab")==0)
  {
    return MONITOR_INab;
  }
  else if (strcmp(name, "ICab")==0)
  {
    return MONITOR_ICab;
  }
  else if (strcmp(name, "IpCa")==0)
  {
    return MONITOR_IpCa;
  }
  else if (strcmp(name, "Isac_P_ns")==0)
  {
    return MONITOR_Isac_P_ns;
  }
  else if (strcmp(name, "Isac_P_k")==0)
  {
    return MONITOR_Isac_P_k;
  }
  else if (strcmp(name, "Istim")==0)
  {
    return MONITOR_Istim;
  }
  else if (strcmp(name, "JdiffNa")==0)
  {
    return MONITOR_JdiffNa;
  }
  else if (strcmp(name, "JdiffK")==0)
  {
    return MONITOR_JdiffK;
  }
  else if (strcmp(name, "Jdiff")==0)
  {
    return MONITOR_Jdiff;
  }
  else if (strcmp(name, "Jupnp")==0)
  {
    return MONITOR_Jupnp;
  }
  else if (strcmp(name, "Jupp")==0)
  {
    return MONITOR_Jupp;
  }
  else if (strcmp(name, "fJupp")==0)
  {
    return MONITOR_fJupp;
  }
  else if (strcmp(name, "Jleak")==0)
  {
    return MONITOR_Jleak;
  }
  else if (strcmp(name, "Jup")==0)
  {
    return MONITOR_Jup;
  }
  else if (strcmp(name, "Jtr")==0)
  {
    return MONITOR_Jtr;
  }
  else if (strcmp(name, "dCaMKt_dt")==0)
  {
    return MONITOR_dCaMKt_dt;
  }
  else if (strcmp(name, "dm_dt")==0)
  {
    return MONITOR_dm_dt;
  }
  else if (strcmp(name, "dhf_dt")==0)
  {
    return MONITOR_dhf_dt;
  }
  else if (strcmp(name, "dhs_dt")==0)
  {
    return MONITOR_dhs_dt;
  }
  else if (strcmp(name, "dj_dt")==0)
  {
    return MONITOR_dj_dt;
  }
  else if (strcmp(name, "dhsp_dt")==0)
  {
    return MONITOR_dhsp_dt;
  }
  else if (strcmp(name, "djp_dt")==0)
  {
    return MONITOR_djp_dt;
  }
  else if (strcmp(name, "dmL_dt")==0)
  {
    return MONITOR_dmL_dt;
  }
  else if (strcmp(name, "dhL_dt")==0)
  {
    return MONITOR_dhL_dt;
  }
  else if (strcmp(name, "dhLp_dt")==0)
  {
    return MONITOR_dhLp_dt;
  }
  else if (strcmp(name, "da_dt")==0)
  {
    return MONITOR_da_dt;
  }
  else if (strcmp(name, "diF_dt")==0)
  {
    return MONITOR_diF_dt;
  }
  else if (strcmp(name, "diS_dt")==0)
  {
    return MONITOR_diS_dt;
  }
  else if (strcmp(name, "dap_dt")==0)
  {
    return MONITOR_dap_dt;
  }
  else if (strcmp(name, "diFp_dt")==0)
  {
    return MONITOR_diFp_dt;
  }
  else if (strcmp(name, "diSp_dt")==0)
  {
    return MONITOR_diSp_dt;
  }
  else if (strcmp(name, "dd_dt")==0)
  {
    return MONITOR_dd_dt;
  }
  else if (strcmp(name, "dff_dt")==0)
  {
    return MONITOR_dff_dt;
  }
  else if (strcmp(name, "dfs_dt")==0)
  {
    return MONITOR_dfs_dt;
  }
  else if (strcmp(name, "dfcaf_dt")==0)
  {
    return MONITOR_dfcaf_dt;
  }
  else if (strcmp(name, "dfcas_dt")==0)
  {
    return MONITOR_dfcas_dt;
  }
  else if (strcmp(name, "djca_dt")==0)
  {
    return MONITOR_djca_dt;
  }
  else if (strcmp(name, "dffp_dt")==0)
  {
    return MONITOR_dffp_dt;
  }
  else if (strcmp(name, "dfcafp_dt")==0)
  {
    return MONITOR_dfcafp_dt;
  }
  else if (strcmp(name, "dnca_dt")==0)
  {
    return MONITOR_dnca_dt;
  }
  else if (strcmp(name, "dxrf_dt")==0)
  {
    return MONITOR_dxrf_dt;
  }
  else if (strcmp(name, "dxrs_dt")==0)
  {
    return MONITOR_dxrs_dt;
  }
  else if (strcmp(name, "dxs1_dt")==0)
  {
    return MONITOR_dxs1_dt;
  }
  else if (strcmp(name, "dxs2_dt")==0)
  {
    return MONITOR_dxs2_dt;
  }
  else if (strcmp(name, "dxk1_dt")==0)
  {
    return MONITOR_dxk1_dt;
  }
  else if (strcmp(name, "dv_dt")==0)
  {
    return MONITOR_dv_dt;
  }
  else if (strcmp(name, "dJrelnp_dt")==0)
  {
    return MONITOR_dJrelnp_dt;
  }
  else if (strcmp(name, "dJrelp_dt")==0)
  {
    return MONITOR_dJrelp_dt;
  }
  else if (strcmp(name, "dnai_dt")==0)
  {
    return MONITOR_dnai_dt;
  }
  else if (strcmp(name, "dnass_dt")==0)
  {
    return MONITOR_dnass_dt;
  }
  else if (strcmp(name, "dki_dt")==0)
  {
    return MONITOR_dki_dt;
  }
  else if (strcmp(name, "dkss_dt")==0)
  {
    return MONITOR_dkss_dt;
  }
  else if (strcmp(name, "dcass_dt")==0)
  {
    return MONITOR_dcass_dt;
  }
  else if (strcmp(name, "dcansr_dt")==0)
  {
    return MONITOR_dcansr_dt;
  }
  else if (strcmp(name, "dcajsr_dt")==0)
  {
    return MONITOR_dcajsr_dt;
  }
  else if (strcmp(name, "dXS_dt")==0)
  {
    return MONITOR_dXS_dt;
  }
  else if (strcmp(name, "dXW_dt")==0)
  {
    return MONITOR_dXW_dt;
  }
  else if (strcmp(name, "dCaTrpn_dt")==0)
  {
    return MONITOR_dCaTrpn_dt;
  }
  else if (strcmp(name, "dTmB_dt")==0)
  {
    return MONITOR_dTmB_dt;
  }
  else if (strcmp(name, "dZetas_dt")==0)
  {
    return MONITOR_dZetas_dt;
  }
  else if (strcmp(name, "dZetaw_dt")==0)
  {
    return MONITOR_dZetaw_dt;
  }
  else if (strcmp(name, "dCd_dt")==0)
  {
    return MONITOR_dCd_dt;
  }
  else if (strcmp(name, "dcai_dt")==0)
  {
    return MONITOR_dcai_dt;
  }
  return -1;
}

// Compute the right hand side of the ORdmm_Land ODE
void rhs(const double *__restrict states, const double t, const double
  *__restrict parameters, double* values)
{

  // Assign states
  const double CaMKt = states[STATE_CaMKt];
  const double m = states[STATE_m];
  const double hf = states[STATE_hf];
  const double hs = states[STATE_hs];
  const double j = states[STATE_j];
  const double hsp = states[STATE_hsp];
  const double jp = states[STATE_jp];
  const double mL = states[STATE_mL];
  const double hL = states[STATE_hL];
  const double hLp = states[STATE_hLp];
  const double a = states[STATE_a];
  const double iF = states[STATE_iF];
  const double iS = states[STATE_iS];
  const double ap = states[STATE_ap];
  const double iFp = states[STATE_iFp];
  const double iSp = states[STATE_iSp];
  const double d = states[STATE_d];
  const double ff = states[STATE_ff];
  const double fs = states[STATE_fs];
  const double fcaf = states[STATE_fcaf];
  const double fcas = states[STATE_fcas];
  const double jca = states[STATE_jca];
  const double ffp = states[STATE_ffp];
  const double fcafp = states[STATE_fcafp];
  const double nca = states[STATE_nca];
  const double xrf = states[STATE_xrf];
  const double xrs = states[STATE_xrs];
  const double xs1 = states[STATE_xs1];
  const double xs2 = states[STATE_xs2];
  const double xk1 = states[STATE_xk1];
  const double v = states[STATE_v];
  const double Jrelnp = states[STATE_Jrelnp];
  const double Jrelp = states[STATE_Jrelp];
  const double nai = states[STATE_nai];
  const double nass = states[STATE_nass];
  const double ki = states[STATE_ki];
  const double kss = states[STATE_kss];
  const double cass = states[STATE_cass];
  const double cansr = states[STATE_cansr];
  const double cajsr = states[STATE_cajsr];
  const double XS = states[STATE_XS];
  const double XW = states[STATE_XW];
  const double CaTrpn = states[STATE_CaTrpn];
  const double TmB = states[STATE_TmB];
  const double Zetas = states[STATE_Zetas];
  const double Zetaw = states[STATE_Zetaw];
  const double Cd = states[STATE_Cd];
  const double cai = states[STATE_cai];

  // Assign parameters
  const double scale_ICaL = parameters[PARAM_scale_ICaL];
  const double scale_IK1 = parameters[PARAM_scale_IK1];
  const double scale_IKr = parameters[PARAM_scale_IKr];
  const double scale_IKs = parameters[PARAM_scale_IKs];
  const double scale_INaL = parameters[PARAM_scale_INaL];
  const double cao = parameters[PARAM_cao];
  const double ko = parameters[PARAM_ko];
  const double nao = parameters[PARAM_nao];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double L = parameters[PARAM_L];
  const double rad = parameters[PARAM_rad];
  const double scale_HF_CaMKa = parameters[PARAM_scale_HF_CaMKa];
  const double scale_HF_GK1 = parameters[PARAM_scale_HF_GK1];
  const double scale_HF_GNaL = parameters[PARAM_scale_HF_GNaL];
  const double scale_HF_Gncx = parameters[PARAM_scale_HF_Gncx];
  const double scale_HF_Gto = parameters[PARAM_scale_HF_Gto];
  const double scale_HF_Jleak = parameters[PARAM_scale_HF_Jleak];
  const double scale_HF_Jrel_inf = parameters[PARAM_scale_HF_Jrel_inf];
  const double scale_HF_Jup = parameters[PARAM_scale_HF_Jup];
  const double scale_HF_Pnak = parameters[PARAM_scale_HF_Pnak];
  const double scale_HF_cat50_ref = parameters[PARAM_scale_HF_cat50_ref];
  const double scale_HF_thL = parameters[PARAM_scale_HF_thL];
  const double scale_drug_ICaL = parameters[PARAM_scale_drug_ICaL];
  const double scale_drug_ICab = parameters[PARAM_scale_drug_ICab];
  const double scale_drug_IK1 = parameters[PARAM_scale_drug_IK1];
  const double scale_drug_IKb = parameters[PARAM_scale_drug_IKb];
  const double scale_drug_IKr = parameters[PARAM_scale_drug_IKr];
  const double scale_drug_IKs = parameters[PARAM_scale_drug_IKs];
  const double scale_drug_INa = parameters[PARAM_scale_drug_INa];
  const double scale_drug_INaL = parameters[PARAM_scale_drug_INaL];
  const double scale_drug_INab = parameters[PARAM_scale_drug_INab];
  const double scale_drug_IpCa = parameters[PARAM_scale_drug_IpCa];
  const double scale_drug_Ito = parameters[PARAM_scale_drug_Ito];
  const double Ahf = parameters[PARAM_Ahf];
  const double GNa = parameters[PARAM_GNa];
  const double thL = parameters[PARAM_thL];
  const double Gto = parameters[PARAM_Gto];
  const double delta_epi = parameters[PARAM_delta_epi];
  const double Aff = parameters[PARAM_Aff];
  const double Kmn = parameters[PARAM_Kmn];
  const double k2n = parameters[PARAM_k2n];
  const double tjca = parameters[PARAM_tjca];
  const double zca = parameters[PARAM_zca];
  const double bt = parameters[PARAM_bt];
  const double Beta1 = parameters[PARAM_Beta1];
  const double Tot_A = parameters[PARAM_Tot_A];
  const double Trpn50 = parameters[PARAM_Trpn50];
  const double cat50_ref = parameters[PARAM_cat50_ref];
  const double dLambda = parameters[PARAM_dLambda];
  const double etal = parameters[PARAM_etal];
  const double etas = parameters[PARAM_etas];
  const double gammas = parameters[PARAM_gammas];
  const double gammaw = parameters[PARAM_gammaw];
  const double ktrpn = parameters[PARAM_ktrpn];
  const double ku = parameters[PARAM_ku];
  const double kuw = parameters[PARAM_kuw];
  const double kws = parameters[PARAM_kws];
  const double lmbda = parameters[PARAM_lmbda];
  const double ntm = parameters[PARAM_ntm];
  const double ntrpn = parameters[PARAM_ntrpn];
  const double p_k = parameters[PARAM_p_k];
  const double phi = parameters[PARAM_phi];
  const double rs = parameters[PARAM_rs];
  const double rw = parameters[PARAM_rw];
  const double CaMKo = parameters[PARAM_CaMKo];
  const double KmCaM = parameters[PARAM_KmCaM];
  const double KmCaMK = parameters[PARAM_KmCaMK];
  const double aCaMK = parameters[PARAM_aCaMK];
  const double bCaMK = parameters[PARAM_bCaMK];
  const double PKNa = parameters[PARAM_PKNa];
  const double Gncx = parameters[PARAM_Gncx];
  const double KmCaAct = parameters[PARAM_KmCaAct];
  const double kasymm = parameters[PARAM_kasymm];
  const double kcaoff = parameters[PARAM_kcaoff];
  const double kcaon = parameters[PARAM_kcaon];
  const double kna1 = parameters[PARAM_kna1];
  const double kna2 = parameters[PARAM_kna2];
  const double kna3 = parameters[PARAM_kna3];
  const double qca = parameters[PARAM_qca];
  const double qna = parameters[PARAM_qna];
  const double wca = parameters[PARAM_wca];
  const double wna = parameters[PARAM_wna];
  const double wnaca = parameters[PARAM_wnaca];
  const double H = parameters[PARAM_H];
  const double Khp = parameters[PARAM_Khp];
  const double Kki = parameters[PARAM_Kki];
  const double Kko = parameters[PARAM_Kko];
  const double Kmgatp = parameters[PARAM_Kmgatp];
  const double Knai0 = parameters[PARAM_Knai0];
  const double Knao0 = parameters[PARAM_Knao0];
  const double Knap = parameters[PARAM_Knap];
  const double Kxkur = parameters[PARAM_Kxkur];
  const double MgADP = parameters[PARAM_MgADP];
  const double MgATP = parameters[PARAM_MgATP];
  const double Pnak = parameters[PARAM_Pnak];
  const double delta = parameters[PARAM_delta];
  const double eP = parameters[PARAM_eP];
  const double k1m = parameters[PARAM_k1m];
  const double k1p = parameters[PARAM_k1p];
  const double k2m = parameters[PARAM_k2m];
  const double k2p = parameters[PARAM_k2p];
  const double k3m = parameters[PARAM_k3m];
  const double k3p = parameters[PARAM_k3p];
  const double k4m = parameters[PARAM_k4m];
  const double k4p = parameters[PARAM_k4p];
  const double zk = parameters[PARAM_zk];
  const double GKb = parameters[PARAM_GKb];
  const double PNab = parameters[PARAM_PNab];
  const double PCab = parameters[PARAM_PCab];
  const double GpCa = parameters[PARAM_GpCa];
  const double amp = parameters[PARAM_amp];
  const double duration = parameters[PARAM_duration];
  const double BSLmax = parameters[PARAM_BSLmax];
  const double BSRmax = parameters[PARAM_BSRmax];
  const double KmBSL = parameters[PARAM_KmBSL];
  const double KmBSR = parameters[PARAM_KmBSR];
  const double cmdnmax = parameters[PARAM_cmdnmax];
  const double csqnmax = parameters[PARAM_csqnmax];
  const double kmcmdn = parameters[PARAM_kmcmdn];
  const double kmcsqn = parameters[PARAM_kmcsqn];
  const double trpnmax = parameters[PARAM_trpnmax];

  // Expressions for the cell geometry component
  const double vcell = 3140.0*L*(rad*rad);
  const double Ageo = 6.28*(rad*rad) + 6.28*L*rad;
  const double Acap = 2.*Ageo;
  const double vmyo = 0.68*vcell;
  const double vnsr = 0.0552*vcell;
  const double vjsr = 0.0048*vcell;
  const double vss = 0.02*vcell;

  // Expressions for the CaMKt component
  const double CaMKb = CaMKo*(1.0 - CaMKt)/(1.0 + KmCaM/cass);
  const double CaMKa = scale_HF_CaMKa*(CaMKb + CaMKt);
  values[STATE_CaMKt] = -bCaMK*CaMKt + aCaMK*(CaMKb + CaMKt)*CaMKb;

  // Expressions for the reversal potentials component
  const double ENa = R*T*log(nao/nai)/F;
  const double EK = R*T*log(ko/ki)/F;
  const double EKs = R*T*log((ko + PKNa*nao)/(PKNa*nai + ki))/F;
  const double vffrt = (F*F)*v/(R*T);
  const double vfrt = F*v/(R*T);

  // Expressions for the I_Na component
  const double mss = 1.0/(1.0 + 0.00145997884464897*exp(-0.133333333333333*v));
  const double tm = 1.0/(9.45490463856472*exp(0.0287604256542997*v) +
    1.93141135585369e-5*exp(-0.167926112510495*v));
  values[STATE_m] = (-m + mss)/tm;
  const double hss = 1.0/(1. + 302724.605401998*exp(0.160771704180064*v));
  const double thf = 1.0/(1.18385695828909e-5*exp(-0.159108989657916*v) +
    6.30554918581728*exp(0.0493339911198816*v));
  const double ths = 1.0/(0.00516467023538179*exp(-0.035650623885918*v) +
    0.369876193720963*exp(0.0176491351923756*v));
  const double Ahs = 1.0 - Ahf;
  values[STATE_hf] = (-hf + hss)/thf;
  values[STATE_hs] = (-hs + hss)/ths;
  const double h = Ahf*hf + Ahs*hs;
  const double jss = hss;
  const double tj = 2.038 + 1.0/(0.313193639473877*exp(0.0260078023407022*v)
    + 1.13152820955901e-7*exp(-0.120758362516604*v));
  values[STATE_j] = (-j + jss)/tj;
  const double hssp = 1.0/(1. + 820249.092170851*exp(0.160771704180064*v));
  const double thsp = 3.0*ths;
  values[STATE_hsp] = (-hsp + hssp)/thsp;
  const double hp = Ahf*hf + Ahs*hsp;
  const double tjp = 1.46*tj;
  values[STATE_jp] = (-jp + jss)/tjp;
  const double fINap = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INa = GNa*scale_drug_INa*pow(m, 3.0)*(-ENa + v)*((1.0 -
    fINap)*h*j + fINap*hp*jp);

  // Expressions for the INaL component
  const double mLss = 1.0/(1.0 +
    0.000291579585635531*exp(-0.189969604863222*v));
  const double tmL = tm;
  values[STATE_mL] = (-mL + mLss)/tmL;
  const double hLss = 1.0/(1.0 + 120578.155955224*exp(0.133547008547009*v));
  values[STATE_hL] = (-hL + hLss)/(scale_HF_thL*thL);
  const double hLssp = 1.0/(1.0 + 275969.290386987*exp(0.133547008547009*v));
  const double thLp = 3.0*scale_HF_thL*thL;
  values[STATE_hLp] = (-hLp + hLssp)/thLp;
  const double GNaL = 0.0075*scale_HF_GNaL*scale_INaL*scale_drug_INaL;
  const double fINaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INaL = (-ENa + v)*((1.0 - fINaLp)*hL + fINaLp*hLp)*GNaL*mL;

  // Expressions for the Ito component
  const double ass = 1.0/(1.0 + 2.63165081616736*exp(-0.0674763832658569*v));
  const double ta = 1.0515/(1.0/(1.2089 +
    2.26210170705788*exp(-0.0340351378763435*v)) + 3.5/(1.0 +
    30.0695727273975*exp(0.0340351378763435*v)));
  values[STATE_a] = (-a + ass)/ta;
  const double iss = 1.0/(1.0 + 2194.9707645383*exp(0.175100682892663*v));
  const double tiF = 4.562 + delta_epi/(0.144686984212728*exp(-0.01*v) +
    1.63008963497809*exp(0.0602772754671489*v));
  const double tiS = 23.62 +
    delta_epi/(0.000276177639533774*exp(-0.0169348010160881*v) +
    0.0242089628046045*exp(0.123777695259314*v));
  const double AiF = 1.0/(1.0 + 0.243485371875229*exp(0.00661375661375661*v));
  const double AiS = 1.0 - AiF;
  values[STATE_iF] = (-iF + iss)/tiF;
  values[STATE_iS] = (-iS + iss)/tiS;
  const double i = AiF*iF + AiS*iS;
  const double assp = 1.0/(1.0 + 5.16742846223067*exp(-0.0674763832658569*v));
  values[STATE_ap] = (-ap + assp)/ta;
  const double dti_develop = 1.354 +
    0.0001/(2.65912690452306e-5*exp(0.0629326620516048*v) +
    4.55417797371283e+24*exp(-4.64252553389044*v));
  const double dti_recover = 1.0 - 0.5/(1.0 + 33.1154519586923*exp(0.05*v));
  const double tiFp = dti_develop*dti_recover*tiF;
  const double tiSp = dti_develop*dti_recover*tiS;
  values[STATE_iFp] = (-iFp + iss)/tiFp;
  values[STATE_iSp] = (-iSp + iss)/tiSp;
  const double ip = AiF*iFp + AiS*iSp;
  const double fItop = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Ito = Gto*scale_HF_Gto*scale_drug_Ito*(-EK + v)*((1.0 -
    fItop)*a*i + ap*fItop*ip);

  // Expressions for the ICaL ICaNa ICaK component
  const double dss = 1.0/(1.0 + 0.393985142266695*exp(-0.236406619385343*v));
  const double td = 0.6 + 1.0/(3.52542148736538*exp(0.09*v) +
    0.740818220681718*exp(-0.05*v));
  values[STATE_d] = (-d + dss)/td;
  const double fss = 1.0/(1.0 + 199.860384967786*exp(0.270562770562771*v));
  const double tff = 7.0 + 1.0/(0.0332507524451879*exp(0.1*v) +
    0.000609008774564757*exp(-0.1*v));
  const double tfs = 1000.0 + 1.0/(1.00276678901067e-5*exp(-0.25*v) +
    8.05341561812489e-5*exp(0.166666666666667*v));
  const double Afs = 1.0 - Aff;
  values[STATE_ff] = (-ff + fss)/tff;
  values[STATE_fs] = (-fs + fss)/tfs;
  const double f = Aff*ff + Afs*fs;
  const double fcass = fss;
  const double tfcaf = 7.0 +
    1.0/(0.0708317980974062*exp(-0.142857142857143*v) +
    0.0225887248803104*exp(0.142857142857143*v));
  const double tfcas = 100.0 + 1.0/(0.00012*exp(0.142857142857143*v) +
    0.00012*exp(-0.333333333333333*v));
  const double Afcaf = 0.3 + 0.6/(1.0 + 0.367879441171442*exp(0.1*v));
  const double Afcas = 1.0 - Afcaf;
  values[STATE_fcaf] = (-fcaf + fcass)/tfcaf;
  values[STATE_fcas] = (-fcas + fcass)/tfcas;
  const double fca = Afcaf*fcaf + Afcas*fcas;
  values[STATE_jca] = (-jca + fcass)/tjca;
  const double tffp = 2.5*tff;
  values[STATE_ffp] = (-ffp + fss)/tffp;
  const double fp = Aff*ffp + Afs*fs;
  const double tfcafp = 2.5*tfcaf;
  values[STATE_fcafp] = (-fcafp + fcass)/tfcafp;
  const double fcap = Afcaf*fcafp + Afcas*fcas;
  const double km2n = 1.0*jca;
  const double anca = 1.0/(pow(1.0 + Kmn/cass, 4.0) + k2n/km2n);
  values[STATE_nca] = k2n*anca - km2n*nca;
  const double PhiCaL = 4.0*(-0.341*cao + cass*exp(2.0*vfrt))*vffrt/(-1.0 +
    exp(2.0*vfrt));
  const double PhiCaNa = 1.0*(-0.75*nao +
    0.75*exp(1.0*vfrt)*nass)*vffrt/(-1.0 + exp(1.0*vfrt));
  const double PhiCaK = 1.0*(-0.75*ko + 0.75*exp(1.0*vfrt)*kss)*vffrt/(-1.0 +
    exp(1.0*vfrt));
  const double PCa = 0.0001*scale_ICaL*scale_drug_ICaL;
  const double PCap = 1.1*PCa;
  const double PCaNa = 0.00125*PCa;
  const double PCaK = 0.0003574*PCa;
  const double PCaNap = 0.00125*PCap;
  const double PCaKp = 0.0003574*PCap;
  const double fICaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double ICaL = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCa*PhiCaL*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCap*PhiCaL*d*fICaLp;
  const double ICaNa = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaNa*PhiCaNa*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaNap*PhiCaNa*d*fICaLp;
  const double ICaK = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaK*PhiCaK*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaKp*PhiCaK*d*fICaLp;

  // Expressions for the IKr component
  const double xrss = 1.0/(1.0 + 0.292873088723775*exp(-0.147297098247165*v));
  const double txrf = 12.98 +
    1.0/(0.000102023931289489*exp(0.258464719565779*v) +
    0.000429929608919291*exp(-0.0490677134445535*v));
  const double txrs = 1.865 +
    1.0/(0.000592242003680939*exp(0.135961930659415*v) +
    3.54996611180246e-5*exp(-0.038550501156515*v));
  const double Axrf = 1.0/(1.0 + 4.19729909473472*exp(0.0261711593823606*v));
  const double Axrs = 1.0 - Axrf;
  values[STATE_xrf] = (-xrf + xrss)/txrf;
  values[STATE_xrs] = (-xrs + xrss)/txrs;
  const double xr = Axrf*xrf + Axrs*xrs;
  const double rkr = 1.0/((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)));
  const double GKr = 0.046*scale_IKr*scale_drug_IKr;
  const double IKr = 0.430331482911935*sqrt(ko)*(-EK + v)*GKr*rkr*xr;

  // Expressions for the IKs component
  const double xs1ss = 1.0/(1.0 + 0.272885960356565*exp(-0.111957008508733*v));
  const double txs1 = 817.3 +
    1.0/(0.00350406776307486*exp(0.0561797752808989*v) +
    0.000518480908358166*exp(-0.00434782608695652*v));
  values[STATE_xs1] = (-xs1 + xs1ss)/txs1;
  const double xs2ss = xs1ss;
  const double txs2 = 1.0/(0.00225613570106391*exp(-0.032258064516129*v) +
    0.000820849986238988*exp(0.05*v));
  values[STATE_xs2] = (-xs2 + xs2ss)/txs2;
  const double KsCa = 1.0 + 0.6/(1.0 + 6.48182102606265e-7*pow(1.0/cai, 1.4));
  const double GKs = 0.0034*scale_IKs*scale_drug_IKs;
  const double IKs = (-EKs + v)*GKs*KsCa*xs1*xs2;
  const double xk1ss = 1.0/(1.0 + exp((-144.59 - v - 2.5538*ko)/(3.8115 +
    1.5692*ko)));
  const double txk1 = 122.2/(0.00193520076313902*exp(-0.0491159135559921*v) +
    30.433647575249*exp(0.0144237703735757*v));
  values[STATE_xk1] = (-xk1 + xk1ss)/txk1;
  const double rk1 = 1.0/(1.0 + 69220.6322106767*exp(0.105340777414937*v -
    0.273886021278837*ko));
  const double GK1 = 0.1908*scale_HF_GK1*scale_IK1*scale_drug_IK1;
  const double IK1 = sqrt(ko)*(-EK + v)*GK1*rk1*xk1;

  // Expressions for the INaCa_i component
  const double hca = exp(F*qca*v/(R*T));
  const double hna = exp(F*qna*v/(R*T));
  const double h1_i = 1. + (1. + hna)*nai/kna3;
  const double h2_i = hna*nai/(kna3*h1_i);
  const double h3_i = 1.0/h1_i;
  const double h4_i = 1.0 + (1. + nai/kna2)*nai/kna1;
  const double h5_i = (nai*nai)/(kna1*kna2*h4_i);
  const double h6_i = 1.0/h4_i;
  const double h7_i = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8_i = nao/(kna3*h7_i*hna);
  const double h9_i = 1.0/h7_i;
  const double h10_i = 1.0 + kasymm + nao*(1.0 + nao/kna2)/kna1;
  const double h11_i = (nao*nao)/(kna1*kna2*h10_i);
  const double h12_i = 1.0/h10_i;
  const double k1_i = cao*kcaon*h12_i;
  const double k2_i = kcaoff;
  const double k3p_i = wca*h9_i;
  const double k3pp_i = wnaca*h8_i;
  const double k3_i = k3p_i + k3pp_i;
  const double k4p_i = wca*h3_i/hca;
  const double k4pp_i = wnaca*h2_i;
  const double k4_i = k4p_i + k4pp_i;
  const double k5_i = kcaoff;
  const double k6_i = kcaon*cai*h6_i;
  const double k7_i = wna*h2_i*h5_i;
  const double k8_i = wna*h11_i*h8_i;
  const double x1_i = (k2_i + k3_i)*k5_i*k7_i + (k6_i + k7_i)*k2_i*k4_i;
  const double x2_i = (k1_i + k8_i)*k4_i*k6_i + (k4_i + k5_i)*k1_i*k7_i;
  const double x3_i = (k2_i + k3_i)*k6_i*k8_i + (k6_i + k7_i)*k1_i*k3_i;
  const double x4_i = (k1_i + k8_i)*k3_i*k5_i + (k4_i + k5_i)*k2_i*k8_i;
  const double E1_i = x1_i/(x1_i + x2_i + x3_i + x4_i);
  const double E2_i = x2_i/(x1_i + x2_i + x3_i + x4_i);
  const double E3_i = x3_i/(x1_i + x2_i + x3_i + x4_i);
  const double E4_i = x4_i/(x1_i + x2_i + x3_i + x4_i);
  const double allo_i = 1.0/(1.0 + pow(KmCaAct/cai, 2.0));
  const double zna = 1.00000000000000;
  const double JncxNa_i = E3_i*k4pp_i - E2_i*k3pp_i + 3.0*E4_i*k7_i -
    3.0*E1_i*k8_i;
  const double JncxCa_i = E2_i*k2_i - E1_i*k1_i;
  const double INaCa_i = 0.8*Gncx*scale_HF_Gncx*(zca*JncxCa_i +
    zna*JncxNa_i)*allo_i;

  // Expressions for the INaCa_ss component
  const double h1 = 1. + (1. + hna)*nass/kna3;
  const double h2 = hna*nass/(kna3*h1);
  const double h3 = 1.0/h1;
  const double h4 = 1.0 + (1. + nass/kna2)*nass/kna1;
  const double h5 = (nass*nass)/(kna1*kna2*h4);
  const double h6 = 1.0/h4;
  const double h7 = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8 = nao/(kna3*h7*hna);
  const double h9 = 1.0/h7;
  const double h10 = 1.0 + kasymm + nao*(1. + nao/kna2)/kna1;
  const double h11 = (nao*nao)/(kna1*kna2*h10);
  const double h12 = 1.0/h10;
  const double k1 = cao*kcaon*h12;
  const double k2 = kcaoff;
  const double k3p_ss = wca*h9;
  const double k3pp = wnaca*h8;
  const double k3 = k3p_ss + k3pp;
  const double k4p_ss = wca*h3/hca;
  const double k4pp = wnaca*h2;
  const double k4 = k4p_ss + k4pp;
  const double k5 = kcaoff;
  const double k6 = kcaon*cass*h6;
  const double k7 = wna*h2*h5;
  const double k8 = wna*h11*h8;
  const double x1_ss = (k2 + k3)*k5*k7 + (k6 + k7)*k2*k4;
  const double x2_ss = (k1 + k8)*k4*k6 + (k4 + k5)*k1*k7;
  const double x3_ss = (k2 + k3)*k6*k8 + (k6 + k7)*k1*k3;
  const double x4_ss = (k1 + k8)*k3*k5 + (k4 + k5)*k2*k8;
  const double E1_ss = x1_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E2_ss = x2_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E3_ss = x3_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E4_ss = x4_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double allo_ss = 1.0/(1.0 + pow(KmCaAct/cass, 2.0));
  const double JncxNa_ss = E3_ss*k4pp - E2_ss*k3pp + 3.0*E4_ss*k7 -
    3.0*E1_ss*k8;
  const double JncxCa_ss = E2_ss*k2 - E1_ss*k1;
  const double INaCa_ss = 0.2*Gncx*scale_HF_Gncx*(zca*JncxCa_ss +
    zna*JncxNa_ss)*allo_ss;

  // Expressions for the INaK component
  const double Knai = Knai0*exp(0.333333333333333*F*delta*v/(R*T));
  const double Knao = Knao0*exp(0.333333333333333*F*(1.0 - delta)*v/(R*T));
  const double P = eP/(1.0 + H/Khp + nai/Knap + ki/Kxkur);
  const double a1 = k1p*pow(nai/Knai, 3.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double b1 = MgADP*k1m;
  const double a2 = k2p;
  const double b2 = k2m*pow(nao/Knao, 3.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double a3 = k3p*pow(ko/Kko, 2.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double b3 = H*k3m*P/(1.0 + MgATP/Kmgatp);
  const double a4 = MgATP*k4p/(Kmgatp*(1.0 + MgATP/Kmgatp));
  const double b4 = k4m*pow(ki/Kki, 2.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double x1 = a1*a2*a4 + a1*a2*b3 + a2*b3*b4 + b2*b3*b4;
  const double x2 = a1*a2*a3 + a2*a3*b4 + a3*b1*b4 + b1*b2*b4;
  const double x3 = a2*a3*a4 + a3*a4*b1 + a4*b1*b2 + b1*b2*b3;
  const double x4 = a1*a3*a4 + a1*a4*b2 + a1*b2*b3 + b2*b3*b4;
  const double E1 = x1/(x1 + x2 + x3 + x4);
  const double E2 = x2/(x1 + x2 + x3 + x4);
  const double E3 = x3/(x1 + x2 + x3 + x4);
  const double E4 = x4/(x1 + x2 + x3 + x4);
  const double JnakNa = 3.0*E1*a3 - 3.0*E2*b3;
  const double JnakK = 2.0*E4*b1 - 2.0*E3*a1;
  const double INaK = Pnak*scale_HF_Pnak*(zk*JnakK + zna*JnakNa);

  // Expressions for the IKb component
  const double xkb = 1.0/(1.0 + 2.20236345094924*exp(-0.054525627044711*v));
  const double IKb = GKb*scale_drug_IKb*(-EK + v)*xkb;

  // Expressions for the INab component
  const double INab = PNab*scale_drug_INab*(-nao + exp(vfrt)*nai)*vffrt/(-1.0 +
    exp(vfrt));

  // Expressions for the ICab component
  const double ICab = 4.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*vfrt))*vffrt/(-1.0 + exp(2.0*vfrt));

  // Expressions for the IpCa component
  const double IpCa = GpCa*scale_drug_IpCa*cai/(0.0005 + cai);

  // Expressions for the Isac (Pueyo)--> ns + k component
  const double Isac_P_ns = 0.;
  const double Isac_P_k = 0.;

  // Expressions for the Istim component
  const double Istim = amp*(t <= duration);

  // Expressions for the membrane potential component
  values[STATE_v] = -Isac_P_k - Isac_P_ns - ICaK - ICaL - ICaNa - ICab - IK1 -
    IKb - IKr - IKs - INa - INaCa_i - INaCa_ss - INaK - INaL - INab - IpCa -
    Istim - Ito;

  // Expressions for the diffusion fluxes component
  const double JdiffNa = 0.5*nass - 0.5*nai;
  const double JdiffK = 0.5*kss - 0.5*ki;
  const double Jdiff = 5.0*cass - 5.0*cai;

  // Expressions for the ryanodione receptor component
  const double a_rel = 0.5*bt;
  const double Jrel_inf = -ICaL*a_rel/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_rel_tmp = bt/(1.0 + 0.0123/cajsr);
  const double tau_rel = (tau_rel_tmp < 0.001 ? 0.001 : tau_rel_tmp);
  values[STATE_Jrelnp] = (-Jrelnp + Jrel_inf)/tau_rel;
  const double btp = 1.25*bt;
  const double a_relp = 0.5*btp;
  const double Jrel_infp = -ICaL*a_relp/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_relp_tmp = btp/(1.0 + 0.0123/cajsr);
  const double tau_relp = (tau_relp_tmp < 0.001 ? 0.001 : tau_relp_tmp);
  values[STATE_Jrelp] = (-Jrelp + Jrel_infp)/tau_relp;
  const double fJrelp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jrel = (1.0 - fJrelp)*Jrelnp + Jrelp*fJrelp;

  // Expressions for the calcium buffers component
  const double Jupnp = 0.004375*cai/(0.00092 + cai);
  const double Jupp = 0.01203125*cai/(0.00075 + cai);
  const double fJupp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jleak = 0.0002625*scale_HF_Jleak*cansr;
  const double Jup = -Jleak + (1.0 - fJupp)*Jupnp + scale_HF_Jup*Jupp*fJupp;
  const double Jtr = 0.01*cansr - 0.01*cajsr;

  // Expressions for the intracellular concentrations component
  values[STATE_nai] = JdiffNa*vss/vmyo + (-INa - INaL - INab - Isac_P_ns/3. -
    3.0*INaCa_i - 3.0*INaK)*Acap/(F*vmyo);
  values[STATE_nass] = -JdiffNa + (-ICaNa - 3.0*INaCa_ss)*Acap/(F*vss);
  values[STATE_ki] = JdiffK*vss/vmyo + (-Isac_P_k - IK1 - IKb - IKr - IKs -
    Istim - Ito - Isac_P_ns/3. + 2.0*INaK)*Acap/(F*vmyo);
  values[STATE_kss] = -JdiffK - Acap*ICaK/(F*vss);
  const double Bcass = 1.0/(1.0 + BSLmax*KmBSL*pow(KmBSL + cass, -2.0) +
    BSRmax*KmBSR*pow(KmBSR + cass, -2.0));
  values[STATE_cass] = (-Jdiff + Jrel*vjsr/vss + 0.5*(-ICaL +
    2.0*INaCa_ss)*Acap/(F*vss))*Bcass;
  values[STATE_cansr] = -Jtr*vjsr/vnsr + Jup;
  const double Bcajsr = 1.0/(1.0 + csqnmax*kmcsqn*pow(kmcsqn + cajsr, -2.0));
  values[STATE_cajsr] = (-Jrel + Jtr)*Bcajsr;

  // Expressions for the mechanics component
  const double kwu = -kws + kuw*(-1. + 1.0/rw);
  const double ksu = kws*rw*(-1. + 1.0/rs);
  const double Aw = Tot_A*rs/(rs + rw*(1. - rs));
  const double As = Aw;
  const double cw = kuw*phi*(1. - rw)/rw;
  const double cs = kws*phi*rw*(1. - rs)/rs;
  const double lambda_min12 = (lmbda < 1.2 ? lmbda : 1.2);
  const double XU = 1. - TmB - XS - XW;
  const double gammawu = gammaw*fabs(Zetaw);
  const double gammasu = gammas*(Zetas*(Zetas > 0.) > (-1. - Zetas)*(Zetas <
    -1.) ? Zetas*(Zetas > 0.) : (-1. - Zetas)*(Zetas < -1.));
  values[STATE_XS] = kws*XW - XS*gammasu - XS*ksu;
  values[STATE_XW] = kuw*XU - kws*XW - XW*gammawu - XW*kwu;
  const double cat50 = scale_HF_cat50_ref*(cat50_ref + Beta1*(-1. +
    lambda_min12));
  values[STATE_CaTrpn] = ktrpn*(-CaTrpn + pow(1000.*cai/cat50, ntrpn)*(1. -
    CaTrpn));
  const double kb = ku*pow(Trpn50, ntm)/(1. - rs - rw*(1. - rs));
  values[STATE_TmB] = (pow(CaTrpn, -ntm/2.) < 100. ? pow(CaTrpn, -ntm/2.) :
    100.)*XU*kb - ku*pow(CaTrpn, ntm/2.)*TmB;
  values[STATE_Zetas] = dLambda*As - Zetas*cs;
  values[STATE_Zetaw] = dLambda*Aw - Zetaw*cw;
  const double C = -1. + lambda_min12;
  const double dCd = -Cd + C;
  const double eta = (dCd < 0. ? etas : etal);
  values[STATE_Cd] = p_k*(-Cd + C)/eta;
  const double Bcai = 1.0/(1.0 + cmdnmax*kmcmdn*pow(kmcmdn + cai, -2.0));
  const double J_TRPN = trpnmax*values[42];
  values[STATE_cai] = (-J_TRPN + Jdiff*vss/vmyo - Jup*vnsr/vmyo + 0.5*(-ICab
    - IpCa - Isac_P_ns/3. + 2.0*INaCa_i)*Acap/(F*vmyo))*Bcai;
}

// Computes monitored expressions of the ORdmm_Land ODE
void monitor(const double *__restrict states, const double t, const double
  *__restrict parameters, double* monitored)
{

  // Assign states
  const double CaMKt = states[STATE_CaMKt];
  const double m = states[STATE_m];
  const double hf = states[STATE_hf];
  const double hs = states[STATE_hs];
  const double j = states[STATE_j];
  const double hsp = states[STATE_hsp];
  const double jp = states[STATE_jp];
  const double mL = states[STATE_mL];
  const double hL = states[STATE_hL];
  const double hLp = states[STATE_hLp];
  const double a = states[STATE_a];
  const double iF = states[STATE_iF];
  const double iS = states[STATE_iS];
  const double ap = states[STATE_ap];
  const double iFp = states[STATE_iFp];
  const double iSp = states[STATE_iSp];
  const double d = states[STATE_d];
  const double ff = states[STATE_ff];
  const double fs = states[STATE_fs];
  const double fcaf = states[STATE_fcaf];
  const double fcas = states[STATE_fcas];
  const double jca = states[STATE_jca];
  const double ffp = states[STATE_ffp];
  const double fcafp = states[STATE_fcafp];
  const double nca = states[STATE_nca];
  const double xrf = states[STATE_xrf];
  const double xrs = states[STATE_xrs];
  const double xs1 = states[STATE_xs1];
  const double xs2 = states[STATE_xs2];
  const double xk1 = states[STATE_xk1];
  const double v = states[STATE_v];
  const double Jrelnp = states[STATE_Jrelnp];
  const double Jrelp = states[STATE_Jrelp];
  const double nai = states[STATE_nai];
  const double nass = states[STATE_nass];
  const double ki = states[STATE_ki];
  const double kss = states[STATE_kss];
  const double cass = states[STATE_cass];
  const double cansr = states[STATE_cansr];
  const double cajsr = states[STATE_cajsr];
  const double XS = states[STATE_XS];
  const double XW = states[STATE_XW];
  const double CaTrpn = states[STATE_CaTrpn];
  const double TmB = states[STATE_TmB];
  const double Zetas = states[STATE_Zetas];
  const double Zetaw = states[STATE_Zetaw];
  const double Cd = states[STATE_Cd];
  const double cai = states[STATE_cai];

  // Assign parameters
  const double scale_ICaL = parameters[PARAM_scale_ICaL];
  const double scale_IK1 = parameters[PARAM_scale_IK1];
  const double scale_IKr = parameters[PARAM_scale_IKr];
  const double scale_IKs = parameters[PARAM_scale_IKs];
  const double scale_INaL = parameters[PARAM_scale_INaL];
  const double cao = parameters[PARAM_cao];
  const double ko = parameters[PARAM_ko];
  const double nao = parameters[PARAM_nao];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double L = parameters[PARAM_L];
  const double rad = parameters[PARAM_rad];
  const double scale_HF_CaMKa = parameters[PARAM_scale_HF_CaMKa];
  const double scale_HF_GK1 = parameters[PARAM_scale_HF_GK1];
  const double scale_HF_GNaL = parameters[PARAM_scale_HF_GNaL];
  const double scale_HF_Gncx = parameters[PARAM_scale_HF_Gncx];
  const double scale_HF_Gto = parameters[PARAM_scale_HF_Gto];
  const double scale_HF_Jleak = parameters[PARAM_scale_HF_Jleak];
  const double scale_HF_Jrel_inf = parameters[PARAM_scale_HF_Jrel_inf];
  const double scale_HF_Jup = parameters[PARAM_scale_HF_Jup];
  const double scale_HF_Pnak = parameters[PARAM_scale_HF_Pnak];
  const double scale_HF_cat50_ref = parameters[PARAM_scale_HF_cat50_ref];
  const double scale_HF_thL = parameters[PARAM_scale_HF_thL];
  const double scale_drug_ICaL = parameters[PARAM_scale_drug_ICaL];
  const double scale_drug_ICab = parameters[PARAM_scale_drug_ICab];
  const double scale_drug_IK1 = parameters[PARAM_scale_drug_IK1];
  const double scale_drug_IKb = parameters[PARAM_scale_drug_IKb];
  const double scale_drug_IKr = parameters[PARAM_scale_drug_IKr];
  const double scale_drug_IKs = parameters[PARAM_scale_drug_IKs];
  const double scale_drug_INa = parameters[PARAM_scale_drug_INa];
  const double scale_drug_INaL = parameters[PARAM_scale_drug_INaL];
  const double scale_drug_INab = parameters[PARAM_scale_drug_INab];
  const double scale_drug_IpCa = parameters[PARAM_scale_drug_IpCa];
  const double scale_drug_Ito = parameters[PARAM_scale_drug_Ito];
  const double Ahf = parameters[PARAM_Ahf];
  const double GNa = parameters[PARAM_GNa];
  const double thL = parameters[PARAM_thL];
  const double Gto = parameters[PARAM_Gto];
  const double delta_epi = parameters[PARAM_delta_epi];
  const double Aff = parameters[PARAM_Aff];
  const double Kmn = parameters[PARAM_Kmn];
  const double k2n = parameters[PARAM_k2n];
  const double tjca = parameters[PARAM_tjca];
  const double zca = parameters[PARAM_zca];
  const double bt = parameters[PARAM_bt];
  const double Beta0 = parameters[PARAM_Beta0];
  const double Beta1 = parameters[PARAM_Beta1];
  const double Tot_A = parameters[PARAM_Tot_A];
  const double Tref = parameters[PARAM_Tref];
  const double Trpn50 = parameters[PARAM_Trpn50];
  const double cat50_ref = parameters[PARAM_cat50_ref];
  const double dLambda = parameters[PARAM_dLambda];
  const double etal = parameters[PARAM_etal];
  const double etas = parameters[PARAM_etas];
  const double gammas = parameters[PARAM_gammas];
  const double gammaw = parameters[PARAM_gammaw];
  const double ktrpn = parameters[PARAM_ktrpn];
  const double ku = parameters[PARAM_ku];
  const double kuw = parameters[PARAM_kuw];
  const double kws = parameters[PARAM_kws];
  const double lmbda = parameters[PARAM_lmbda];
  const double ntm = parameters[PARAM_ntm];
  const double ntrpn = parameters[PARAM_ntrpn];
  const double p_a = parameters[PARAM_p_a];
  const double p_b = parameters[PARAM_p_b];
  const double p_k = parameters[PARAM_p_k];
  const double phi = parameters[PARAM_phi];
  const double rs = parameters[PARAM_rs];
  const double rw = parameters[PARAM_rw];
  const double CaMKo = parameters[PARAM_CaMKo];
  const double KmCaM = parameters[PARAM_KmCaM];
  const double KmCaMK = parameters[PARAM_KmCaMK];
  const double aCaMK = parameters[PARAM_aCaMK];
  const double bCaMK = parameters[PARAM_bCaMK];
  const double PKNa = parameters[PARAM_PKNa];
  const double Gncx = parameters[PARAM_Gncx];
  const double KmCaAct = parameters[PARAM_KmCaAct];
  const double kasymm = parameters[PARAM_kasymm];
  const double kcaoff = parameters[PARAM_kcaoff];
  const double kcaon = parameters[PARAM_kcaon];
  const double kna1 = parameters[PARAM_kna1];
  const double kna2 = parameters[PARAM_kna2];
  const double kna3 = parameters[PARAM_kna3];
  const double qca = parameters[PARAM_qca];
  const double qna = parameters[PARAM_qna];
  const double wca = parameters[PARAM_wca];
  const double wna = parameters[PARAM_wna];
  const double wnaca = parameters[PARAM_wnaca];
  const double H = parameters[PARAM_H];
  const double Khp = parameters[PARAM_Khp];
  const double Kki = parameters[PARAM_Kki];
  const double Kko = parameters[PARAM_Kko];
  const double Kmgatp = parameters[PARAM_Kmgatp];
  const double Knai0 = parameters[PARAM_Knai0];
  const double Knao0 = parameters[PARAM_Knao0];
  const double Knap = parameters[PARAM_Knap];
  const double Kxkur = parameters[PARAM_Kxkur];
  const double MgADP = parameters[PARAM_MgADP];
  const double MgATP = parameters[PARAM_MgATP];
  const double Pnak = parameters[PARAM_Pnak];
  const double delta = parameters[PARAM_delta];
  const double eP = parameters[PARAM_eP];
  const double k1m = parameters[PARAM_k1m];
  const double k1p = parameters[PARAM_k1p];
  const double k2m = parameters[PARAM_k2m];
  const double k2p = parameters[PARAM_k2p];
  const double k3m = parameters[PARAM_k3m];
  const double k3p = parameters[PARAM_k3p];
  const double k4m = parameters[PARAM_k4m];
  const double k4p = parameters[PARAM_k4p];
  const double zk = parameters[PARAM_zk];
  const double GKb = parameters[PARAM_GKb];
  const double PNab = parameters[PARAM_PNab];
  const double PCab = parameters[PARAM_PCab];
  const double GpCa = parameters[PARAM_GpCa];
  const double amp = parameters[PARAM_amp];
  const double duration = parameters[PARAM_duration];
  const double BSLmax = parameters[PARAM_BSLmax];
  const double BSRmax = parameters[PARAM_BSRmax];
  const double KmBSL = parameters[PARAM_KmBSL];
  const double KmBSR = parameters[PARAM_KmBSR];
  const double cmdnmax = parameters[PARAM_cmdnmax];
  const double csqnmax = parameters[PARAM_csqnmax];
  const double kmcmdn = parameters[PARAM_kmcmdn];
  const double kmcsqn = parameters[PARAM_kmcsqn];
  const double trpnmax = parameters[PARAM_trpnmax];

  // Expressions for the cell geometry component
  monitored[MONITOR_vcell] = 3140.0*L*(rad*rad);
  monitored[MONITOR_Ageo] = 6.28*(rad*rad) + 6.28*L*rad;
  monitored[MONITOR_Acap] = 2.*monitored[1];
  monitored[MONITOR_vmyo] = 0.68*monitored[0];
  monitored[MONITOR_vnsr] = 0.0552*monitored[0];
  monitored[MONITOR_vjsr] = 0.0048*monitored[0];
  monitored[MONITOR_vss] = 0.02*monitored[0];

  // Expressions for the CaMKt component
  monitored[MONITOR_CaMKb] = CaMKo*(1.0 - CaMKt)/(1.0 + KmCaM/cass);
  monitored[MONITOR_CaMKa] = scale_HF_CaMKa*(CaMKt + monitored[7]);
  monitored[MONITOR_dCaMKt_dt] = -bCaMK*CaMKt + aCaMK*(CaMKt +
    monitored[7])*monitored[7];

  // Expressions for the reversal potentials component
  monitored[MONITOR_ENa] = R*T*log(nao/nai)/F;
  monitored[MONITOR_EK] = R*T*log(ko/ki)/F;
  monitored[MONITOR_EKs] = R*T*log((ko + PKNa*nao)/(PKNa*nai + ki))/F;
  monitored[MONITOR_vffrt] = (F*F)*v/(R*T);
  monitored[MONITOR_vfrt] = F*v/(R*T);

  // Expressions for the I_Na component
  monitored[MONITOR_mss] = 1.0/(1.0 +
    0.00145997884464897*exp(-0.133333333333333*v));
  monitored[MONITOR_tm] = 1.0/(9.45490463856472*exp(0.0287604256542997*v) +
    1.93141135585369e-5*exp(-0.167926112510495*v));
  monitored[MONITOR_dm_dt] = (-m + monitored[9])/monitored[10];
  monitored[MONITOR_hss] = 1.0/(1. +
    302724.605401998*exp(0.160771704180064*v));
  monitored[MONITOR_thf] = 1.0/(1.18385695828909e-5*exp(-0.159108989657916*v)
    + 6.30554918581728*exp(0.0493339911198816*v));
  monitored[MONITOR_ths] = 1.0/(0.00516467023538179*exp(-0.035650623885918*v)
    + 0.369876193720963*exp(0.0176491351923756*v));
  monitored[MONITOR_Ahs] = 1.0 - Ahf;
  monitored[MONITOR_dhf_dt] = (-hf + monitored[11])/monitored[12];
  monitored[MONITOR_dhs_dt] = (-hs + monitored[11])/monitored[13];
  monitored[MONITOR_h] = Ahf*hf + hs*monitored[14];
  monitored[MONITOR_jss] = monitored[11];
  monitored[MONITOR_tj] = 2.038 +
    1.0/(0.313193639473877*exp(0.0260078023407022*v) +
    1.13152820955901e-7*exp(-0.120758362516604*v));
  monitored[MONITOR_dj_dt] = (-j + monitored[16])/monitored[17];
  monitored[MONITOR_hssp] = 1.0/(1. +
    820249.092170851*exp(0.160771704180064*v));
  monitored[MONITOR_thsp] = 3.0*monitored[13];
  monitored[MONITOR_dhsp_dt] = (-hsp + monitored[18])/monitored[19];
  monitored[MONITOR_hp] = Ahf*hf + hsp*monitored[14];
  monitored[MONITOR_tjp] = 1.46*monitored[17];
  monitored[MONITOR_djp_dt] = (-jp + monitored[16])/monitored[21];
  monitored[MONITOR_fINap] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_INa] = GNa*scale_drug_INa*pow(m, 3.0)*(-monitored[142] +
    v)*((1.0 - monitored[22])*j*monitored[15] +
    jp*monitored[20]*monitored[22]);

  // Expressions for the INaL component
  monitored[MONITOR_mLss] = 1.0/(1.0 +
    0.000291579585635531*exp(-0.189969604863222*v));
  monitored[MONITOR_tmL] = monitored[10];
  monitored[MONITOR_dmL_dt] = (-mL + monitored[24])/monitored[25];
  monitored[MONITOR_hLss] = 1.0/(1.0 +
    120578.155955224*exp(0.133547008547009*v));
  monitored[MONITOR_dhL_dt] = (-hL + monitored[26])/(scale_HF_thL*thL);
  monitored[MONITOR_hLssp] = 1.0/(1.0 +
    275969.290386987*exp(0.133547008547009*v));
  monitored[MONITOR_thLp] = 3.0*scale_HF_thL*thL;
  monitored[MONITOR_dhLp_dt] = (-hLp + monitored[27])/monitored[28];
  monitored[MONITOR_GNaL] = 0.0075*scale_HF_GNaL*scale_INaL*scale_drug_INaL;
  monitored[MONITOR_fINaLp] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_INaL] = (-monitored[142] + v)*((1.0 - monitored[30])*hL +
    hLp*monitored[30])*mL*monitored[29];

  // Expressions for the Ito component
  monitored[MONITOR_ass] = 1.0/(1.0 +
    2.63165081616736*exp(-0.0674763832658569*v));
  monitored[MONITOR_ta] = 1.0515/(1.0/(1.2089 +
    2.26210170705788*exp(-0.0340351378763435*v)) + 3.5/(1.0 +
    30.0695727273975*exp(0.0340351378763435*v)));
  monitored[MONITOR_da_dt] = (-a + monitored[32])/monitored[33];
  monitored[MONITOR_iss] = 1.0/(1.0 +
    2194.9707645383*exp(0.175100682892663*v));
  monitored[MONITOR_tiF] = 4.562 + delta_epi/(0.144686984212728*exp(-0.01*v)
    + 1.63008963497809*exp(0.0602772754671489*v));
  monitored[MONITOR_tiS] = 23.62 +
    delta_epi/(0.000276177639533774*exp(-0.0169348010160881*v) +
    0.0242089628046045*exp(0.123777695259314*v));
  monitored[MONITOR_AiF] = 1.0/(1.0 +
    0.243485371875229*exp(0.00661375661375661*v));
  monitored[MONITOR_AiS] = 1.0 - monitored[37];
  monitored[MONITOR_diF_dt] = (-iF + monitored[34])/monitored[35];
  monitored[MONITOR_diS_dt] = (-iS + monitored[34])/monitored[36];
  monitored[MONITOR_i] = iF*monitored[37] + iS*monitored[38];
  monitored[MONITOR_assp] = 1.0/(1.0 +
    5.16742846223067*exp(-0.0674763832658569*v));
  monitored[MONITOR_dap_dt] = (-ap + monitored[40])/monitored[33];
  monitored[MONITOR_dti_develop] = 1.354 +
    0.0001/(2.65912690452306e-5*exp(0.0629326620516048*v) +
    4.55417797371283e+24*exp(-4.64252553389044*v));
  monitored[MONITOR_dti_recover] = 1.0 - 0.5/(1.0 +
    33.1154519586923*exp(0.05*v));
  monitored[MONITOR_tiFp] = monitored[35]*monitored[41]*monitored[42];
  monitored[MONITOR_tiSp] = monitored[36]*monitored[41]*monitored[42];
  monitored[MONITOR_diFp_dt] = (-iFp + monitored[34])/monitored[43];
  monitored[MONITOR_diSp_dt] = (-iSp + monitored[34])/monitored[44];
  monitored[MONITOR_ip] = iFp*monitored[37] + iSp*monitored[38];
  monitored[MONITOR_fItop] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_Ito] = Gto*scale_HF_Gto*scale_drug_Ito*(-monitored[143] +
    v)*((1.0 - monitored[46])*a*monitored[39] +
    ap*monitored[45]*monitored[46]);

  // Expressions for the ICaL ICaNa ICaK component
  monitored[MONITOR_dss] = 1.0/(1.0 +
    0.393985142266695*exp(-0.236406619385343*v));
  monitored[MONITOR_td] = 0.6 + 1.0/(3.52542148736538*exp(0.09*v) +
    0.740818220681718*exp(-0.05*v));
  monitored[MONITOR_dd_dt] = (-d + monitored[48])/monitored[49];
  monitored[MONITOR_fss] = 1.0/(1.0 +
    199.860384967786*exp(0.270562770562771*v));
  monitored[MONITOR_tff] = 7.0 + 1.0/(0.0332507524451879*exp(0.1*v) +
    0.000609008774564757*exp(-0.1*v));
  monitored[MONITOR_tfs] = 1000.0 + 1.0/(1.00276678901067e-5*exp(-0.25*v) +
    8.05341561812489e-5*exp(0.166666666666667*v));
  monitored[MONITOR_Afs] = 1.0 - Aff;
  monitored[MONITOR_dff_dt] = (-ff + monitored[50])/monitored[51];
  monitored[MONITOR_dfs_dt] = (-fs + monitored[50])/monitored[52];
  monitored[MONITOR_f] = Aff*ff + fs*monitored[53];
  monitored[MONITOR_fcass] = monitored[50];
  monitored[MONITOR_tfcaf] = 7.0 +
    1.0/(0.0708317980974062*exp(-0.142857142857143*v) +
    0.0225887248803104*exp(0.142857142857143*v));
  monitored[MONITOR_tfcas] = 100.0 + 1.0/(0.00012*exp(0.142857142857143*v) +
    0.00012*exp(-0.333333333333333*v));
  monitored[MONITOR_Afcaf] = 0.3 + 0.6/(1.0 + 0.367879441171442*exp(0.1*v));
  monitored[MONITOR_Afcas] = 1.0 - monitored[58];
  monitored[MONITOR_dfcaf_dt] = (-fcaf + monitored[55])/monitored[56];
  monitored[MONITOR_dfcas_dt] = (-fcas + monitored[55])/monitored[57];
  monitored[MONITOR_fca] = fcaf*monitored[58] + fcas*monitored[59];
  monitored[MONITOR_djca_dt] = (-jca + monitored[55])/tjca;
  monitored[MONITOR_tffp] = 2.5*monitored[51];
  monitored[MONITOR_dffp_dt] = (-ffp + monitored[50])/monitored[61];
  monitored[MONITOR_fp] = Aff*ffp + fs*monitored[53];
  monitored[MONITOR_tfcafp] = 2.5*monitored[56];
  monitored[MONITOR_dfcafp_dt] = (-fcafp + monitored[55])/monitored[63];
  monitored[MONITOR_fcap] = fcafp*monitored[58] + fcas*monitored[59];
  monitored[MONITOR_km2n] = 1.0*jca;
  monitored[MONITOR_anca] = 1.0/(pow(1.0 + Kmn/cass, 4.0) + k2n/monitored[65]);
  monitored[MONITOR_dnca_dt] = k2n*monitored[66] - monitored[65]*nca;
  monitored[MONITOR_PhiCaL] = 4.0*(-0.341*cao +
    cass*exp(2.0*monitored[146]))*monitored[145]/(-1.0 +
    exp(2.0*monitored[146]));
  monitored[MONITOR_PhiCaNa] = 1.0*(-0.75*nao +
    0.75*exp(1.0*monitored[146])*nass)*monitored[145]/(-1.0 +
    exp(1.0*monitored[146]));
  monitored[MONITOR_PhiCaK] = 1.0*(-0.75*ko +
    0.75*exp(1.0*monitored[146])*kss)*monitored[145]/(-1.0 +
    exp(1.0*monitored[146]));
  monitored[MONITOR_PCa] = 0.0001*scale_ICaL*scale_drug_ICaL;
  monitored[MONITOR_PCap] = 1.1*monitored[70];
  monitored[MONITOR_PCaNa] = 0.00125*monitored[70];
  monitored[MONITOR_PCaK] = 0.0003574*monitored[70];
  monitored[MONITOR_PCaNap] = 0.00125*monitored[71];
  monitored[MONITOR_PCaKp] = 0.0003574*monitored[71];
  monitored[MONITOR_fICaLp] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_ICaL] = (1.0 - monitored[76])*((1.0 - nca)*monitored[54]
    + jca*monitored[60]*nca)*d*monitored[67]*monitored[70] + ((1.0 -
    nca)*monitored[62] +
    jca*monitored[64]*nca)*d*monitored[67]*monitored[71]*monitored[76];
  monitored[MONITOR_ICaNa] = (1.0 - monitored[76])*((1.0 - nca)*monitored[54]
    + jca*monitored[60]*nca)*d*monitored[68]*monitored[72] + ((1.0 -
    nca)*monitored[62] +
    jca*monitored[64]*nca)*d*monitored[68]*monitored[74]*monitored[76];
  monitored[MONITOR_ICaK] = (1.0 - monitored[76])*((1.0 - nca)*monitored[54]
    + jca*monitored[60]*nca)*d*monitored[69]*monitored[73] + ((1.0 -
    nca)*monitored[62] +
    jca*monitored[64]*nca)*d*monitored[69]*monitored[75]*monitored[76];

  // Expressions for the IKr component
  monitored[MONITOR_xrss] = 1.0/(1.0 +
    0.292873088723775*exp(-0.147297098247165*v));
  monitored[MONITOR_txrf] = 12.98 +
    1.0/(0.000102023931289489*exp(0.258464719565779*v) +
    0.000429929608919291*exp(-0.0490677134445535*v));
  monitored[MONITOR_txrs] = 1.865 +
    1.0/(0.000592242003680939*exp(0.135961930659415*v) +
    3.54996611180246e-5*exp(-0.038550501156515*v));
  monitored[MONITOR_Axrf] = 1.0/(1.0 +
    4.19729909473472*exp(0.0261711593823606*v));
  monitored[MONITOR_Axrs] = 1.0 - monitored[83];
  monitored[MONITOR_dxrf_dt] = (-xrf + monitored[80])/monitored[81];
  monitored[MONITOR_dxrs_dt] = (-xrs + monitored[80])/monitored[82];
  monitored[MONITOR_xr] = monitored[83]*xrf + monitored[84]*xrs;
  monitored[MONITOR_rkr] = 1.0/((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)));
  monitored[MONITOR_GKr] = 0.046*scale_IKr*scale_drug_IKr;
  monitored[MONITOR_IKr] = 0.430331482911935*sqrt(ko)*(-monitored[143] +
    v)*monitored[85]*monitored[86]*monitored[87];

  // Expressions for the IKs component
  monitored[MONITOR_xs1ss] = 1.0/(1.0 +
    0.272885960356565*exp(-0.111957008508733*v));
  monitored[MONITOR_txs1] = 817.3 +
    1.0/(0.00350406776307486*exp(0.0561797752808989*v) +
    0.000518480908358166*exp(-0.00434782608695652*v));
  monitored[MONITOR_dxs1_dt] = (-xs1 + monitored[89])/monitored[90];
  monitored[MONITOR_xs2ss] = monitored[89];
  monitored[MONITOR_txs2] =
    1.0/(0.00225613570106391*exp(-0.032258064516129*v) +
    0.000820849986238988*exp(0.05*v));
  monitored[MONITOR_dxs2_dt] = (-xs2 + monitored[91])/monitored[92];
  monitored[MONITOR_KsCa] = 1.0 + 0.6/(1.0 + 6.48182102606265e-7*pow(1.0/cai,
    1.4));
  monitored[MONITOR_GKs] = 0.0034*scale_IKs*scale_drug_IKs;
  monitored[MONITOR_IKs] = (-monitored[144] +
    v)*monitored[93]*monitored[94]*xs1*xs2;
  monitored[MONITOR_xk1ss] = 1.0/(1.0 + exp((-144.59 - v - 2.5538*ko)/(3.8115 +
    1.5692*ko)));
  monitored[MONITOR_txk1] =
    122.2/(0.00193520076313902*exp(-0.0491159135559921*v) +
    30.433647575249*exp(0.0144237703735757*v));
  monitored[MONITOR_dxk1_dt] = (-xk1 + monitored[96])/monitored[97];
  monitored[MONITOR_rk1] = 1.0/(1.0 +
    69220.6322106767*exp(0.105340777414937*v - 0.273886021278837*ko));
  monitored[MONITOR_GK1] = 0.1908*scale_HF_GK1*scale_IK1*scale_drug_IK1;
  monitored[MONITOR_IK1] = sqrt(ko)*(-monitored[143] +
    v)*monitored[98]*monitored[99]*xk1;

  // Expressions for the INaCa_i component
  monitored[MONITOR_hca] = exp(F*qca*v/(R*T));
  monitored[MONITOR_hna] = exp(F*qna*v/(R*T));
  monitored[MONITOR_h1_i] = 1. + (1. + monitored[148])*nai/kna3;
  monitored[MONITOR_h2_i] = monitored[148]*nai/(kna3*monitored[149]);
  monitored[MONITOR_h3_i] = 1.0/monitored[149];
  monitored[MONITOR_h4_i] = 1.0 + (1. + nai/kna2)*nai/kna1;
  monitored[MONITOR_h5_i] = (nai*nai)/(kna1*kna2*monitored[152]);
  monitored[MONITOR_h6_i] = 1.0/monitored[152];
  monitored[MONITOR_h7_i] = 1.0 + nao*(1.0 + 1.0/monitored[148])/kna3;
  monitored[MONITOR_h8_i] = nao/(kna3*monitored[148]*monitored[155]);
  monitored[MONITOR_h9_i] = 1.0/monitored[155];
  monitored[MONITOR_h10_i] = 1.0 + kasymm + nao*(1.0 + nao/kna2)/kna1;
  monitored[MONITOR_h11_i] = (nao*nao)/(kna1*kna2*monitored[158]);
  monitored[MONITOR_h12_i] = 1.0/monitored[158];
  monitored[MONITOR_k1_i] = cao*kcaon*monitored[160];
  monitored[MONITOR_k2_i] = kcaoff;
  monitored[MONITOR_k3p_i] = wca*monitored[157];
  monitored[MONITOR_k3pp_i] = wnaca*monitored[156];
  monitored[MONITOR_k3_i] = monitored[163] + monitored[164];
  monitored[MONITOR_k4p_i] = wca*monitored[151]/monitored[147];
  monitored[MONITOR_k4pp_i] = wnaca*monitored[150];
  monitored[MONITOR_k4_i] = monitored[166] + monitored[167];
  monitored[MONITOR_k5_i] = kcaoff;
  monitored[MONITOR_k6_i] = kcaon*cai*monitored[154];
  monitored[MONITOR_k7_i] = wna*monitored[150]*monitored[153];
  monitored[MONITOR_k8_i] = wna*monitored[156]*monitored[159];
  monitored[MONITOR_x1_i] = (monitored[162] +
    monitored[165])*monitored[169]*monitored[171] + (monitored[170] +
    monitored[171])*monitored[162]*monitored[168];
  monitored[MONITOR_x2_i] = (monitored[161] +
    monitored[172])*monitored[168]*monitored[170] + (monitored[168] +
    monitored[169])*monitored[161]*monitored[171];
  monitored[MONITOR_x3_i] = (monitored[162] +
    monitored[165])*monitored[170]*monitored[172] + (monitored[170] +
    monitored[171])*monitored[161]*monitored[165];
  monitored[MONITOR_x4_i] = (monitored[161] +
    monitored[172])*monitored[165]*monitored[169] + (monitored[168] +
    monitored[169])*monitored[162]*monitored[172];
  monitored[MONITOR_E1_i] = monitored[173]/(monitored[173] + monitored[174] +
    monitored[175] + monitored[176]);
  monitored[MONITOR_E2_i] = monitored[174]/(monitored[173] + monitored[174] +
    monitored[175] + monitored[176]);
  monitored[MONITOR_E3_i] = monitored[175]/(monitored[173] + monitored[174] +
    monitored[175] + monitored[176]);
  monitored[MONITOR_E4_i] = monitored[176]/(monitored[173] + monitored[174] +
    monitored[175] + monitored[176]);
  monitored[MONITOR_allo_i] = 1.0/(1.0 + pow(KmCaAct/cai, 2.0));
  monitored[MONITOR_zna] = 1.00000000000000;
  monitored[MONITOR_JncxNa_i] = monitored[167]*monitored[179] -
    monitored[164]*monitored[178] + 3.0*monitored[171]*monitored[180] -
    3.0*monitored[172]*monitored[177];
  monitored[MONITOR_JncxCa_i] = monitored[162]*monitored[178] -
    monitored[161]*monitored[177];
  monitored[MONITOR_INaCa_i] =
    0.8*Gncx*scale_HF_Gncx*(monitored[182]*monitored[183] +
    zca*monitored[184])*monitored[181];

  // Expressions for the INaCa_ss component
  monitored[MONITOR_h1] = 1. + (1. + monitored[148])*nass/kna3;
  monitored[MONITOR_h2] = monitored[148]*nass/(kna3*monitored[186]);
  monitored[MONITOR_h3] = 1.0/monitored[186];
  monitored[MONITOR_h4] = 1.0 + (1. + nass/kna2)*nass/kna1;
  monitored[MONITOR_h5] = (nass*nass)/(kna1*kna2*monitored[189]);
  monitored[MONITOR_h6] = 1.0/monitored[189];
  monitored[MONITOR_h7] = 1.0 + nao*(1.0 + 1.0/monitored[148])/kna3;
  monitored[MONITOR_h8] = nao/(kna3*monitored[148]*monitored[192]);
  monitored[MONITOR_h9] = 1.0/monitored[192];
  monitored[MONITOR_h10] = 1.0 + kasymm + nao*(1. + nao/kna2)/kna1;
  monitored[MONITOR_h11] = (nao*nao)/(kna1*kna2*monitored[195]);
  monitored[MONITOR_h12] = 1.0/monitored[195];
  monitored[MONITOR_k1] = cao*kcaon*monitored[197];
  monitored[MONITOR_k2] = kcaoff;
  monitored[MONITOR_k3p_ss] = wca*monitored[194];
  monitored[MONITOR_k3pp] = wnaca*monitored[193];
  monitored[MONITOR_k3] = monitored[200] + monitored[201];
  monitored[MONITOR_k4p_ss] = wca*monitored[188]/monitored[147];
  monitored[MONITOR_k4pp] = wnaca*monitored[187];
  monitored[MONITOR_k4] = monitored[203] + monitored[204];
  monitored[MONITOR_k5] = kcaoff;
  monitored[MONITOR_k6] = kcaon*cass*monitored[191];
  monitored[MONITOR_k7] = wna*monitored[187]*monitored[190];
  monitored[MONITOR_k8] = wna*monitored[193]*monitored[196];
  monitored[MONITOR_x1_ss] = (monitored[199] +
    monitored[202])*monitored[206]*monitored[208] + (monitored[207] +
    monitored[208])*monitored[199]*monitored[205];
  monitored[MONITOR_x2_ss] = (monitored[198] +
    monitored[209])*monitored[205]*monitored[207] + (monitored[205] +
    monitored[206])*monitored[198]*monitored[208];
  monitored[MONITOR_x3_ss] = (monitored[199] +
    monitored[202])*monitored[207]*monitored[209] + (monitored[207] +
    monitored[208])*monitored[198]*monitored[202];
  monitored[MONITOR_x4_ss] = (monitored[198] +
    monitored[209])*monitored[202]*monitored[206] + (monitored[205] +
    monitored[206])*monitored[199]*monitored[209];
  monitored[MONITOR_E1_ss] = monitored[210]/(monitored[210] + monitored[211]
    + monitored[212] + monitored[213]);
  monitored[MONITOR_E2_ss] = monitored[211]/(monitored[210] + monitored[211]
    + monitored[212] + monitored[213]);
  monitored[MONITOR_E3_ss] = monitored[212]/(monitored[210] + monitored[211]
    + monitored[212] + monitored[213]);
  monitored[MONITOR_E4_ss] = monitored[213]/(monitored[210] + monitored[211]
    + monitored[212] + monitored[213]);
  monitored[MONITOR_allo_ss] = 1.0/(1.0 + pow(KmCaAct/cass, 2.0));
  monitored[MONITOR_JncxNa_ss] = monitored[204]*monitored[216] -
    monitored[201]*monitored[215] + 3.0*monitored[208]*monitored[217] -
    3.0*monitored[209]*monitored[214];
  monitored[MONITOR_JncxCa_ss] = monitored[199]*monitored[215] -
    monitored[198]*monitored[214];
  monitored[MONITOR_INaCa_ss] =
    0.2*Gncx*scale_HF_Gncx*(monitored[182]*monitored[219] +
    zca*monitored[220])*monitored[218];

  // Expressions for the INaK component
  monitored[MONITOR_Knai] = Knai0*exp(0.333333333333333*F*delta*v/(R*T));
  monitored[MONITOR_Knao] = Knao0*exp(0.333333333333333*F*(1.0 -
    delta)*v/(R*T));
  monitored[MONITOR_P] = eP/(1.0 + H/Khp + nai/Knap + ki/Kxkur);
  monitored[MONITOR_a1] = k1p*pow(nai/monitored[222], 3.0)/(-1.0 + pow(1.0 +
    ki/Kki, 2.0) + pow(1.0 + nai/monitored[222], 3.0));
  monitored[MONITOR_b1] = MgADP*k1m;
  monitored[MONITOR_a2] = k2p;
  monitored[MONITOR_b2] = k2m*pow(nao/monitored[223], 3.0)/(-1.0 + pow(1.0 +
    ko/Kko, 2.0) + pow(1.0 + nao/monitored[223], 3.0));
  monitored[MONITOR_a3] = k3p*pow(ko/Kko, 2.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0)
    + pow(1.0 + nao/monitored[223], 3.0));
  monitored[MONITOR_b3] = H*k3m*monitored[224]/(1.0 + MgATP/Kmgatp);
  monitored[MONITOR_a4] = MgATP*k4p/(Kmgatp*(1.0 + MgATP/Kmgatp));
  monitored[MONITOR_b4] = k4m*pow(ki/Kki, 2.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0)
    + pow(1.0 + nai/monitored[222], 3.0));
  monitored[MONITOR_x1] = monitored[225]*monitored[227]*monitored[230] +
    monitored[225]*monitored[227]*monitored[231] +
    monitored[227]*monitored[230]*monitored[232] +
    monitored[228]*monitored[230]*monitored[232];
  monitored[MONITOR_x2] = monitored[225]*monitored[227]*monitored[229] +
    monitored[226]*monitored[228]*monitored[232] +
    monitored[226]*monitored[229]*monitored[232] +
    monitored[227]*monitored[229]*monitored[232];
  monitored[MONITOR_x3] = monitored[226]*monitored[228]*monitored[230] +
    monitored[226]*monitored[228]*monitored[231] +
    monitored[226]*monitored[229]*monitored[231] +
    monitored[227]*monitored[229]*monitored[231];
  monitored[MONITOR_x4] = monitored[225]*monitored[228]*monitored[230] +
    monitored[225]*monitored[228]*monitored[231] +
    monitored[225]*monitored[229]*monitored[231] +
    monitored[228]*monitored[230]*monitored[232];
  monitored[MONITOR_E1] = monitored[233]/(monitored[233] + monitored[234] +
    monitored[235] + monitored[236]);
  monitored[MONITOR_E2] = monitored[234]/(monitored[233] + monitored[234] +
    monitored[235] + monitored[236]);
  monitored[MONITOR_E3] = monitored[235]/(monitored[233] + monitored[234] +
    monitored[235] + monitored[236]);
  monitored[MONITOR_E4] = monitored[236]/(monitored[233] + monitored[234] +
    monitored[235] + monitored[236]);
  monitored[MONITOR_JnakNa] = 3.0*monitored[229]*monitored[237] -
    3.0*monitored[230]*monitored[238];
  monitored[MONITOR_JnakK] = 2.0*monitored[226]*monitored[240] -
    2.0*monitored[225]*monitored[239];
  monitored[MONITOR_INaK] = Pnak*scale_HF_Pnak*(monitored[182]*monitored[241]
    + zk*monitored[242]);

  // Expressions for the IKb component
  monitored[MONITOR_xkb] = 1.0/(1.0 +
    2.20236345094924*exp(-0.054525627044711*v));
  monitored[MONITOR_IKb] = GKb*scale_drug_IKb*(-monitored[143] +
    v)*monitored[244];

  // Expressions for the INab component
  monitored[MONITOR_INab] = PNab*scale_drug_INab*(-nao +
    exp(monitored[146])*nai)*monitored[145]/(-1.0 + exp(monitored[146]));

  // Expressions for the ICab component
  monitored[MONITOR_ICab] = 4.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*monitored[146]))*monitored[145]/(-1.0 +
    exp(2.0*monitored[146]));

  // Expressions for the IpCa component
  monitored[MONITOR_IpCa] = GpCa*scale_drug_IpCa*cai/(0.0005 + cai);

  // Expressions for the Isac (Pueyo)--> ns + k component
  monitored[MONITOR_Isac_P_ns] = 0.;
  monitored[MONITOR_Isac_P_k] = 0.;

  // Expressions for the Istim component
  monitored[MONITOR_Istim] = amp*(t <= duration);

  // Expressions for the membrane potential component
  monitored[MONITOR_dv_dt] = -monitored[249] - monitored[250] -
    monitored[100] - monitored[185] - monitored[221] - monitored[23] -
    monitored[243] - monitored[245] - monitored[246] - monitored[247] -
    monitored[248] - monitored[251] - monitored[31] - monitored[47] -
    monitored[77] - monitored[78] - monitored[79] - monitored[88] -
    monitored[95];

  // Expressions for the diffusion fluxes component
  monitored[MONITOR_JdiffNa] = 0.5*nass - 0.5*nai;
  monitored[MONITOR_JdiffK] = 0.5*kss - 0.5*ki;
  monitored[MONITOR_Jdiff] = 5.0*cass - 5.0*cai;

  // Expressions for the ryanodione receptor component
  monitored[MONITOR_a_rel] = 0.5*bt;
  monitored[MONITOR_Jrel_inf] = -monitored[101]*monitored[77]/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  monitored[MONITOR_tau_rel_tmp] = bt/(1.0 + 0.0123/cajsr);
  monitored[MONITOR_tau_rel] = (monitored[103] < 0.001 ? 0.001 :
    monitored[103]);
  monitored[MONITOR_dJrelnp_dt] = (-Jrelnp + monitored[102])/monitored[104];
  monitored[MONITOR_btp] = 1.25*bt;
  monitored[MONITOR_a_relp] = 0.5*monitored[105];
  monitored[MONITOR_Jrel_infp] = -monitored[106]*monitored[77]/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  monitored[MONITOR_tau_relp_tmp] = monitored[105]/(1.0 + 0.0123/cajsr);
  monitored[MONITOR_tau_relp] = (monitored[108] < 0.001 ? 0.001 :
    monitored[108]);
  monitored[MONITOR_dJrelp_dt] = (-Jrelp + monitored[107])/monitored[109];
  monitored[MONITOR_fJrelp] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_Jrel] = (1.0 - monitored[110])*Jrelnp +
    Jrelp*monitored[110];

  // Expressions for the calcium buffers component
  monitored[MONITOR_Jupnp] = 0.004375*cai/(0.00092 + cai);
  monitored[MONITOR_Jupp] = 0.01203125*cai/(0.00075 + cai);
  monitored[MONITOR_fJupp] = 1.0/(1.0 + KmCaMK/monitored[8]);
  monitored[MONITOR_Jleak] = 0.0002625*scale_HF_Jleak*cansr;
  monitored[MONITOR_Jup] = -monitored[258] + (1.0 -
    monitored[257])*monitored[255] +
    scale_HF_Jup*monitored[256]*monitored[257];
  monitored[MONITOR_Jtr] = 0.01*cansr - 0.01*cajsr;

  // Expressions for the intracellular concentrations component
  monitored[MONITOR_dnai_dt] = monitored[252]*monitored[6]/monitored[3] +
    (-monitored[23] - monitored[246] - monitored[31] - monitored[249]/3. -
    3.0*monitored[185] - 3.0*monitored[243])*monitored[2]/(F*monitored[3]);
  monitored[MONITOR_dnass_dt] = -monitored[252] + (-monitored[78] -
    3.0*monitored[221])*monitored[2]/(F*monitored[6]);
  monitored[MONITOR_dki_dt] = monitored[253]*monitored[6]/monitored[3] +
    (-monitored[250] - monitored[100] - monitored[245] - monitored[251] -
    monitored[47] - monitored[88] - monitored[95] - monitored[249]/3. +
    2.0*monitored[243])*monitored[2]/(F*monitored[3]);
  monitored[MONITOR_dkss_dt] = -monitored[253] -
    monitored[2]*monitored[79]/(F*monitored[6]);
  monitored[MONITOR_Bcass] = 1.0/(1.0 + BSLmax*KmBSL*pow(KmBSL + cass, -2.0)
    + BSRmax*KmBSR*pow(KmBSR + cass, -2.0));
  monitored[MONITOR_dcass_dt] = (-monitored[254] +
    monitored[111]*monitored[5]/monitored[6] + 0.5*(-monitored[77] +
    2.0*monitored[221])*monitored[2]/(F*monitored[6]))*monitored[112];
  monitored[MONITOR_dcansr_dt] = -monitored[260]*monitored[5]/monitored[4] +
    monitored[259];
  monitored[MONITOR_Bcajsr] = 1.0/(1.0 + csqnmax*kmcsqn*pow(kmcsqn + cajsr,
    -2.0));
  monitored[MONITOR_dcajsr_dt] = (-monitored[111] +
    monitored[260])*monitored[113];

  // Expressions for the mechanics component
  monitored[MONITOR_XS_max] = (XS > 0. ? XS : 0.);
  monitored[MONITOR_XW_max] = (XW > 0. ? XW : 0.);
  monitored[MONITOR_CaTrpn_max] = (CaTrpn > 0. ? CaTrpn : 0.);
  monitored[MONITOR_kwu] = -kws + kuw*(-1. + 1.0/rw);
  monitored[MONITOR_ksu] = kws*rw*(-1. + 1.0/rs);
  monitored[MONITOR_Aw] = Tot_A*rs/(rs + rw*(1. - rs));
  monitored[MONITOR_As] = monitored[119];
  monitored[MONITOR_cw] = kuw*phi*(1. - rw)/rw;
  monitored[MONITOR_cs] = kws*phi*rw*(1. - rs)/rs;
  monitored[MONITOR_lambda_min12] = (lmbda < 1.2 ? lmbda : 1.2);
  monitored[MONITOR_lambda_min087] = (monitored[123] < 0.87 ? monitored[123]
    : 0.87);
  monitored[MONITOR_h_lambda_prima] = 1. + Beta0*(-1.87 + monitored[123] +
    monitored[124]);
  monitored[MONITOR_h_lambda] = (monitored[125] > 0. ? monitored[125] : 0.);
  monitored[MONITOR_XU] = 1. - TmB - XS - XW;
  monitored[MONITOR_gammawu] = gammaw*fabs(Zetaw);
  monitored[MONITOR_gammasu] = gammas*(Zetas*(Zetas > 0.) > (-1. -
    Zetas)*(Zetas < -1.) ? Zetas*(Zetas > 0.) : (-1. - Zetas)*(Zetas < -1.));
  monitored[MONITOR_dXS_dt] = kws*XW - XS*monitored[118] - XS*monitored[129];
  monitored[MONITOR_dXW_dt] = kuw*monitored[127] - kws*XW - XW*monitored[117]
    - XW*monitored[128];
  monitored[MONITOR_cat50] = scale_HF_cat50_ref*(cat50_ref + Beta1*(-1. +
    monitored[123]));
  monitored[MONITOR_dCaTrpn_dt] = ktrpn*(-CaTrpn +
    pow(1000.*cai/monitored[130], ntrpn)*(1. - CaTrpn));
  monitored[MONITOR_kb] = ku*pow(Trpn50, ntm)/(1. - rs - rw*(1. - rs));
  monitored[MONITOR_dTmB_dt] = (pow(CaTrpn, -ntm/2.) < 100. ? pow(CaTrpn,
    -ntm/2.) : 100.)*monitored[127]*monitored[131] - ku*pow(CaTrpn,
    ntm/2.)*TmB;
  monitored[MONITOR_dZetas_dt] = dLambda*monitored[120] - Zetas*monitored[122];
  monitored[MONITOR_dZetaw_dt] = dLambda*monitored[119] - Zetaw*monitored[121];
  monitored[MONITOR_Ta] = Tref*((1. + Zetas)*XS + XW*Zetaw)*monitored[126]/rs;
  monitored[MONITOR_C] = -1. + monitored[123];
  monitored[MONITOR_dCd] = -Cd + monitored[133];
  monitored[MONITOR_eta] = (monitored[134] < 0. ? etas : etal);
  monitored[MONITOR_dCd_dt] = p_k*(-Cd + monitored[133])/monitored[135];
  monitored[MONITOR_Fd] = monitored[134]*monitored[135];
  monitored[MONITOR_F1] = expm1(p_b*monitored[133]);
  monitored[MONITOR_Tp] = p_a*(monitored[136] + monitored[137]);
  monitored[MONITOR_Ttot] = monitored[132] + monitored[138];
  monitored[MONITOR_Bcai] = 1.0/(1.0 + cmdnmax*kmcmdn*pow(kmcmdn + cai, -2.0));
  monitored[MONITOR_J_TRPN] = trpnmax*monitored[303];
  monitored[MONITOR_dcai_dt] = (-monitored[141] +
    monitored[254]*monitored[6]/monitored[3] -
    monitored[259]*monitored[4]/monitored[3] + 0.5*(-monitored[247] -
    monitored[248] - monitored[249]/3. +
    2.0*monitored[185])*monitored[2]/(F*monitored[3]))*monitored[140];
}

// Compute a forward step using the explicit Euler scheme to the ORdmm_Land ODE
void forward_explicit_euler(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double CaMKt = states[STATE_CaMKt];
  const double m = states[STATE_m];
  const double hf = states[STATE_hf];
  const double hs = states[STATE_hs];
  const double j = states[STATE_j];
  const double hsp = states[STATE_hsp];
  const double jp = states[STATE_jp];
  const double mL = states[STATE_mL];
  const double hL = states[STATE_hL];
  const double hLp = states[STATE_hLp];
  const double a = states[STATE_a];
  const double iF = states[STATE_iF];
  const double iS = states[STATE_iS];
  const double ap = states[STATE_ap];
  const double iFp = states[STATE_iFp];
  const double iSp = states[STATE_iSp];
  const double d = states[STATE_d];
  const double ff = states[STATE_ff];
  const double fs = states[STATE_fs];
  const double fcaf = states[STATE_fcaf];
  const double fcas = states[STATE_fcas];
  const double jca = states[STATE_jca];
  const double ffp = states[STATE_ffp];
  const double fcafp = states[STATE_fcafp];
  const double nca = states[STATE_nca];
  const double xrf = states[STATE_xrf];
  const double xrs = states[STATE_xrs];
  const double xs1 = states[STATE_xs1];
  const double xs2 = states[STATE_xs2];
  const double xk1 = states[STATE_xk1];
  const double v = states[STATE_v];
  const double Jrelnp = states[STATE_Jrelnp];
  const double Jrelp = states[STATE_Jrelp];
  const double nai = states[STATE_nai];
  const double nass = states[STATE_nass];
  const double ki = states[STATE_ki];
  const double kss = states[STATE_kss];
  const double cass = states[STATE_cass];
  const double cansr = states[STATE_cansr];
  const double cajsr = states[STATE_cajsr];
  const double XS = states[STATE_XS];
  const double XW = states[STATE_XW];
  const double CaTrpn = states[STATE_CaTrpn];
  const double TmB = states[STATE_TmB];
  const double Zetas = states[STATE_Zetas];
  const double Zetaw = states[STATE_Zetaw];
  const double Cd = states[STATE_Cd];
  const double cai = states[STATE_cai];

  // Assign parameters
  const double scale_ICaL = parameters[PARAM_scale_ICaL];
  const double scale_IK1 = parameters[PARAM_scale_IK1];
  const double scale_IKr = parameters[PARAM_scale_IKr];
  const double scale_IKs = parameters[PARAM_scale_IKs];
  const double scale_INaL = parameters[PARAM_scale_INaL];
  const double cao = parameters[PARAM_cao];
  const double ko = parameters[PARAM_ko];
  const double nao = parameters[PARAM_nao];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double L = parameters[PARAM_L];
  const double rad = parameters[PARAM_rad];
  const double scale_HF_CaMKa = parameters[PARAM_scale_HF_CaMKa];
  const double scale_HF_GK1 = parameters[PARAM_scale_HF_GK1];
  const double scale_HF_GNaL = parameters[PARAM_scale_HF_GNaL];
  const double scale_HF_Gncx = parameters[PARAM_scale_HF_Gncx];
  const double scale_HF_Gto = parameters[PARAM_scale_HF_Gto];
  const double scale_HF_Jleak = parameters[PARAM_scale_HF_Jleak];
  const double scale_HF_Jrel_inf = parameters[PARAM_scale_HF_Jrel_inf];
  const double scale_HF_Jup = parameters[PARAM_scale_HF_Jup];
  const double scale_HF_Pnak = parameters[PARAM_scale_HF_Pnak];
  const double scale_HF_cat50_ref = parameters[PARAM_scale_HF_cat50_ref];
  const double scale_HF_thL = parameters[PARAM_scale_HF_thL];
  const double scale_drug_ICaL = parameters[PARAM_scale_drug_ICaL];
  const double scale_drug_ICab = parameters[PARAM_scale_drug_ICab];
  const double scale_drug_IK1 = parameters[PARAM_scale_drug_IK1];
  const double scale_drug_IKb = parameters[PARAM_scale_drug_IKb];
  const double scale_drug_IKr = parameters[PARAM_scale_drug_IKr];
  const double scale_drug_IKs = parameters[PARAM_scale_drug_IKs];
  const double scale_drug_INa = parameters[PARAM_scale_drug_INa];
  const double scale_drug_INaL = parameters[PARAM_scale_drug_INaL];
  const double scale_drug_INab = parameters[PARAM_scale_drug_INab];
  const double scale_drug_IpCa = parameters[PARAM_scale_drug_IpCa];
  const double scale_drug_Ito = parameters[PARAM_scale_drug_Ito];
  const double Ahf = parameters[PARAM_Ahf];
  const double GNa = parameters[PARAM_GNa];
  const double thL = parameters[PARAM_thL];
  const double Gto = parameters[PARAM_Gto];
  const double delta_epi = parameters[PARAM_delta_epi];
  const double Aff = parameters[PARAM_Aff];
  const double Kmn = parameters[PARAM_Kmn];
  const double k2n = parameters[PARAM_k2n];
  const double tjca = parameters[PARAM_tjca];
  const double zca = parameters[PARAM_zca];
  const double bt = parameters[PARAM_bt];
  const double Beta1 = parameters[PARAM_Beta1];
  const double Tot_A = parameters[PARAM_Tot_A];
  const double Trpn50 = parameters[PARAM_Trpn50];
  const double cat50_ref = parameters[PARAM_cat50_ref];
  const double dLambda = parameters[PARAM_dLambda];
  const double etal = parameters[PARAM_etal];
  const double etas = parameters[PARAM_etas];
  const double gammas = parameters[PARAM_gammas];
  const double gammaw = parameters[PARAM_gammaw];
  const double ktrpn = parameters[PARAM_ktrpn];
  const double ku = parameters[PARAM_ku];
  const double kuw = parameters[PARAM_kuw];
  const double kws = parameters[PARAM_kws];
  const double lmbda = parameters[PARAM_lmbda];
  const double ntm = parameters[PARAM_ntm];
  const double ntrpn = parameters[PARAM_ntrpn];
  const double p_k = parameters[PARAM_p_k];
  const double phi = parameters[PARAM_phi];
  const double rs = parameters[PARAM_rs];
  const double rw = parameters[PARAM_rw];
  const double CaMKo = parameters[PARAM_CaMKo];
  const double KmCaM = parameters[PARAM_KmCaM];
  const double KmCaMK = parameters[PARAM_KmCaMK];
  const double aCaMK = parameters[PARAM_aCaMK];
  const double bCaMK = parameters[PARAM_bCaMK];
  const double PKNa = parameters[PARAM_PKNa];
  const double Gncx = parameters[PARAM_Gncx];
  const double KmCaAct = parameters[PARAM_KmCaAct];
  const double kasymm = parameters[PARAM_kasymm];
  const double kcaoff = parameters[PARAM_kcaoff];
  const double kcaon = parameters[PARAM_kcaon];
  const double kna1 = parameters[PARAM_kna1];
  const double kna2 = parameters[PARAM_kna2];
  const double kna3 = parameters[PARAM_kna3];
  const double qca = parameters[PARAM_qca];
  const double qna = parameters[PARAM_qna];
  const double wca = parameters[PARAM_wca];
  const double wna = parameters[PARAM_wna];
  const double wnaca = parameters[PARAM_wnaca];
  const double H = parameters[PARAM_H];
  const double Khp = parameters[PARAM_Khp];
  const double Kki = parameters[PARAM_Kki];
  const double Kko = parameters[PARAM_Kko];
  const double Kmgatp = parameters[PARAM_Kmgatp];
  const double Knai0 = parameters[PARAM_Knai0];
  const double Knao0 = parameters[PARAM_Knao0];
  const double Knap = parameters[PARAM_Knap];
  const double Kxkur = parameters[PARAM_Kxkur];
  const double MgADP = parameters[PARAM_MgADP];
  const double MgATP = parameters[PARAM_MgATP];
  const double Pnak = parameters[PARAM_Pnak];
  const double delta = parameters[PARAM_delta];
  const double eP = parameters[PARAM_eP];
  const double k1m = parameters[PARAM_k1m];
  const double k1p = parameters[PARAM_k1p];
  const double k2m = parameters[PARAM_k2m];
  const double k2p = parameters[PARAM_k2p];
  const double k3m = parameters[PARAM_k3m];
  const double k3p = parameters[PARAM_k3p];
  const double k4m = parameters[PARAM_k4m];
  const double k4p = parameters[PARAM_k4p];
  const double zk = parameters[PARAM_zk];
  const double GKb = parameters[PARAM_GKb];
  const double PNab = parameters[PARAM_PNab];
  const double PCab = parameters[PARAM_PCab];
  const double GpCa = parameters[PARAM_GpCa];
  const double amp = parameters[PARAM_amp];
  const double duration = parameters[PARAM_duration];
  const double BSLmax = parameters[PARAM_BSLmax];
  const double BSRmax = parameters[PARAM_BSRmax];
  const double KmBSL = parameters[PARAM_KmBSL];
  const double KmBSR = parameters[PARAM_KmBSR];
  const double cmdnmax = parameters[PARAM_cmdnmax];
  const double csqnmax = parameters[PARAM_csqnmax];
  const double kmcmdn = parameters[PARAM_kmcmdn];
  const double kmcsqn = parameters[PARAM_kmcsqn];
  const double trpnmax = parameters[PARAM_trpnmax];

  // Expressions for the cell geometry component
  const double vcell = 3140.0*L*(rad*rad);
  const double Ageo = 6.28*(rad*rad) + 6.28*L*rad;
  const double Acap = 2.*Ageo;
  const double vmyo = 0.68*vcell;
  const double vnsr = 0.0552*vcell;
  const double vjsr = 0.0048*vcell;
  const double vss = 0.02*vcell;

  // Expressions for the CaMKt component
  const double CaMKb = CaMKo*(1.0 - CaMKt)/(1.0 + KmCaM/cass);
  const double CaMKa = scale_HF_CaMKa*(CaMKb + CaMKt);
  const double dCaMKt_dt = -bCaMK*CaMKt + aCaMK*(CaMKb + CaMKt)*CaMKb;
  states[STATE_CaMKt] = dt*dCaMKt_dt + CaMKt;

  // Expressions for the reversal potentials component
  const double ENa = R*T*log(nao/nai)/F;
  const double EK = R*T*log(ko/ki)/F;
  const double EKs = R*T*log((ko + PKNa*nao)/(PKNa*nai + ki))/F;
  const double vffrt = (F*F)*v/(R*T);
  const double vfrt = F*v/(R*T);

  // Expressions for the I_Na component
  const double mss = 1.0/(1.0 + 0.00145997884464897*exp(-0.133333333333333*v));
  const double tm = 1.0/(9.45490463856472*exp(0.0287604256542997*v) +
    1.93141135585369e-5*exp(-0.167926112510495*v));
  const double dm_dt = (-m + mss)/tm;
  states[STATE_m] = dt*dm_dt + m;
  const double hss = 1.0/(1. + 302724.605401998*exp(0.160771704180064*v));
  const double thf = 1.0/(1.18385695828909e-5*exp(-0.159108989657916*v) +
    6.30554918581728*exp(0.0493339911198816*v));
  const double ths = 1.0/(0.00516467023538179*exp(-0.035650623885918*v) +
    0.369876193720963*exp(0.0176491351923756*v));
  const double Ahs = 1.0 - Ahf;
  const double dhf_dt = (-hf + hss)/thf;
  states[STATE_hf] = dt*dhf_dt + hf;
  const double dhs_dt = (-hs + hss)/ths;
  states[STATE_hs] = dt*dhs_dt + hs;
  const double h = Ahf*hf + Ahs*hs;
  const double jss = hss;
  const double tj = 2.038 + 1.0/(0.313193639473877*exp(0.0260078023407022*v)
    + 1.13152820955901e-7*exp(-0.120758362516604*v));
  const double dj_dt = (-j + jss)/tj;
  states[STATE_j] = dt*dj_dt + j;
  const double hssp = 1.0/(1. + 820249.092170851*exp(0.160771704180064*v));
  const double thsp = 3.0*ths;
  const double dhsp_dt = (-hsp + hssp)/thsp;
  states[STATE_hsp] = dt*dhsp_dt + hsp;
  const double hp = Ahf*hf + Ahs*hsp;
  const double tjp = 1.46*tj;
  const double djp_dt = (-jp + jss)/tjp;
  states[STATE_jp] = dt*djp_dt + jp;
  const double fINap = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INa = GNa*scale_drug_INa*pow(m, 3.0)*(-ENa + v)*((1.0 -
    fINap)*h*j + fINap*hp*jp);

  // Expressions for the INaL component
  const double mLss = 1.0/(1.0 +
    0.000291579585635531*exp(-0.189969604863222*v));
  const double tmL = tm;
  const double dmL_dt = (-mL + mLss)/tmL;
  states[STATE_mL] = dt*dmL_dt + mL;
  const double hLss = 1.0/(1.0 + 120578.155955224*exp(0.133547008547009*v));
  const double dhL_dt = (-hL + hLss)/(scale_HF_thL*thL);
  states[STATE_hL] = dt*dhL_dt + hL;
  const double hLssp = 1.0/(1.0 + 275969.290386987*exp(0.133547008547009*v));
  const double thLp = 3.0*scale_HF_thL*thL;
  const double dhLp_dt = (-hLp + hLssp)/thLp;
  states[STATE_hLp] = dt*dhLp_dt + hLp;
  const double GNaL = 0.0075*scale_HF_GNaL*scale_INaL*scale_drug_INaL;
  const double fINaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INaL = (-ENa + v)*((1.0 - fINaLp)*hL + fINaLp*hLp)*GNaL*mL;

  // Expressions for the Ito component
  const double ass = 1.0/(1.0 + 2.63165081616736*exp(-0.0674763832658569*v));
  const double ta = 1.0515/(1.0/(1.2089 +
    2.26210170705788*exp(-0.0340351378763435*v)) + 3.5/(1.0 +
    30.0695727273975*exp(0.0340351378763435*v)));
  const double da_dt = (-a + ass)/ta;
  states[STATE_a] = dt*da_dt + a;
  const double iss = 1.0/(1.0 + 2194.9707645383*exp(0.175100682892663*v));
  const double tiF = 4.562 + delta_epi/(0.144686984212728*exp(-0.01*v) +
    1.63008963497809*exp(0.0602772754671489*v));
  const double tiS = 23.62 +
    delta_epi/(0.000276177639533774*exp(-0.0169348010160881*v) +
    0.0242089628046045*exp(0.123777695259314*v));
  const double AiF = 1.0/(1.0 + 0.243485371875229*exp(0.00661375661375661*v));
  const double AiS = 1.0 - AiF;
  const double diF_dt = (-iF + iss)/tiF;
  states[STATE_iF] = dt*diF_dt + iF;
  const double diS_dt = (-iS + iss)/tiS;
  states[STATE_iS] = dt*diS_dt + iS;
  const double i = AiF*iF + AiS*iS;
  const double assp = 1.0/(1.0 + 5.16742846223067*exp(-0.0674763832658569*v));
  const double dap_dt = (-ap + assp)/ta;
  states[STATE_ap] = dt*dap_dt + ap;
  const double dti_develop = 1.354 +
    0.0001/(2.65912690452306e-5*exp(0.0629326620516048*v) +
    4.55417797371283e+24*exp(-4.64252553389044*v));
  const double dti_recover = 1.0 - 0.5/(1.0 + 33.1154519586923*exp(0.05*v));
  const double tiFp = dti_develop*dti_recover*tiF;
  const double tiSp = dti_develop*dti_recover*tiS;
  const double diFp_dt = (-iFp + iss)/tiFp;
  states[STATE_iFp] = dt*diFp_dt + iFp;
  const double diSp_dt = (-iSp + iss)/tiSp;
  states[STATE_iSp] = dt*diSp_dt + iSp;
  const double ip = AiF*iFp + AiS*iSp;
  const double fItop = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Ito = Gto*scale_HF_Gto*scale_drug_Ito*(-EK + v)*((1.0 -
    fItop)*a*i + ap*fItop*ip);

  // Expressions for the ICaL ICaNa ICaK component
  const double dss = 1.0/(1.0 + 0.393985142266695*exp(-0.236406619385343*v));
  const double td = 0.6 + 1.0/(3.52542148736538*exp(0.09*v) +
    0.740818220681718*exp(-0.05*v));
  const double dd_dt = (-d + dss)/td;
  states[STATE_d] = dt*dd_dt + d;
  const double fss = 1.0/(1.0 + 199.860384967786*exp(0.270562770562771*v));
  const double tff = 7.0 + 1.0/(0.0332507524451879*exp(0.1*v) +
    0.000609008774564757*exp(-0.1*v));
  const double tfs = 1000.0 + 1.0/(1.00276678901067e-5*exp(-0.25*v) +
    8.05341561812489e-5*exp(0.166666666666667*v));
  const double Afs = 1.0 - Aff;
  const double dff_dt = (-ff + fss)/tff;
  states[STATE_ff] = dt*dff_dt + ff;
  const double dfs_dt = (-fs + fss)/tfs;
  states[STATE_fs] = dt*dfs_dt + fs;
  const double f = Aff*ff + Afs*fs;
  const double fcass = fss;
  const double tfcaf = 7.0 +
    1.0/(0.0708317980974062*exp(-0.142857142857143*v) +
    0.0225887248803104*exp(0.142857142857143*v));
  const double tfcas = 100.0 + 1.0/(0.00012*exp(0.142857142857143*v) +
    0.00012*exp(-0.333333333333333*v));
  const double Afcaf = 0.3 + 0.6/(1.0 + 0.367879441171442*exp(0.1*v));
  const double Afcas = 1.0 - Afcaf;
  const double dfcaf_dt = (-fcaf + fcass)/tfcaf;
  states[STATE_fcaf] = dt*dfcaf_dt + fcaf;
  const double dfcas_dt = (-fcas + fcass)/tfcas;
  states[STATE_fcas] = dt*dfcas_dt + fcas;
  const double fca = Afcaf*fcaf + Afcas*fcas;
  const double djca_dt = (-jca + fcass)/tjca;
  states[STATE_jca] = dt*djca_dt + jca;
  const double tffp = 2.5*tff;
  const double dffp_dt = (-ffp + fss)/tffp;
  states[STATE_ffp] = dt*dffp_dt + ffp;
  const double fp = Aff*ffp + Afs*fs;
  const double tfcafp = 2.5*tfcaf;
  const double dfcafp_dt = (-fcafp + fcass)/tfcafp;
  states[STATE_fcafp] = dt*dfcafp_dt + fcafp;
  const double fcap = Afcaf*fcafp + Afcas*fcas;
  const double km2n = 1.0*jca;
  const double anca = 1.0/(pow(1.0 + Kmn/cass, 4.0) + k2n/km2n);
  const double dnca_dt = k2n*anca - km2n*nca;
  states[STATE_nca] = dt*dnca_dt + nca;
  const double PhiCaL = 4.0*(-0.341*cao + cass*exp(2.0*vfrt))*vffrt/(-1.0 +
    exp(2.0*vfrt));
  const double PhiCaNa = 1.0*(-0.75*nao +
    0.75*exp(1.0*vfrt)*nass)*vffrt/(-1.0 + exp(1.0*vfrt));
  const double PhiCaK = 1.0*(-0.75*ko + 0.75*exp(1.0*vfrt)*kss)*vffrt/(-1.0 +
    exp(1.0*vfrt));
  const double PCa = 0.0001*scale_ICaL*scale_drug_ICaL;
  const double PCap = 1.1*PCa;
  const double PCaNa = 0.00125*PCa;
  const double PCaK = 0.0003574*PCa;
  const double PCaNap = 0.00125*PCap;
  const double PCaKp = 0.0003574*PCap;
  const double fICaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double ICaL = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCa*PhiCaL*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCap*PhiCaL*d*fICaLp;
  const double ICaNa = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaNa*PhiCaNa*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaNap*PhiCaNa*d*fICaLp;
  const double ICaK = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaK*PhiCaK*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaKp*PhiCaK*d*fICaLp;

  // Expressions for the IKr component
  const double xrss = 1.0/(1.0 + 0.292873088723775*exp(-0.147297098247165*v));
  const double txrf = 12.98 +
    1.0/(0.000102023931289489*exp(0.258464719565779*v) +
    0.000429929608919291*exp(-0.0490677134445535*v));
  const double txrs = 1.865 +
    1.0/(0.000592242003680939*exp(0.135961930659415*v) +
    3.54996611180246e-5*exp(-0.038550501156515*v));
  const double Axrf = 1.0/(1.0 + 4.19729909473472*exp(0.0261711593823606*v));
  const double Axrs = 1.0 - Axrf;
  const double dxrf_dt = (-xrf + xrss)/txrf;
  states[STATE_xrf] = dt*dxrf_dt + xrf;
  const double dxrs_dt = (-xrs + xrss)/txrs;
  states[STATE_xrs] = dt*dxrs_dt + xrs;
  const double xr = Axrf*xrf + Axrs*xrs;
  const double rkr = 1.0/((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)));
  const double GKr = 0.046*scale_IKr*scale_drug_IKr;
  const double IKr = 0.430331482911935*sqrt(ko)*(-EK + v)*GKr*rkr*xr;

  // Expressions for the IKs component
  const double xs1ss = 1.0/(1.0 + 0.272885960356565*exp(-0.111957008508733*v));
  const double txs1 = 817.3 +
    1.0/(0.00350406776307486*exp(0.0561797752808989*v) +
    0.000518480908358166*exp(-0.00434782608695652*v));
  const double dxs1_dt = (-xs1 + xs1ss)/txs1;
  states[STATE_xs1] = dt*dxs1_dt + xs1;
  const double xs2ss = xs1ss;
  const double txs2 = 1.0/(0.00225613570106391*exp(-0.032258064516129*v) +
    0.000820849986238988*exp(0.05*v));
  const double dxs2_dt = (-xs2 + xs2ss)/txs2;
  states[STATE_xs2] = dt*dxs2_dt + xs2;
  const double KsCa = 1.0 + 0.6/(1.0 + 6.48182102606265e-7*pow(1.0/cai, 1.4));
  const double GKs = 0.0034*scale_IKs*scale_drug_IKs;
  const double IKs = (-EKs + v)*GKs*KsCa*xs1*xs2;
  const double xk1ss = 1.0/(1.0 + exp((-144.59 - v - 2.5538*ko)/(3.8115 +
    1.5692*ko)));
  const double txk1 = 122.2/(0.00193520076313902*exp(-0.0491159135559921*v) +
    30.433647575249*exp(0.0144237703735757*v));
  const double dxk1_dt = (-xk1 + xk1ss)/txk1;
  states[STATE_xk1] = dt*dxk1_dt + xk1;
  const double rk1 = 1.0/(1.0 + 69220.6322106767*exp(0.105340777414937*v -
    0.273886021278837*ko));
  const double GK1 = 0.1908*scale_HF_GK1*scale_IK1*scale_drug_IK1;
  const double IK1 = sqrt(ko)*(-EK + v)*GK1*rk1*xk1;

  // Expressions for the INaCa_i component
  const double hca = exp(F*qca*v/(R*T));
  const double hna = exp(F*qna*v/(R*T));
  const double h1_i = 1. + (1. + hna)*nai/kna3;
  const double h2_i = hna*nai/(kna3*h1_i);
  const double h3_i = 1.0/h1_i;
  const double h4_i = 1.0 + (1. + nai/kna2)*nai/kna1;
  const double h5_i = (nai*nai)/(kna1*kna2*h4_i);
  const double h6_i = 1.0/h4_i;
  const double h7_i = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8_i = nao/(kna3*h7_i*hna);
  const double h9_i = 1.0/h7_i;
  const double h10_i = 1.0 + kasymm + nao*(1.0 + nao/kna2)/kna1;
  const double h11_i = (nao*nao)/(kna1*kna2*h10_i);
  const double h12_i = 1.0/h10_i;
  const double k1_i = cao*kcaon*h12_i;
  const double k2_i = kcaoff;
  const double k3p_i = wca*h9_i;
  const double k3pp_i = wnaca*h8_i;
  const double k3_i = k3p_i + k3pp_i;
  const double k4p_i = wca*h3_i/hca;
  const double k4pp_i = wnaca*h2_i;
  const double k4_i = k4p_i + k4pp_i;
  const double k5_i = kcaoff;
  const double k6_i = kcaon*cai*h6_i;
  const double k7_i = wna*h2_i*h5_i;
  const double k8_i = wna*h11_i*h8_i;
  const double x1_i = (k2_i + k3_i)*k5_i*k7_i + (k6_i + k7_i)*k2_i*k4_i;
  const double x2_i = (k1_i + k8_i)*k4_i*k6_i + (k4_i + k5_i)*k1_i*k7_i;
  const double x3_i = (k2_i + k3_i)*k6_i*k8_i + (k6_i + k7_i)*k1_i*k3_i;
  const double x4_i = (k1_i + k8_i)*k3_i*k5_i + (k4_i + k5_i)*k2_i*k8_i;
  const double E1_i = x1_i/(x1_i + x2_i + x3_i + x4_i);
  const double E2_i = x2_i/(x1_i + x2_i + x3_i + x4_i);
  const double E3_i = x3_i/(x1_i + x2_i + x3_i + x4_i);
  const double E4_i = x4_i/(x1_i + x2_i + x3_i + x4_i);
  const double allo_i = 1.0/(1.0 + pow(KmCaAct/cai, 2.0));
  const double zna = 1.00000000000000;
  const double JncxNa_i = E3_i*k4pp_i - E2_i*k3pp_i + 3.0*E4_i*k7_i -
    3.0*E1_i*k8_i;
  const double JncxCa_i = E2_i*k2_i - E1_i*k1_i;
  const double INaCa_i = 0.8*Gncx*scale_HF_Gncx*(zca*JncxCa_i +
    zna*JncxNa_i)*allo_i;

  // Expressions for the INaCa_ss component
  const double h1 = 1. + (1. + hna)*nass/kna3;
  const double h2 = hna*nass/(kna3*h1);
  const double h3 = 1.0/h1;
  const double h4 = 1.0 + (1. + nass/kna2)*nass/kna1;
  const double h5 = (nass*nass)/(kna1*kna2*h4);
  const double h6 = 1.0/h4;
  const double h7 = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8 = nao/(kna3*h7*hna);
  const double h9 = 1.0/h7;
  const double h10 = 1.0 + kasymm + nao*(1. + nao/kna2)/kna1;
  const double h11 = (nao*nao)/(kna1*kna2*h10);
  const double h12 = 1.0/h10;
  const double k1 = cao*kcaon*h12;
  const double k2 = kcaoff;
  const double k3p_ss = wca*h9;
  const double k3pp = wnaca*h8;
  const double k3 = k3p_ss + k3pp;
  const double k4p_ss = wca*h3/hca;
  const double k4pp = wnaca*h2;
  const double k4 = k4p_ss + k4pp;
  const double k5 = kcaoff;
  const double k6 = kcaon*cass*h6;
  const double k7 = wna*h2*h5;
  const double k8 = wna*h11*h8;
  const double x1_ss = (k2 + k3)*k5*k7 + (k6 + k7)*k2*k4;
  const double x2_ss = (k1 + k8)*k4*k6 + (k4 + k5)*k1*k7;
  const double x3_ss = (k2 + k3)*k6*k8 + (k6 + k7)*k1*k3;
  const double x4_ss = (k1 + k8)*k3*k5 + (k4 + k5)*k2*k8;
  const double E1_ss = x1_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E2_ss = x2_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E3_ss = x3_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E4_ss = x4_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double allo_ss = 1.0/(1.0 + pow(KmCaAct/cass, 2.0));
  const double JncxNa_ss = E3_ss*k4pp - E2_ss*k3pp + 3.0*E4_ss*k7 -
    3.0*E1_ss*k8;
  const double JncxCa_ss = E2_ss*k2 - E1_ss*k1;
  const double INaCa_ss = 0.2*Gncx*scale_HF_Gncx*(zca*JncxCa_ss +
    zna*JncxNa_ss)*allo_ss;

  // Expressions for the INaK component
  const double Knai = Knai0*exp(0.333333333333333*F*delta*v/(R*T));
  const double Knao = Knao0*exp(0.333333333333333*F*(1.0 - delta)*v/(R*T));
  const double P = eP/(1.0 + H/Khp + nai/Knap + ki/Kxkur);
  const double a1 = k1p*pow(nai/Knai, 3.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double b1 = MgADP*k1m;
  const double a2 = k2p;
  const double b2 = k2m*pow(nao/Knao, 3.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double a3 = k3p*pow(ko/Kko, 2.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double b3 = H*k3m*P/(1.0 + MgATP/Kmgatp);
  const double a4 = MgATP*k4p/(Kmgatp*(1.0 + MgATP/Kmgatp));
  const double b4 = k4m*pow(ki/Kki, 2.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double x1 = a1*a2*a4 + a1*a2*b3 + a2*b3*b4 + b2*b3*b4;
  const double x2 = a1*a2*a3 + a2*a3*b4 + a3*b1*b4 + b1*b2*b4;
  const double x3 = a2*a3*a4 + a3*a4*b1 + a4*b1*b2 + b1*b2*b3;
  const double x4 = a1*a3*a4 + a1*a4*b2 + a1*b2*b3 + b2*b3*b4;
  const double E1 = x1/(x1 + x2 + x3 + x4);
  const double E2 = x2/(x1 + x2 + x3 + x4);
  const double E3 = x3/(x1 + x2 + x3 + x4);
  const double E4 = x4/(x1 + x2 + x3 + x4);
  const double JnakNa = 3.0*E1*a3 - 3.0*E2*b3;
  const double JnakK = 2.0*E4*b1 - 2.0*E3*a1;
  const double INaK = Pnak*scale_HF_Pnak*(zk*JnakK + zna*JnakNa);

  // Expressions for the IKb component
  const double xkb = 1.0/(1.0 + 2.20236345094924*exp(-0.054525627044711*v));
  const double IKb = GKb*scale_drug_IKb*(-EK + v)*xkb;

  // Expressions for the INab component
  const double INab = PNab*scale_drug_INab*(-nao + exp(vfrt)*nai)*vffrt/(-1.0 +
    exp(vfrt));

  // Expressions for the ICab component
  const double ICab = 4.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*vfrt))*vffrt/(-1.0 + exp(2.0*vfrt));

  // Expressions for the IpCa component
  const double IpCa = GpCa*scale_drug_IpCa*cai/(0.0005 + cai);

  // Expressions for the Isac (Pueyo)--> ns + k component
  const double Isac_P_ns = 0.;
  const double Isac_P_k = 0.;

  // Expressions for the Istim component
  const double Istim = amp*(t <= duration);

  // Expressions for the membrane potential component
  const double dv_dt = -Isac_P_k - Isac_P_ns - ICaK - ICaL - ICaNa - ICab -
    IK1 - IKb - IKr - IKs - INa - INaCa_i - INaCa_ss - INaK - INaL - INab -
    IpCa - Istim - Ito;
  states[STATE_v] = dt*dv_dt + v;

  // Expressions for the diffusion fluxes component
  const double JdiffNa = 0.5*nass - 0.5*nai;
  const double JdiffK = 0.5*kss - 0.5*ki;
  const double Jdiff = 5.0*cass - 5.0*cai;

  // Expressions for the ryanodione receptor component
  const double a_rel = 0.5*bt;
  const double Jrel_inf = -ICaL*a_rel/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_rel_tmp = bt/(1.0 + 0.0123/cajsr);
  const double tau_rel = (tau_rel_tmp < 0.001 ? 0.001 : tau_rel_tmp);
  const double dJrelnp_dt = (-Jrelnp + Jrel_inf)/tau_rel;
  states[STATE_Jrelnp] = dt*dJrelnp_dt + Jrelnp;
  const double btp = 1.25*bt;
  const double a_relp = 0.5*btp;
  const double Jrel_infp = -ICaL*a_relp/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_relp_tmp = btp/(1.0 + 0.0123/cajsr);
  const double tau_relp = (tau_relp_tmp < 0.001 ? 0.001 : tau_relp_tmp);
  const double dJrelp_dt = (-Jrelp + Jrel_infp)/tau_relp;
  states[STATE_Jrelp] = dt*dJrelp_dt + Jrelp;
  const double fJrelp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jrel = (1.0 - fJrelp)*Jrelnp + Jrelp*fJrelp;

  // Expressions for the calcium buffers component
  const double Jupnp = 0.004375*cai/(0.00092 + cai);
  const double Jupp = 0.01203125*cai/(0.00075 + cai);
  const double fJupp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jleak = 0.0002625*scale_HF_Jleak*cansr;
  const double Jup = -Jleak + (1.0 - fJupp)*Jupnp + scale_HF_Jup*Jupp*fJupp;
  const double Jtr = 0.01*cansr - 0.01*cajsr;

  // Expressions for the intracellular concentrations component
  const double dnai_dt = JdiffNa*vss/vmyo + (-INa - INaL - INab -
    Isac_P_ns/3. - 3.0*INaCa_i - 3.0*INaK)*Acap/(F*vmyo);
  states[STATE_nai] = dt*dnai_dt + nai;
  const double dnass_dt = -JdiffNa + (-ICaNa - 3.0*INaCa_ss)*Acap/(F*vss);
  states[STATE_nass] = dt*dnass_dt + nass;
  const double dki_dt = JdiffK*vss/vmyo + (-Isac_P_k - IK1 - IKb - IKr - IKs
    - Istim - Ito - Isac_P_ns/3. + 2.0*INaK)*Acap/(F*vmyo);
  states[STATE_ki] = dt*dki_dt + ki;
  const double dkss_dt = -JdiffK - Acap*ICaK/(F*vss);
  states[STATE_kss] = dt*dkss_dt + kss;
  const double Bcass = 1.0/(1.0 + BSLmax*KmBSL*pow(KmBSL + cass, -2.0) +
    BSRmax*KmBSR*pow(KmBSR + cass, -2.0));
  const double dcass_dt = (-Jdiff + Jrel*vjsr/vss + 0.5*(-ICaL +
    2.0*INaCa_ss)*Acap/(F*vss))*Bcass;
  states[STATE_cass] = dt*dcass_dt + cass;
  const double dcansr_dt = -Jtr*vjsr/vnsr + Jup;
  states[STATE_cansr] = dt*dcansr_dt + cansr;
  const double Bcajsr = 1.0/(1.0 + csqnmax*kmcsqn*pow(kmcsqn + cajsr, -2.0));
  const double dcajsr_dt = (-Jrel + Jtr)*Bcajsr;
  states[STATE_cajsr] = dt*dcajsr_dt + cajsr;

  // Expressions for the mechanics component
  const double kwu = -kws + kuw*(-1. + 1.0/rw);
  const double ksu = kws*rw*(-1. + 1.0/rs);
  const double Aw = Tot_A*rs/(rs + rw*(1. - rs));
  const double As = Aw;
  const double cw = kuw*phi*(1. - rw)/rw;
  const double cs = kws*phi*rw*(1. - rs)/rs;
  const double lambda_min12 = (lmbda < 1.2 ? lmbda : 1.2);
  const double XU = 1. - TmB - XS - XW;
  const double gammawu = gammaw*fabs(Zetaw);
  const double gammasu = gammas*(Zetas*(Zetas > 0.) > (-1. - Zetas)*(Zetas <
    -1.) ? Zetas*(Zetas > 0.) : (-1. - Zetas)*(Zetas < -1.));
  const double dXS_dt = kws*XW - XS*gammasu - XS*ksu;
  states[STATE_XS] = dt*dXS_dt + XS;
  const double dXW_dt = kuw*XU - kws*XW - XW*gammawu - XW*kwu;
  states[STATE_XW] = dt*dXW_dt + XW;
  const double cat50 = scale_HF_cat50_ref*(cat50_ref + Beta1*(-1. +
    lambda_min12));
  const double dCaTrpn_dt = ktrpn*(-CaTrpn + pow(1000.*cai/cat50, ntrpn)*(1.
    - CaTrpn));
  states[STATE_CaTrpn] = dt*dCaTrpn_dt + CaTrpn;
  const double kb = ku*pow(Trpn50, ntm)/(1. - rs - rw*(1. - rs));
  const double dTmB_dt = (pow(CaTrpn, -ntm/2.) < 100. ? pow(CaTrpn, -ntm/2.)
    : 100.)*XU*kb - ku*pow(CaTrpn, ntm/2.)*TmB;
  states[STATE_TmB] = dt*dTmB_dt + TmB;
  const double dZetas_dt = dLambda*As - Zetas*cs;
  states[STATE_Zetas] = dt*dZetas_dt + Zetas;
  const double dZetaw_dt = dLambda*Aw - Zetaw*cw;
  states[STATE_Zetaw] = dt*dZetaw_dt + Zetaw;
  const double C = -1. + lambda_min12;
  const double dCd = -Cd + C;
  const double eta = (dCd < 0. ? etas : etal);
  const double dCd_dt = p_k*(-Cd + C)/eta;
  states[STATE_Cd] = dt*dCd_dt + Cd;
  const double Bcai = 1.0/(1.0 + cmdnmax*kmcmdn*pow(kmcmdn + cai, -2.0));
  const double J_TRPN = trpnmax*dCaTrpn_dt;
  const double dcai_dt = (-J_TRPN + Jdiff*vss/vmyo - Jup*vnsr/vmyo +
    0.5*(-ICab - IpCa - Isac_P_ns/3. + 2.0*INaCa_i)*Acap/(F*vmyo))*Bcai;
  states[STATE_cai] = dt*dcai_dt + cai;
}

// Compute a forward step using the Rush-Larsen scheme to the ORdmm_Land ODE
void forward_rush_larsen(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double CaMKt = states[STATE_CaMKt];
  const double m = states[STATE_m];
  const double hf = states[STATE_hf];
  const double hs = states[STATE_hs];
  const double j = states[STATE_j];
  const double hsp = states[STATE_hsp];
  const double jp = states[STATE_jp];
  const double mL = states[STATE_mL];
  const double hL = states[STATE_hL];
  const double hLp = states[STATE_hLp];
  const double a = states[STATE_a];
  const double iF = states[STATE_iF];
  const double iS = states[STATE_iS];
  const double ap = states[STATE_ap];
  const double iFp = states[STATE_iFp];
  const double iSp = states[STATE_iSp];
  const double d = states[STATE_d];
  const double ff = states[STATE_ff];
  const double fs = states[STATE_fs];
  const double fcaf = states[STATE_fcaf];
  const double fcas = states[STATE_fcas];
  const double jca = states[STATE_jca];
  const double ffp = states[STATE_ffp];
  const double fcafp = states[STATE_fcafp];
  const double nca = states[STATE_nca];
  const double xrf = states[STATE_xrf];
  const double xrs = states[STATE_xrs];
  const double xs1 = states[STATE_xs1];
  const double xs2 = states[STATE_xs2];
  const double xk1 = states[STATE_xk1];
  const double v = states[STATE_v];
  const double Jrelnp = states[STATE_Jrelnp];
  const double Jrelp = states[STATE_Jrelp];
  const double nai = states[STATE_nai];
  const double nass = states[STATE_nass];
  const double ki = states[STATE_ki];
  const double kss = states[STATE_kss];
  const double cass = states[STATE_cass];
  const double cansr = states[STATE_cansr];
  const double cajsr = states[STATE_cajsr];
  const double XS = states[STATE_XS];
  const double XW = states[STATE_XW];
  const double CaTrpn = states[STATE_CaTrpn];
  const double TmB = states[STATE_TmB];
  const double Zetas = states[STATE_Zetas];
  const double Zetaw = states[STATE_Zetaw];
  const double Cd = states[STATE_Cd];
  const double cai = states[STATE_cai];

  // Assign parameters
  const double scale_ICaL = parameters[PARAM_scale_ICaL];
  const double scale_IK1 = parameters[PARAM_scale_IK1];
  const double scale_IKr = parameters[PARAM_scale_IKr];
  const double scale_IKs = parameters[PARAM_scale_IKs];
  const double scale_INaL = parameters[PARAM_scale_INaL];
  const double cao = parameters[PARAM_cao];
  const double ko = parameters[PARAM_ko];
  const double nao = parameters[PARAM_nao];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double L = parameters[PARAM_L];
  const double rad = parameters[PARAM_rad];
  const double scale_HF_CaMKa = parameters[PARAM_scale_HF_CaMKa];
  const double scale_HF_GK1 = parameters[PARAM_scale_HF_GK1];
  const double scale_HF_GNaL = parameters[PARAM_scale_HF_GNaL];
  const double scale_HF_Gncx = parameters[PARAM_scale_HF_Gncx];
  const double scale_HF_Gto = parameters[PARAM_scale_HF_Gto];
  const double scale_HF_Jleak = parameters[PARAM_scale_HF_Jleak];
  const double scale_HF_Jrel_inf = parameters[PARAM_scale_HF_Jrel_inf];
  const double scale_HF_Jup = parameters[PARAM_scale_HF_Jup];
  const double scale_HF_Pnak = parameters[PARAM_scale_HF_Pnak];
  const double scale_HF_cat50_ref = parameters[PARAM_scale_HF_cat50_ref];
  const double scale_HF_thL = parameters[PARAM_scale_HF_thL];
  const double scale_drug_ICaL = parameters[PARAM_scale_drug_ICaL];
  const double scale_drug_ICab = parameters[PARAM_scale_drug_ICab];
  const double scale_drug_IK1 = parameters[PARAM_scale_drug_IK1];
  const double scale_drug_IKb = parameters[PARAM_scale_drug_IKb];
  const double scale_drug_IKr = parameters[PARAM_scale_drug_IKr];
  const double scale_drug_IKs = parameters[PARAM_scale_drug_IKs];
  const double scale_drug_INa = parameters[PARAM_scale_drug_INa];
  const double scale_drug_INaL = parameters[PARAM_scale_drug_INaL];
  const double scale_drug_INab = parameters[PARAM_scale_drug_INab];
  const double scale_drug_IpCa = parameters[PARAM_scale_drug_IpCa];
  const double scale_drug_Ito = parameters[PARAM_scale_drug_Ito];
  const double Ahf = parameters[PARAM_Ahf];
  const double GNa = parameters[PARAM_GNa];
  const double thL = parameters[PARAM_thL];
  const double Gto = parameters[PARAM_Gto];
  const double delta_epi = parameters[PARAM_delta_epi];
  const double Aff = parameters[PARAM_Aff];
  const double Kmn = parameters[PARAM_Kmn];
  const double k2n = parameters[PARAM_k2n];
  const double tjca = parameters[PARAM_tjca];
  const double zca = parameters[PARAM_zca];
  const double bt = parameters[PARAM_bt];
  const double Beta1 = parameters[PARAM_Beta1];
  const double Tot_A = parameters[PARAM_Tot_A];
  const double Trpn50 = parameters[PARAM_Trpn50];
  const double cat50_ref = parameters[PARAM_cat50_ref];
  const double dLambda = parameters[PARAM_dLambda];
  const double etal = parameters[PARAM_etal];
  const double etas = parameters[PARAM_etas];
  const double gammas = parameters[PARAM_gammas];
  const double gammaw = parameters[PARAM_gammaw];
  const double ktrpn = parameters[PARAM_ktrpn];
  const double ku = parameters[PARAM_ku];
  const double kuw = parameters[PARAM_kuw];
  const double kws = parameters[PARAM_kws];
  const double lmbda = parameters[PARAM_lmbda];
  const double ntm = parameters[PARAM_ntm];
  const double ntrpn = parameters[PARAM_ntrpn];
  const double p_k = parameters[PARAM_p_k];
  const double phi = parameters[PARAM_phi];
  const double rs = parameters[PARAM_rs];
  const double rw = parameters[PARAM_rw];
  const double CaMKo = parameters[PARAM_CaMKo];
  const double KmCaM = parameters[PARAM_KmCaM];
  const double KmCaMK = parameters[PARAM_KmCaMK];
  const double aCaMK = parameters[PARAM_aCaMK];
  const double bCaMK = parameters[PARAM_bCaMK];
  const double PKNa = parameters[PARAM_PKNa];
  const double Gncx = parameters[PARAM_Gncx];
  const double KmCaAct = parameters[PARAM_KmCaAct];
  const double kasymm = parameters[PARAM_kasymm];
  const double kcaoff = parameters[PARAM_kcaoff];
  const double kcaon = parameters[PARAM_kcaon];
  const double kna1 = parameters[PARAM_kna1];
  const double kna2 = parameters[PARAM_kna2];
  const double kna3 = parameters[PARAM_kna3];
  const double qca = parameters[PARAM_qca];
  const double qna = parameters[PARAM_qna];
  const double wca = parameters[PARAM_wca];
  const double wna = parameters[PARAM_wna];
  const double wnaca = parameters[PARAM_wnaca];
  const double H = parameters[PARAM_H];
  const double Khp = parameters[PARAM_Khp];
  const double Kki = parameters[PARAM_Kki];
  const double Kko = parameters[PARAM_Kko];
  const double Kmgatp = parameters[PARAM_Kmgatp];
  const double Knai0 = parameters[PARAM_Knai0];
  const double Knao0 = parameters[PARAM_Knao0];
  const double Knap = parameters[PARAM_Knap];
  const double Kxkur = parameters[PARAM_Kxkur];
  const double MgADP = parameters[PARAM_MgADP];
  const double MgATP = parameters[PARAM_MgATP];
  const double Pnak = parameters[PARAM_Pnak];
  const double delta = parameters[PARAM_delta];
  const double eP = parameters[PARAM_eP];
  const double k1m = parameters[PARAM_k1m];
  const double k1p = parameters[PARAM_k1p];
  const double k2m = parameters[PARAM_k2m];
  const double k2p = parameters[PARAM_k2p];
  const double k3m = parameters[PARAM_k3m];
  const double k3p = parameters[PARAM_k3p];
  const double k4m = parameters[PARAM_k4m];
  const double k4p = parameters[PARAM_k4p];
  const double zk = parameters[PARAM_zk];
  const double GKb = parameters[PARAM_GKb];
  const double PNab = parameters[PARAM_PNab];
  const double PCab = parameters[PARAM_PCab];
  const double GpCa = parameters[PARAM_GpCa];
  const double amp = parameters[PARAM_amp];
  const double duration = parameters[PARAM_duration];
  const double BSLmax = parameters[PARAM_BSLmax];
  const double BSRmax = parameters[PARAM_BSRmax];
  const double KmBSL = parameters[PARAM_KmBSL];
  const double KmBSR = parameters[PARAM_KmBSR];
  const double cmdnmax = parameters[PARAM_cmdnmax];
  const double csqnmax = parameters[PARAM_csqnmax];
  const double kmcmdn = parameters[PARAM_kmcmdn];
  const double kmcsqn = parameters[PARAM_kmcsqn];
  const double trpnmax = parameters[PARAM_trpnmax];

  // Expressions for the cell geometry component
  const double vcell = 3140.0*L*(rad*rad);
  const double Ageo = 6.28*(rad*rad) + 6.28*L*rad;
  const double Acap = 2.*Ageo;
  const double vmyo = 0.68*vcell;
  const double vnsr = 0.0552*vcell;
  const double vjsr = 0.0048*vcell;
  const double vss = 0.02*vcell;

  // Expressions for the CaMKt component
  const double CaMKb = CaMKo*(1.0 - CaMKt)/(1.0 + KmCaM/cass);
  const double CaMKa = scale_HF_CaMKa*(CaMKb + CaMKt);
  const double dCaMKt_dt = -bCaMK*CaMKt + aCaMK*(CaMKb + CaMKt)*CaMKb;
  const double dCaMKb_dCaMKt = -CaMKo/(1.0 + KmCaM/cass);
  const double dCaMKt_dt_linearized = -bCaMK + aCaMK*(1. +
    dCaMKb_dCaMKt)*CaMKb + aCaMK*(CaMKb + CaMKt)*dCaMKb_dCaMKt;
  states[STATE_CaMKt] = CaMKt + (fabs(dCaMKt_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCaMKt_dt_linearized))*dCaMKt_dt/dCaMKt_dt_linearized :
    dt*dCaMKt_dt);

  // Expressions for the reversal potentials component
  const double ENa = R*T*log(nao/nai)/F;
  const double EK = R*T*log(ko/ki)/F;
  const double EKs = R*T*log((ko + PKNa*nao)/(PKNa*nai + ki))/F;
  const double vffrt = (F*F)*v/(R*T);
  const double vfrt = F*v/(R*T);

  // Expressions for the I_Na component
  const double mss = 1.0/(1.0 + 0.00145997884464897*exp(-0.133333333333333*v));
  const double tm = 1.0/(9.45490463856472*exp(0.0287604256542997*v) +
    1.93141135585369e-5*exp(-0.167926112510495*v));
  const double dm_dt = (-m + mss)/tm;
  const double dm_dt_linearized = -1./tm;
  states[STATE_m] = (expm1(dt*dm_dt_linearized))*dm_dt/dm_dt_linearized + m;
  const double hss = 1.0/(1. + 302724.605401998*exp(0.160771704180064*v));
  const double thf = 1.0/(1.18385695828909e-5*exp(-0.159108989657916*v) +
    6.30554918581728*exp(0.0493339911198816*v));
  const double ths = 1.0/(0.00516467023538179*exp(-0.035650623885918*v) +
    0.369876193720963*exp(0.0176491351923756*v));
  const double Ahs = 1.0 - Ahf;
  const double dhf_dt = (-hf + hss)/thf;
  const double dhf_dt_linearized = -1./thf;
  states[STATE_hf] = (expm1(dt*dhf_dt_linearized))*dhf_dt/dhf_dt_linearized +
    hf;
  const double dhs_dt = (-hs + hss)/ths;
  const double dhs_dt_linearized = -1./ths;
  states[STATE_hs] = (expm1(dt*dhs_dt_linearized))*dhs_dt/dhs_dt_linearized +
    hs;
  const double h = Ahf*hf + Ahs*hs;
  const double jss = hss;
  const double tj = 2.038 + 1.0/(0.313193639473877*exp(0.0260078023407022*v)
    + 1.13152820955901e-7*exp(-0.120758362516604*v));
  const double dj_dt = (-j + jss)/tj;
  const double dj_dt_linearized = -1./tj;
  states[STATE_j] = (expm1(dt*dj_dt_linearized))*dj_dt/dj_dt_linearized + j;
  const double hssp = 1.0/(1. + 820249.092170851*exp(0.160771704180064*v));
  const double thsp = 3.0*ths;
  const double dhsp_dt = (-hsp + hssp)/thsp;
  const double dhsp_dt_linearized = -1./thsp;
  states[STATE_hsp] =
    (expm1(dt*dhsp_dt_linearized))*dhsp_dt/dhsp_dt_linearized + hsp;
  const double hp = Ahf*hf + Ahs*hsp;
  const double tjp = 1.46*tj;
  const double djp_dt = (-jp + jss)/tjp;
  const double djp_dt_linearized = -1./tjp;
  states[STATE_jp] = (expm1(dt*djp_dt_linearized))*djp_dt/djp_dt_linearized +
    jp;
  const double fINap = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INa = GNa*scale_drug_INa*pow(m, 3.0)*(-ENa + v)*((1.0 -
    fINap)*h*j + fINap*hp*jp);

  // Expressions for the INaL component
  const double mLss = 1.0/(1.0 +
    0.000291579585635531*exp(-0.189969604863222*v));
  const double tmL = tm;
  const double dmL_dt = (-mL + mLss)/tmL;
  const double dmL_dt_linearized = -1./tmL;
  states[STATE_mL] = (expm1(dt*dmL_dt_linearized))*dmL_dt/dmL_dt_linearized +
    mL;
  const double hLss = 1.0/(1.0 + 120578.155955224*exp(0.133547008547009*v));
  const double dhL_dt = (-hL + hLss)/(scale_HF_thL*thL);
  const double dhL_dt_linearized = -1./(scale_HF_thL*thL);
  states[STATE_hL] = (expm1(dt*dhL_dt_linearized))*dhL_dt/dhL_dt_linearized +
    hL;
  const double hLssp = 1.0/(1.0 + 275969.290386987*exp(0.133547008547009*v));
  const double thLp = 3.0*scale_HF_thL*thL;
  const double dhLp_dt = (-hLp + hLssp)/thLp;
  const double dhLp_dt_linearized = -1./thLp;
  states[STATE_hLp] =
    (expm1(dt*dhLp_dt_linearized))*dhLp_dt/dhLp_dt_linearized + hLp;
  const double GNaL = 0.0075*scale_HF_GNaL*scale_INaL*scale_drug_INaL;
  const double fINaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double INaL = (-ENa + v)*((1.0 - fINaLp)*hL + fINaLp*hLp)*GNaL*mL;

  // Expressions for the Ito component
  const double ass = 1.0/(1.0 + 2.63165081616736*exp(-0.0674763832658569*v));
  const double ta = 1.0515/(1.0/(1.2089 +
    2.26210170705788*exp(-0.0340351378763435*v)) + 3.5/(1.0 +
    30.0695727273975*exp(0.0340351378763435*v)));
  const double da_dt = (-a + ass)/ta;
  const double da_dt_linearized = -1./ta;
  states[STATE_a] = (expm1(dt*da_dt_linearized))*da_dt/da_dt_linearized + a;
  const double iss = 1.0/(1.0 + 2194.9707645383*exp(0.175100682892663*v));
  const double tiF = 4.562 + delta_epi/(0.144686984212728*exp(-0.01*v) +
    1.63008963497809*exp(0.0602772754671489*v));
  const double tiS = 23.62 +
    delta_epi/(0.000276177639533774*exp(-0.0169348010160881*v) +
    0.0242089628046045*exp(0.123777695259314*v));
  const double AiF = 1.0/(1.0 + 0.243485371875229*exp(0.00661375661375661*v));
  const double AiS = 1.0 - AiF;
  const double diF_dt = (-iF + iss)/tiF;
  const double diF_dt_linearized = -1./tiF;
  states[STATE_iF] = (expm1(dt*diF_dt_linearized))*diF_dt/diF_dt_linearized +
    iF;
  const double diS_dt = (-iS + iss)/tiS;
  const double diS_dt_linearized = -1./tiS;
  states[STATE_iS] = (expm1(dt*diS_dt_linearized))*diS_dt/diS_dt_linearized +
    iS;
  const double i = AiF*iF + AiS*iS;
  const double assp = 1.0/(1.0 + 5.16742846223067*exp(-0.0674763832658569*v));
  const double dap_dt = (-ap + assp)/ta;
  const double dap_dt_linearized = -1./ta;
  states[STATE_ap] = (expm1(dt*dap_dt_linearized))*dap_dt/dap_dt_linearized +
    ap;
  const double dti_develop = 1.354 +
    0.0001/(2.65912690452306e-5*exp(0.0629326620516048*v) +
    4.55417797371283e+24*exp(-4.64252553389044*v));
  const double dti_recover = 1.0 - 0.5/(1.0 + 33.1154519586923*exp(0.05*v));
  const double tiFp = dti_develop*dti_recover*tiF;
  const double tiSp = dti_develop*dti_recover*tiS;
  const double diFp_dt = (-iFp + iss)/tiFp;
  const double diFp_dt_linearized = -1./tiFp;
  states[STATE_iFp] =
    (expm1(dt*diFp_dt_linearized))*diFp_dt/diFp_dt_linearized + iFp;
  const double diSp_dt = (-iSp + iss)/tiSp;
  const double diSp_dt_linearized = -1./tiSp;
  states[STATE_iSp] =
    (expm1(dt*diSp_dt_linearized))*diSp_dt/diSp_dt_linearized + iSp;
  const double ip = AiF*iFp + AiS*iSp;
  const double fItop = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Ito = Gto*scale_HF_Gto*scale_drug_Ito*(-EK + v)*((1.0 -
    fItop)*a*i + ap*fItop*ip);

  // Expressions for the ICaL ICaNa ICaK component
  const double dss = 1.0/(1.0 + 0.393985142266695*exp(-0.236406619385343*v));
  const double td = 0.6 + 1.0/(3.52542148736538*exp(0.09*v) +
    0.740818220681718*exp(-0.05*v));
  const double dd_dt = (-d + dss)/td;
  const double dd_dt_linearized = -1./td;
  states[STATE_d] = (expm1(dt*dd_dt_linearized))*dd_dt/dd_dt_linearized + d;
  const double fss = 1.0/(1.0 + 199.860384967786*exp(0.270562770562771*v));
  const double tff = 7.0 + 1.0/(0.0332507524451879*exp(0.1*v) +
    0.000609008774564757*exp(-0.1*v));
  const double tfs = 1000.0 + 1.0/(1.00276678901067e-5*exp(-0.25*v) +
    8.05341561812489e-5*exp(0.166666666666667*v));
  const double Afs = 1.0 - Aff;
  const double dff_dt = (-ff + fss)/tff;
  const double dff_dt_linearized = -1./tff;
  states[STATE_ff] = (expm1(dt*dff_dt_linearized))*dff_dt/dff_dt_linearized +
    ff;
  const double dfs_dt = (-fs + fss)/tfs;
  const double dfs_dt_linearized = -1./tfs;
  states[STATE_fs] = (expm1(dt*dfs_dt_linearized))*dfs_dt/dfs_dt_linearized +
    fs;
  const double f = Aff*ff + Afs*fs;
  const double fcass = fss;
  const double tfcaf = 7.0 +
    1.0/(0.0708317980974062*exp(-0.142857142857143*v) +
    0.0225887248803104*exp(0.142857142857143*v));
  const double tfcas = 100.0 + 1.0/(0.00012*exp(0.142857142857143*v) +
    0.00012*exp(-0.333333333333333*v));
  const double Afcaf = 0.3 + 0.6/(1.0 + 0.367879441171442*exp(0.1*v));
  const double Afcas = 1.0 - Afcaf;
  const double dfcaf_dt = (-fcaf + fcass)/tfcaf;
  const double dfcaf_dt_linearized = -1./tfcaf;
  states[STATE_fcaf] =
    (expm1(dt*dfcaf_dt_linearized))*dfcaf_dt/dfcaf_dt_linearized + fcaf;
  const double dfcas_dt = (-fcas + fcass)/tfcas;
  const double dfcas_dt_linearized = -1./tfcas;
  states[STATE_fcas] =
    (expm1(dt*dfcas_dt_linearized))*dfcas_dt/dfcas_dt_linearized + fcas;
  const double fca = Afcaf*fcaf + Afcas*fcas;
  const double djca_dt = (-jca + fcass)/tjca;
  const double djca_dt_linearized = -1./tjca;
  states[STATE_jca] =
    (expm1(dt*djca_dt_linearized))*djca_dt/djca_dt_linearized + jca;
  const double tffp = 2.5*tff;
  const double dffp_dt = (-ffp + fss)/tffp;
  const double dffp_dt_linearized = -1./tffp;
  states[STATE_ffp] =
    (expm1(dt*dffp_dt_linearized))*dffp_dt/dffp_dt_linearized + ffp;
  const double fp = Aff*ffp + Afs*fs;
  const double tfcafp = 2.5*tfcaf;
  const double dfcafp_dt = (-fcafp + fcass)/tfcafp;
  const double dfcafp_dt_linearized = -1./tfcafp;
  states[STATE_fcafp] =
    (expm1(dt*dfcafp_dt_linearized))*dfcafp_dt/dfcafp_dt_linearized + fcafp;
  const double fcap = Afcaf*fcafp + Afcas*fcas;
  const double km2n = 1.0*jca;
  const double anca = 1.0/(pow(1.0 + Kmn/cass, 4.0) + k2n/km2n);
  const double dnca_dt = k2n*anca - km2n*nca;
  const double dnca_dt_linearized = -km2n;
  states[STATE_nca] = (fabs(dnca_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dnca_dt_linearized))*dnca_dt/dnca_dt_linearized : dt*dnca_dt) +
    nca;
  const double PhiCaL = 4.0*(-0.341*cao + cass*exp(2.0*vfrt))*vffrt/(-1.0 +
    exp(2.0*vfrt));
  const double PhiCaNa = 1.0*(-0.75*nao +
    0.75*exp(1.0*vfrt)*nass)*vffrt/(-1.0 + exp(1.0*vfrt));
  const double PhiCaK = 1.0*(-0.75*ko + 0.75*exp(1.0*vfrt)*kss)*vffrt/(-1.0 +
    exp(1.0*vfrt));
  const double PCa = 0.0001*scale_ICaL*scale_drug_ICaL;
  const double PCap = 1.1*PCa;
  const double PCaNa = 0.00125*PCa;
  const double PCaK = 0.0003574*PCa;
  const double PCaNap = 0.00125*PCap;
  const double PCaKp = 0.0003574*PCap;
  const double fICaLp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double ICaL = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCa*PhiCaL*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCap*PhiCaL*d*fICaLp;
  const double ICaNa = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaNa*PhiCaNa*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaNap*PhiCaNa*d*fICaLp;
  const double ICaK = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaK*PhiCaK*d + ((1.0 - nca)*fp +
    fcap*jca*nca)*PCaKp*PhiCaK*d*fICaLp;

  // Expressions for the IKr component
  const double xrss = 1.0/(1.0 + 0.292873088723775*exp(-0.147297098247165*v));
  const double txrf = 12.98 +
    1.0/(0.000102023931289489*exp(0.258464719565779*v) +
    0.000429929608919291*exp(-0.0490677134445535*v));
  const double txrs = 1.865 +
    1.0/(0.000592242003680939*exp(0.135961930659415*v) +
    3.54996611180246e-5*exp(-0.038550501156515*v));
  const double Axrf = 1.0/(1.0 + 4.19729909473472*exp(0.0261711593823606*v));
  const double Axrs = 1.0 - Axrf;
  const double dxrf_dt = (-xrf + xrss)/txrf;
  const double dxrf_dt_linearized = -1./txrf;
  states[STATE_xrf] =
    (expm1(dt*dxrf_dt_linearized))*dxrf_dt/dxrf_dt_linearized + xrf;
  const double dxrs_dt = (-xrs + xrss)/txrs;
  const double dxrs_dt_linearized = -1./txrs;
  states[STATE_xrs] =
    (expm1(dt*dxrs_dt_linearized))*dxrs_dt/dxrs_dt_linearized + xrs;
  const double xr = Axrf*xrf + Axrs*xrs;
  const double rkr = 1.0/((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)));
  const double GKr = 0.046*scale_IKr*scale_drug_IKr;
  const double IKr = 0.430331482911935*sqrt(ko)*(-EK + v)*GKr*rkr*xr;

  // Expressions for the IKs component
  const double xs1ss = 1.0/(1.0 + 0.272885960356565*exp(-0.111957008508733*v));
  const double txs1 = 817.3 +
    1.0/(0.00350406776307486*exp(0.0561797752808989*v) +
    0.000518480908358166*exp(-0.00434782608695652*v));
  const double dxs1_dt = (-xs1 + xs1ss)/txs1;
  const double dxs1_dt_linearized = -1./txs1;
  states[STATE_xs1] =
    (expm1(dt*dxs1_dt_linearized))*dxs1_dt/dxs1_dt_linearized + xs1;
  const double xs2ss = xs1ss;
  const double txs2 = 1.0/(0.00225613570106391*exp(-0.032258064516129*v) +
    0.000820849986238988*exp(0.05*v));
  const double dxs2_dt = (-xs2 + xs2ss)/txs2;
  const double dxs2_dt_linearized = -1./txs2;
  states[STATE_xs2] =
    (expm1(dt*dxs2_dt_linearized))*dxs2_dt/dxs2_dt_linearized + xs2;
  const double KsCa = 1.0 + 0.6/(1.0 + 6.48182102606265e-7*pow(1.0/cai, 1.4));
  const double GKs = 0.0034*scale_IKs*scale_drug_IKs;
  const double IKs = (-EKs + v)*GKs*KsCa*xs1*xs2;
  const double xk1ss = 1.0/(1.0 + exp((-144.59 - v - 2.5538*ko)/(3.8115 +
    1.5692*ko)));
  const double txk1 = 122.2/(0.00193520076313902*exp(-0.0491159135559921*v) +
    30.433647575249*exp(0.0144237703735757*v));
  const double dxk1_dt = (-xk1 + xk1ss)/txk1;
  const double dxk1_dt_linearized = -1./txk1;
  states[STATE_xk1] =
    (expm1(dt*dxk1_dt_linearized))*dxk1_dt/dxk1_dt_linearized + xk1;
  const double rk1 = 1.0/(1.0 + 69220.6322106767*exp(0.105340777414937*v -
    0.273886021278837*ko));
  const double GK1 = 0.1908*scale_HF_GK1*scale_IK1*scale_drug_IK1;
  const double IK1 = sqrt(ko)*(-EK + v)*GK1*rk1*xk1;

  // Expressions for the INaCa_i component
  const double hca = exp(F*qca*v/(R*T));
  const double hna = exp(F*qna*v/(R*T));
  const double h1_i = 1. + (1. + hna)*nai/kna3;
  const double h2_i = hna*nai/(kna3*h1_i);
  const double h3_i = 1.0/h1_i;
  const double h4_i = 1.0 + (1. + nai/kna2)*nai/kna1;
  const double h5_i = (nai*nai)/(kna1*kna2*h4_i);
  const double h6_i = 1.0/h4_i;
  const double h7_i = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8_i = nao/(kna3*h7_i*hna);
  const double h9_i = 1.0/h7_i;
  const double h10_i = 1.0 + kasymm + nao*(1.0 + nao/kna2)/kna1;
  const double h11_i = (nao*nao)/(kna1*kna2*h10_i);
  const double h12_i = 1.0/h10_i;
  const double k1_i = cao*kcaon*h12_i;
  const double k2_i = kcaoff;
  const double k3p_i = wca*h9_i;
  const double k3pp_i = wnaca*h8_i;
  const double k3_i = k3p_i + k3pp_i;
  const double k4p_i = wca*h3_i/hca;
  const double k4pp_i = wnaca*h2_i;
  const double k4_i = k4p_i + k4pp_i;
  const double k5_i = kcaoff;
  const double k6_i = kcaon*cai*h6_i;
  const double k7_i = wna*h2_i*h5_i;
  const double k8_i = wna*h11_i*h8_i;
  const double x1_i = (k2_i + k3_i)*k5_i*k7_i + (k6_i + k7_i)*k2_i*k4_i;
  const double x2_i = (k1_i + k8_i)*k4_i*k6_i + (k4_i + k5_i)*k1_i*k7_i;
  const double x3_i = (k2_i + k3_i)*k6_i*k8_i + (k6_i + k7_i)*k1_i*k3_i;
  const double x4_i = (k1_i + k8_i)*k3_i*k5_i + (k4_i + k5_i)*k2_i*k8_i;
  const double E1_i = x1_i/(x1_i + x2_i + x3_i + x4_i);
  const double E2_i = x2_i/(x1_i + x2_i + x3_i + x4_i);
  const double E3_i = x3_i/(x1_i + x2_i + x3_i + x4_i);
  const double E4_i = x4_i/(x1_i + x2_i + x3_i + x4_i);
  const double allo_i = 1.0/(1.0 + pow(KmCaAct/cai, 2.0));
  const double zna = 1.00000000000000;
  const double JncxNa_i = E3_i*k4pp_i - E2_i*k3pp_i + 3.0*E4_i*k7_i -
    3.0*E1_i*k8_i;
  const double JncxCa_i = E2_i*k2_i - E1_i*k1_i;
  const double INaCa_i = 0.8*Gncx*scale_HF_Gncx*(zca*JncxCa_i +
    zna*JncxNa_i)*allo_i;

  // Expressions for the INaCa_ss component
  const double h1 = 1. + (1. + hna)*nass/kna3;
  const double h2 = hna*nass/(kna3*h1);
  const double h3 = 1.0/h1;
  const double h4 = 1.0 + (1. + nass/kna2)*nass/kna1;
  const double h5 = (nass*nass)/(kna1*kna2*h4);
  const double h6 = 1.0/h4;
  const double h7 = 1.0 + nao*(1.0 + 1.0/hna)/kna3;
  const double h8 = nao/(kna3*h7*hna);
  const double h9 = 1.0/h7;
  const double h10 = 1.0 + kasymm + nao*(1. + nao/kna2)/kna1;
  const double h11 = (nao*nao)/(kna1*kna2*h10);
  const double h12 = 1.0/h10;
  const double k1 = cao*kcaon*h12;
  const double k2 = kcaoff;
  const double k3p_ss = wca*h9;
  const double k3pp = wnaca*h8;
  const double k3 = k3p_ss + k3pp;
  const double k4p_ss = wca*h3/hca;
  const double k4pp = wnaca*h2;
  const double k4 = k4p_ss + k4pp;
  const double k5 = kcaoff;
  const double k6 = kcaon*cass*h6;
  const double k7 = wna*h2*h5;
  const double k8 = wna*h11*h8;
  const double x1_ss = (k2 + k3)*k5*k7 + (k6 + k7)*k2*k4;
  const double x2_ss = (k1 + k8)*k4*k6 + (k4 + k5)*k1*k7;
  const double x3_ss = (k2 + k3)*k6*k8 + (k6 + k7)*k1*k3;
  const double x4_ss = (k1 + k8)*k3*k5 + (k4 + k5)*k2*k8;
  const double E1_ss = x1_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E2_ss = x2_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E3_ss = x3_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double E4_ss = x4_ss/(x1_ss + x2_ss + x3_ss + x4_ss);
  const double allo_ss = 1.0/(1.0 + pow(KmCaAct/cass, 2.0));
  const double JncxNa_ss = E3_ss*k4pp - E2_ss*k3pp + 3.0*E4_ss*k7 -
    3.0*E1_ss*k8;
  const double JncxCa_ss = E2_ss*k2 - E1_ss*k1;
  const double INaCa_ss = 0.2*Gncx*scale_HF_Gncx*(zca*JncxCa_ss +
    zna*JncxNa_ss)*allo_ss;

  // Expressions for the INaK component
  const double Knai = Knai0*exp(0.333333333333333*F*delta*v/(R*T));
  const double Knao = Knao0*exp(0.333333333333333*F*(1.0 - delta)*v/(R*T));
  const double P = eP/(1.0 + H/Khp + nai/Knap + ki/Kxkur);
  const double a1 = k1p*pow(nai/Knai, 3.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double b1 = MgADP*k1m;
  const double a2 = k2p;
  const double b2 = k2m*pow(nao/Knao, 3.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double a3 = k3p*pow(ko/Kko, 2.0)/(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0));
  const double b3 = H*k3m*P/(1.0 + MgATP/Kmgatp);
  const double a4 = MgATP*k4p/(Kmgatp*(1.0 + MgATP/Kmgatp));
  const double b4 = k4m*pow(ki/Kki, 2.0)/(-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0));
  const double x1 = a1*a2*a4 + a1*a2*b3 + a2*b3*b4 + b2*b3*b4;
  const double x2 = a1*a2*a3 + a2*a3*b4 + a3*b1*b4 + b1*b2*b4;
  const double x3 = a2*a3*a4 + a3*a4*b1 + a4*b1*b2 + b1*b2*b3;
  const double x4 = a1*a3*a4 + a1*a4*b2 + a1*b2*b3 + b2*b3*b4;
  const double E1 = x1/(x1 + x2 + x3 + x4);
  const double E2 = x2/(x1 + x2 + x3 + x4);
  const double E3 = x3/(x1 + x2 + x3 + x4);
  const double E4 = x4/(x1 + x2 + x3 + x4);
  const double JnakNa = 3.0*E1*a3 - 3.0*E2*b3;
  const double JnakK = 2.0*E4*b1 - 2.0*E3*a1;
  const double INaK = Pnak*scale_HF_Pnak*(zk*JnakK + zna*JnakNa);

  // Expressions for the IKb component
  const double xkb = 1.0/(1.0 + 2.20236345094924*exp(-0.054525627044711*v));
  const double IKb = GKb*scale_drug_IKb*(-EK + v)*xkb;

  // Expressions for the INab component
  const double INab = PNab*scale_drug_INab*(-nao + exp(vfrt)*nai)*vffrt/(-1.0 +
    exp(vfrt));

  // Expressions for the ICab component
  const double ICab = 4.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*vfrt))*vffrt/(-1.0 + exp(2.0*vfrt));

  // Expressions for the IpCa component
  const double IpCa = GpCa*scale_drug_IpCa*cai/(0.0005 + cai);

  // Expressions for the Isac (Pueyo)--> ns + k component
  const double Isac_P_ns = 0.;
  const double Isac_P_k = 0.;

  // Expressions for the Istim component
  const double Istim = amp*(t <= duration);

  // Expressions for the membrane potential component
  const double dv_dt = -Isac_P_k - Isac_P_ns - ICaK - ICaL - ICaNa - ICab -
    IK1 - IKb - IKr - IKs - INa - INaCa_i - INaCa_ss - INaK - INaL - INab -
    IpCa - Istim - Ito;
  const double dAfcaf_dv = -0.0220727664702865*exp(0.1*v)/((1.0 +
    0.367879441171442*exp(0.1*v))*(1.0 + 0.367879441171442*exp(0.1*v)));
  const double dAiF_dv =
    -0.00161035298859278*exp(0.00661375661375661*v)/((1.0 +
    0.243485371875229*exp(0.00661375661375661*v))*(1.0 +
    0.243485371875229*exp(0.00661375661375661*v)));
  const double dAxrf_dv = -0.10984818358374*exp(0.0261711593823606*v)/((1.0 +
    4.19729909473472*exp(0.0261711593823606*v))*(1.0 +
    4.19729909473472*exp(0.0261711593823606*v)));
  const double dE1_dx1 = 1.0/(x1 + x2 + x3 + x4) - x1/((x1 + x2 + x3 +
    x4)*(x1 + x2 + x3 + x4));
  const double dE1_dx2 = -x1/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE1_dx3 = -x1/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE1_dx4 = -x1/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE1_i_dx1_i = 1.0/(x1_i + x2_i + x3_i + x4_i) - x1_i/((x1_i +
    x2_i + x3_i + x4_i)*(x1_i + x2_i + x3_i + x4_i));
  const double dE1_i_dx2_i = -x1_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE1_i_dx3_i = -x1_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE1_i_dx4_i = -x1_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE1_ss_dx1_ss = 1.0/(x1_ss + x2_ss + x3_ss + x4_ss) -
    x1_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss + x2_ss + x3_ss + x4_ss));
  const double dE1_ss_dx2_ss = -x1_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE1_ss_dx3_ss = -x1_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE1_ss_dx4_ss = -x1_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE2_dx1 = -x2/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE2_dx2 = 1.0/(x1 + x2 + x3 + x4) - x2/((x1 + x2 + x3 +
    x4)*(x1 + x2 + x3 + x4));
  const double dE2_dx3 = -x2/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE2_dx4 = -x2/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE2_i_dx1_i = -x2_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE2_i_dx2_i = 1.0/(x1_i + x2_i + x3_i + x4_i) - x2_i/((x1_i +
    x2_i + x3_i + x4_i)*(x1_i + x2_i + x3_i + x4_i));
  const double dE2_i_dx3_i = -x2_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE2_i_dx4_i = -x2_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE2_ss_dx1_ss = -x2_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE2_ss_dx2_ss = 1.0/(x1_ss + x2_ss + x3_ss + x4_ss) -
    x2_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss + x2_ss + x3_ss + x4_ss));
  const double dE2_ss_dx3_ss = -x2_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE2_ss_dx4_ss = -x2_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE3_dx1 = -x3/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE3_dx2 = -x3/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE3_dx3 = 1.0/(x1 + x2 + x3 + x4) - x3/((x1 + x2 + x3 +
    x4)*(x1 + x2 + x3 + x4));
  const double dE3_dx4 = -x3/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE3_i_dx1_i = -x3_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE3_i_dx2_i = -x3_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE3_i_dx3_i = 1.0/(x1_i + x2_i + x3_i + x4_i) - x3_i/((x1_i +
    x2_i + x3_i + x4_i)*(x1_i + x2_i + x3_i + x4_i));
  const double dE3_i_dx4_i = -x3_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE3_ss_dx1_ss = -x3_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE3_ss_dx2_ss = -x3_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE3_ss_dx3_ss = 1.0/(x1_ss + x2_ss + x3_ss + x4_ss) -
    x3_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss + x2_ss + x3_ss + x4_ss));
  const double dE3_ss_dx4_ss = -x3_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE4_dx1 = -x4/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE4_dx2 = -x4/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE4_dx3 = -x4/((x1 + x2 + x3 + x4)*(x1 + x2 + x3 + x4));
  const double dE4_dx4 = 1.0/(x1 + x2 + x3 + x4) - x4/((x1 + x2 + x3 +
    x4)*(x1 + x2 + x3 + x4));
  const double dE4_i_dx1_i = -x4_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE4_i_dx2_i = -x4_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE4_i_dx3_i = -x4_i/((x1_i + x2_i + x3_i + x4_i)*(x1_i + x2_i
    + x3_i + x4_i));
  const double dE4_i_dx4_i = 1.0/(x1_i + x2_i + x3_i + x4_i) - x4_i/((x1_i +
    x2_i + x3_i + x4_i)*(x1_i + x2_i + x3_i + x4_i));
  const double dE4_ss_dx1_ss = -x4_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE4_ss_dx2_ss = -x4_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE4_ss_dx3_ss = -x4_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss
    + x2_ss + x3_ss + x4_ss));
  const double dE4_ss_dx4_ss = 1.0/(x1_ss + x2_ss + x3_ss + x4_ss) -
    x4_ss/((x1_ss + x2_ss + x3_ss + x4_ss)*(x1_ss + x2_ss + x3_ss + x4_ss));
  const double dICaK_dPhiCaK = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaK*d + ((1.0 - nca)*fp + fcap*jca*nca)*PCaKp*d*fICaLp;
  const double dICaK_dfca = (1.0 - fICaLp)*PCaK*PhiCaK*d*jca*nca;
  const double dICaK_dfcap = PCaKp*PhiCaK*d*fICaLp*jca*nca;
  const double dICaL_dPhiCaL = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCa*d + ((1.0 - nca)*fp + fcap*jca*nca)*PCap*d*fICaLp;
  const double dICaL_dfca = (1.0 - fICaLp)*PCa*PhiCaL*d*jca*nca;
  const double dICaL_dfcap = PCap*PhiCaL*d*fICaLp*jca*nca;
  const double dICaNa_dPhiCaNa = (1.0 - fICaLp)*((1.0 - nca)*f +
    fca*jca*nca)*PCaNa*d + ((1.0 - nca)*fp + fcap*jca*nca)*PCaNap*d*fICaLp;
  const double dICaNa_dfca = (1.0 - fICaLp)*PCaNa*PhiCaNa*d*jca*nca;
  const double dICaNa_dfcap = PCaNap*PhiCaNa*d*fICaLp*jca*nca;
  const double dICab_dvffrt = 4.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*vfrt))/(-1.0 + exp(2.0*vfrt));
  const double dICab_dvfrt =
    8.0*PCab*scale_drug_ICab*cai*exp(2.0*vfrt)*vffrt/(-1.0 + exp(2.0*vfrt)) -
    8.0*PCab*scale_drug_ICab*(-0.341*cao +
    cai*exp(2.0*vfrt))*exp(2.0*vfrt)*vffrt/((-1.0 + exp(2.0*vfrt))*(-1.0 +
    exp(2.0*vfrt)));
  const double dIK1_drk1 = sqrt(ko)*(-EK + v)*GK1*xk1;
  const double drk1_dv = -7291.75521022614*exp(0.105340777414937*v -
    0.273886021278837*ko)/((1.0 + 69220.6322106767*exp(0.105340777414937*v -
    0.273886021278837*ko))*(1.0 + 69220.6322106767*exp(0.105340777414937*v -
    0.273886021278837*ko)));
  const double dIK1_dv = sqrt(ko)*GK1*rk1*xk1 + sqrt(ko)*(-EK +
    v)*GK1*drk1_dv*xk1;
  const double dxkb_dv = 0.120085248143361*exp(-0.054525627044711*v)/((1.0 +
    2.20236345094924*exp(-0.054525627044711*v))*(1.0 +
    2.20236345094924*exp(-0.054525627044711*v)));
  const double dIKb_dv = GKb*scale_drug_IKb*xkb + GKb*scale_drug_IKb*(-EK +
    v)*dxkb_dv;
  const double dIKb_dxkb = GKb*scale_drug_IKb*(-EK + v);
  const double dIKr_drkr = 0.430331482911935*sqrt(ko)*(-EK + v)*GKr*xr;
  const double drkr_dv = -0.0238843770191263*exp(0.0333333333333333*v)/((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*((1.0 +
    0.716531310573789*exp(0.0333333333333333*v))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)))) -
    0.0277601211210461*exp(0.0133333333333333*v)/(((1.0 +
    2.08200908407846*exp(0.0133333333333333*v))*(1.0 +
    2.08200908407846*exp(0.0133333333333333*v)))*(1.0 +
    0.716531310573789*exp(0.0333333333333333*v)));
  const double dxr_dAxrf = -xrs + xrf;
  const double dIKr_dv = 0.430331482911935*sqrt(ko)*GKr*rkr*xr +
    0.430331482911935*sqrt(ko)*(-EK + v)*(dAxrf_dv*dxr_dAxrf -
    dAxrf_dv*xrs)*GKr*rkr + 0.430331482911935*sqrt(ko)*(-EK +
    v)*GKr*drkr_dv*xr;
  const double dIKr_dxr = 0.430331482911935*sqrt(ko)*(-EK + v)*GKr*rkr;
  const double dIKs_dv = GKs*KsCa*xs1*xs2;
  const double dINa_dv = GNa*scale_drug_INa*pow(m, 3.0)*((1.0 - fINap)*h*j +
    fINap*hp*jp);
  const double dINaCa_i_dJncxCa_i = 0.8*Gncx*scale_HF_Gncx*zca*allo_i;
  const double dINaCa_i_dJncxNa_i = 0.8*Gncx*scale_HF_Gncx*zna*allo_i;
  const double dINaCa_ss_dJncxCa_ss = 0.2*Gncx*scale_HF_Gncx*zca*allo_ss;
  const double dINaCa_ss_dJncxNa_ss = 0.2*Gncx*scale_HF_Gncx*zna*allo_ss;
  const double dINaK_dJnakK = Pnak*scale_HF_Pnak*zk;
  const double dINaK_dJnakNa = Pnak*scale_HF_Pnak*zna;
  const double dINaL_dv = ((1.0 - fINaLp)*hL + fINaLp*hLp)*GNaL*mL;
  const double dINab_dvffrt = PNab*scale_drug_INab*(-nao +
    exp(vfrt)*nai)/(-1.0 + exp(vfrt));
  const double dINab_dvfrt = PNab*scale_drug_INab*exp(vfrt)*nai*vffrt/(-1.0 +
    exp(vfrt)) - PNab*scale_drug_INab*(-nao +
    exp(vfrt)*nai)*exp(vfrt)*vffrt/((-1.0 + exp(vfrt))*(-1.0 + exp(vfrt)));
  const double dIto_di = Gto*scale_HF_Gto*scale_drug_Ito*(1.0 - fItop)*(-EK +
    v)*a;
  const double dIto_dip = Gto*scale_HF_Gto*scale_drug_Ito*(-EK + v)*ap*fItop;
  const double di_dAiF = -iS + iF;
  const double dip_dAiF = -iSp + iFp;
  const double dIto_dv = Gto*scale_HF_Gto*scale_drug_Ito*((1.0 - fItop)*a*i +
    ap*fItop*ip) + Gto*scale_HF_Gto*scale_drug_Ito*(-EK + v)*((1.0 -
    fItop)*(dAiF_dv*di_dAiF - dAiF_dv*iS)*a + (dAiF_dv*dip_dAiF -
    dAiF_dv*iSp)*ap*fItop);
  const double dx1_da1 = a2*a4 + a2*b3;
  const double dx4_da1 = a3*a4 + a4*b2 + b2*b3;
  const double dJnakK_da1 = -2.0*E3 + 2.0*(dE4_dx1*dx1_da1 + dE4_dx4*dx4_da1 +
    a2*a3*dE4_dx2)*b1 - 2.0*(dE3_dx1*dx1_da1 + dE3_dx4*dx4_da1 +
    a2*a3*dE3_dx2)*a1;
  const double dx2_da3 = a1*a2 + a2*b4 + b1*b4;
  const double dx3_da3 = a2*a4 + a4*b1;
  const double dJnakNa_da3 = 3.0*E1 + 3.0*(dE1_dx2*dx2_da3 + dE1_dx3*dx3_da3 +
    a1*a4*dE1_dx4)*a3 - 3.0*(dE2_dx2*dx2_da3 + dE2_dx3*dx3_da3 +
    a1*a4*dE2_dx4)*b3;
  const double dx3_i_dk3_i = (k6_i + k7_i)*k1_i + k6_i*k8_i;
  const double dx4_i_dk3_i = (k1_i + k8_i)*k5_i;
  const double dJncxNa_i_dk3pp_i = -E2_i + (dE3_i_dx3_i*dx3_i_dk3_i +
    dE3_i_dx4_i*dx4_i_dk3_i + dE3_i_dx1_i*k5_i*k7_i)*k4pp_i -
    (dE2_i_dx3_i*dx3_i_dk3_i + dE2_i_dx4_i*dx4_i_dk3_i +
    dE2_i_dx1_i*k5_i*k7_i)*k3pp_i + 3.0*(dE4_i_dx3_i*dx3_i_dk3_i +
    dE4_i_dx4_i*dx4_i_dk3_i + dE4_i_dx1_i*k5_i*k7_i)*k7_i -
    3.0*(dE1_i_dx3_i*dx3_i_dk3_i + dE1_i_dx4_i*dx4_i_dk3_i +
    dE1_i_dx1_i*k5_i*k7_i)*k8_i;
  const double dx1_i_dk4_i = (k6_i + k7_i)*k2_i;
  const double dx2_i_dk4_i = (k1_i + k8_i)*k6_i + k1_i*k7_i;
  const double dJncxNa_i_dk4pp_i = (dE3_i_dx1_i*dx1_i_dk4_i +
    dE3_i_dx2_i*dx2_i_dk4_i + dE3_i_dx4_i*k2_i*k8_i)*k4pp_i -
    (dE2_i_dx1_i*dx1_i_dk4_i + dE2_i_dx2_i*dx2_i_dk4_i +
    dE2_i_dx4_i*k2_i*k8_i)*k3pp_i + 3.0*(dE4_i_dx1_i*dx1_i_dk4_i +
    dE4_i_dx2_i*dx2_i_dk4_i + dE4_i_dx4_i*k2_i*k8_i)*k7_i -
    3.0*(dE1_i_dx1_i*dx1_i_dk4_i + dE1_i_dx2_i*dx2_i_dk4_i +
    dE1_i_dx4_i*k2_i*k8_i)*k8_i + E3_i;
  const double dx1_i_dk7_i = (k2_i + k3_i)*k5_i + k2_i*k4_i;
  const double dx2_i_dk7_i = (k4_i + k5_i)*k1_i;
  const double dJncxNa_i_dk7_i = 3.0*E4_i + (dE3_i_dx1_i*dx1_i_dk7_i +
    dE3_i_dx2_i*dx2_i_dk7_i + dE3_i_dx3_i*k1_i*k3_i)*k4pp_i -
    (dE2_i_dx1_i*dx1_i_dk7_i + dE2_i_dx2_i*dx2_i_dk7_i +
    dE2_i_dx3_i*k1_i*k3_i)*k3pp_i + 3.0*(dE4_i_dx1_i*dx1_i_dk7_i +
    dE4_i_dx2_i*dx2_i_dk7_i + dE4_i_dx3_i*k1_i*k3_i)*k7_i -
    3.0*(dE1_i_dx1_i*dx1_i_dk7_i + dE1_i_dx2_i*dx2_i_dk7_i +
    dE1_i_dx3_i*k1_i*k3_i)*k8_i;
  const double dx3_i_dk8_i = (k2_i + k3_i)*k6_i;
  const double dx4_i_dk8_i = (k4_i + k5_i)*k2_i + k3_i*k5_i;
  const double dJncxNa_i_dk8_i = -3.0*E1_i + (dE3_i_dx3_i*dx3_i_dk8_i +
    dE3_i_dx4_i*dx4_i_dk8_i + dE3_i_dx2_i*k4_i*k6_i)*k4pp_i -
    (dE2_i_dx3_i*dx3_i_dk8_i + dE2_i_dx4_i*dx4_i_dk8_i +
    dE2_i_dx2_i*k4_i*k6_i)*k3pp_i + 3.0*(dE4_i_dx3_i*dx3_i_dk8_i +
    dE4_i_dx4_i*dx4_i_dk8_i + dE4_i_dx2_i*k4_i*k6_i)*k7_i -
    3.0*(dE1_i_dx3_i*dx3_i_dk8_i + dE1_i_dx4_i*dx4_i_dk8_i +
    dE1_i_dx2_i*k4_i*k6_i)*k8_i;
  const double dx3_ss_dk3 = (k6 + k7)*k1 + k6*k8;
  const double dx4_ss_dk3 = (k1 + k8)*k5;
  const double dJncxNa_ss_dk3pp = -E2_ss + (dE3_ss_dx3_ss*dx3_ss_dk3 +
    dE3_ss_dx4_ss*dx4_ss_dk3 + dE3_ss_dx1_ss*k5*k7)*k4pp -
    (dE2_ss_dx3_ss*dx3_ss_dk3 + dE2_ss_dx4_ss*dx4_ss_dk3 +
    dE2_ss_dx1_ss*k5*k7)*k3pp + 3.0*(dE4_ss_dx3_ss*dx3_ss_dk3 +
    dE4_ss_dx4_ss*dx4_ss_dk3 + dE4_ss_dx1_ss*k5*k7)*k7 -
    3.0*(dE1_ss_dx3_ss*dx3_ss_dk3 + dE1_ss_dx4_ss*dx4_ss_dk3 +
    dE1_ss_dx1_ss*k5*k7)*k8;
  const double dx1_ss_dk4 = (k6 + k7)*k2;
  const double dx2_ss_dk4 = (k1 + k8)*k6 + k1*k7;
  const double dJncxNa_ss_dk4pp = (dE3_ss_dx1_ss*dx1_ss_dk4 +
    dE3_ss_dx2_ss*dx2_ss_dk4 + dE3_ss_dx4_ss*k2*k8)*k4pp -
    (dE2_ss_dx1_ss*dx1_ss_dk4 + dE2_ss_dx2_ss*dx2_ss_dk4 +
    dE2_ss_dx4_ss*k2*k8)*k3pp + 3.0*(dE4_ss_dx1_ss*dx1_ss_dk4 +
    dE4_ss_dx2_ss*dx2_ss_dk4 + dE4_ss_dx4_ss*k2*k8)*k7 -
    3.0*(dE1_ss_dx1_ss*dx1_ss_dk4 + dE1_ss_dx2_ss*dx2_ss_dk4 +
    dE1_ss_dx4_ss*k2*k8)*k8 + E3_ss;
  const double dx1_ss_dk7 = (k2 + k3)*k5 + k2*k4;
  const double dx2_ss_dk7 = (k4 + k5)*k1;
  const double dJncxNa_ss_dk7 = 3.0*E4_ss + (dE3_ss_dx1_ss*dx1_ss_dk7 +
    dE3_ss_dx2_ss*dx2_ss_dk7 + dE3_ss_dx3_ss*k1*k3)*k4pp -
    (dE2_ss_dx1_ss*dx1_ss_dk7 + dE2_ss_dx2_ss*dx2_ss_dk7 +
    dE2_ss_dx3_ss*k1*k3)*k3pp + 3.0*(dE4_ss_dx1_ss*dx1_ss_dk7 +
    dE4_ss_dx2_ss*dx2_ss_dk7 + dE4_ss_dx3_ss*k1*k3)*k7 -
    3.0*(dE1_ss_dx1_ss*dx1_ss_dk7 + dE1_ss_dx2_ss*dx2_ss_dk7 +
    dE1_ss_dx3_ss*k1*k3)*k8;
  const double dx3_ss_dk8 = (k2 + k3)*k6;
  const double dx4_ss_dk8 = (k4 + k5)*k2 + k3*k5;
  const double dJncxNa_ss_dk8 = -3.0*E1_ss + (dE3_ss_dx3_ss*dx3_ss_dk8 +
    dE3_ss_dx4_ss*dx4_ss_dk8 + dE3_ss_dx2_ss*k4*k6)*k4pp -
    (dE2_ss_dx3_ss*dx3_ss_dk8 + dE2_ss_dx4_ss*dx4_ss_dk8 +
    dE2_ss_dx2_ss*k4*k6)*k3pp + 3.0*(dE4_ss_dx3_ss*dx3_ss_dk8 +
    dE4_ss_dx4_ss*dx4_ss_dk8 + dE4_ss_dx2_ss*k4*k6)*k7 -
    3.0*(dE1_ss_dx3_ss*dx3_ss_dk8 + dE1_ss_dx4_ss*dx4_ss_dk8 +
    dE1_ss_dx2_ss*k4*k6)*k8;
  const double dKnai_dv =
    0.333333333333333*F*Knai0*delta*exp(0.333333333333333*F*delta*v/(R*T))/(R*T);
  const double dKnao_dv = 0.333333333333333*F*Knao0*(1.0 -
    delta)*exp(0.333333333333333*F*(1.0 - delta)*v/(R*T))/(R*T);
  const double dPhiCaK_dvffrt = 1.0*(-0.75*ko + 0.75*exp(1.0*vfrt)*kss)/(-1.0 +
    exp(1.0*vfrt));
  const double dPhiCaK_dvfrt = 0.75*exp(1.0*vfrt)*kss*vffrt/(-1.0 +
    exp(1.0*vfrt)) - 1.0*(-0.75*ko +
    0.75*exp(1.0*vfrt)*kss)*exp(1.0*vfrt)*vffrt/((-1.0 + exp(1.0*vfrt))*(-1.0 +
    exp(1.0*vfrt)));
  const double dPhiCaL_dvffrt = 4.0*(-0.341*cao + cass*exp(2.0*vfrt))/(-1.0 +
    exp(2.0*vfrt));
  const double dPhiCaL_dvfrt = 8.0*cass*exp(2.0*vfrt)*vffrt/(-1.0 +
    exp(2.0*vfrt)) - 8.0*(-0.341*cao +
    cass*exp(2.0*vfrt))*exp(2.0*vfrt)*vffrt/((-1.0 + exp(2.0*vfrt))*(-1.0 +
    exp(2.0*vfrt)));
  const double dPhiCaNa_dvffrt = 1.0*(-0.75*nao +
    0.75*exp(1.0*vfrt)*nass)/(-1.0 + exp(1.0*vfrt));
  const double dPhiCaNa_dvfrt = 0.75*exp(1.0*vfrt)*nass*vffrt/(-1.0 +
    exp(1.0*vfrt)) - 1.0*(-0.75*nao +
    0.75*exp(1.0*vfrt)*nass)*exp(1.0*vfrt)*vffrt/((-1.0 +
    exp(1.0*vfrt))*(-1.0 + exp(1.0*vfrt)));
  const double da1_dKnai = -3.0*k1p*pow(nai/Knai, 3.0)/((-1.0 + pow(1.0 +
    ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0))*Knai) + 3.0*k1p*pow(nai/Knai,
    3.0)*pow(1.0 + nai/Knai, 2.0)*nai/(((-1.0 + pow(1.0 + ki/Kki, 2.0) +
    pow(1.0 + nai/Knai, 3.0))*(-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 +
    nai/Knai, 3.0)))*(Knai*Knai));
  const double da3_dKnao = 3.0*k3p*nao*pow(ko/Kko, 2.0)*pow(1.0 + nao/Knao,
    2.0)/(((-1.0 + pow(1.0 + ko/Kko, 2.0) + pow(1.0 + nao/Knao, 3.0))*(-1.0 +
    pow(1.0 + ko/Kko, 2.0) + pow(1.0 + nao/Knao, 3.0)))*(Knao*Knao));
  const double db2_dKnao = -3.0*k2m*pow(nao/Knao, 3.0)/((-1.0 + pow(1.0 +
    ko/Kko, 2.0) + pow(1.0 + nao/Knao, 3.0))*Knao) +
    3.0*k2m*nao*pow(nao/Knao, 3.0)*pow(1.0 + nao/Knao, 2.0)/(((-1.0 + pow(1.0 +
    ko/Kko, 2.0) + pow(1.0 + nao/Knao, 3.0))*(-1.0 + pow(1.0 + ko/Kko, 2.0) +
    pow(1.0 + nao/Knao, 3.0)))*(Knao*Knao));
  const double db4_dKnai = 3.0*k4m*pow(ki/Kki, 2.0)*pow(1.0 + nai/Knai,
    2.0)*nai/(((-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai,
    3.0))*(-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai,
    3.0)))*(Knai*Knai));
  const double dfca_dAfcaf = -fcas + fcaf;
  const double dfcap_dAfcaf = -fcas + fcafp;
  const double dh1_dhna = nass/kna3;
  const double dh1_i_dhna = nai/kna3;
  const double dh2_dh1 = -hna*nass/(kna3*(h1*h1));
  const double dh2_dhna = nass/(kna3*h1) - dh1_dhna*hna*nass/(kna3*(h1*h1));
  const double dh2_i_dh1_i = -hna*nai/(kna3*(h1_i*h1_i));
  const double dh2_i_dhna = nai/(kna3*h1_i) -
    dh1_i_dhna*hna*nai/(kna3*(h1_i*h1_i));
  const double dh3_dh1 = -1.0/(h1*h1);
  const double dh3_i_dh1_i = -1.0/(h1_i*h1_i);
  const double dh7_dhna = -1.0*nao/(kna3*(hna*hna));
  const double dh7_i_dhna = -1.0*nao/(kna3*(hna*hna));
  const double dh8_dh7 = -nao/(kna3*(h7*h7)*hna);
  const double dh8_dhna = -nao/(kna3*h7*(hna*hna)) -
    nao*dh7_dhna/(kna3*(h7*h7)*hna);
  const double dh8_i_dh7_i = -nao/(kna3*(h7_i*h7_i)*hna);
  const double dh8_i_dhna = -nao/(kna3*h7_i*(hna*hna)) -
    nao*dh7_i_dhna/(kna3*(h7_i*h7_i)*hna);
  const double dh9_dh7 = -1.0/(h7*h7);
  const double dh9_i_dh7_i = -1.0/(h7_i*h7_i);
  const double dhca_dv = F*qca*exp(F*qca*v/(R*T))/(R*T);
  const double dhna_dv = F*qna*exp(F*qna*v/(R*T))/(R*T);
  const double dk4p_i_dh3_i = wca/hca;
  const double dk4p_i_dhca = -wca*h3_i/(hca*hca);
  const double dk4p_ss_dh3 = wca/hca;
  const double dk4p_ss_dhca = -wca*h3/(hca*hca);
  const double dvffrt_dv = (F*F)/(R*T);
  const double dvfrt_dv = F/(R*T);
  const double dx1_db4 = a2*b3 + b2*b3;
  const double dx2_db4 = a2*a3 + a3*b1 + b1*b2;
  const double dx3_db2 = a4*b1 + b1*b3;
  const double dx4_db2 = a1*a4 + a1*b3 + b3*b4;
  const double dv_dt_linearized = -dIK1_dv - dIKb_dv - dIKr_dv - dIKs_dv -
    dINaL_dv - dINa_dv - dIto_dv - ((((wnaca*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv) + wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 +
    wna*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE2_ss_dx3_ss
    + ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE2_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE2_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE2_ss_dx2_ss)*k2 -
    (((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE1_ss_dx3_ss +
    ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE1_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE1_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE1_ss_dx2_ss)*k1)*dINaCa_ss_dJncxCa_ss
    - ((((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE2_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE2_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE2_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE2_i_dx2_i)*k2_i -
    (((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE1_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE1_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE1_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE1_i_dx2_i)*k1_i)*dINaCa_i_dJncxCa_i
    - (dAfcaf_dv*dfca_dAfcaf - dAfcaf_dv*fcas)*dICaK_dfca -
    (dAfcaf_dv*dfca_dAfcaf - dAfcaf_dv*fcas)*dICaL_dfca -
    (dAfcaf_dv*dfca_dAfcaf - dAfcaf_dv*fcas)*dICaNa_dfca -
    (dAfcaf_dv*dfcap_dAfcaf - dAfcaf_dv*fcas)*dICaK_dfcap -
    (dAfcaf_dv*dfcap_dAfcaf - dAfcaf_dv*fcas)*dICaL_dfcap -
    (dAfcaf_dv*dfcap_dAfcaf - dAfcaf_dv*fcas)*dICaNa_dfcap - (dAiF_dv*di_dAiF
    - dAiF_dv*iS)*dIto_di - (dAiF_dv*dip_dAiF - dAiF_dv*iSp)*dIto_dip -
    (dAxrf_dv*dxr_dAxrf - dAxrf_dv*xrs)*dIKr_dxr - (dPhiCaK_dvffrt*dvffrt_dv
    + dPhiCaK_dvfrt*dvfrt_dv)*dICaK_dPhiCaK - (dPhiCaL_dvffrt*dvffrt_dv +
    dPhiCaL_dvfrt*dvfrt_dv)*dICaL_dPhiCaL - (dPhiCaNa_dvffrt*dvffrt_dv +
    dPhiCaNa_dvfrt*dvfrt_dv)*dICaNa_dPhiCaNa -
    (2.0*((dKnao_dv*da3_dKnao*dx3_da3 + dKnao_dv*db2_dKnao*dx3_db2)*dE4_dx3 +
    (dKnai_dv*da1_dKnai*dx1_da1 + dKnai_dv*db4_dKnai*dx1_db4 +
    b3*b4*dKnao_dv*db2_dKnao)*dE4_dx1 + (dKnai_dv*da1_dKnai*dx4_da1 +
    dKnao_dv*db2_dKnao*dx4_db2 + a1*a4*dKnao_dv*da3_dKnao +
    b2*b3*dKnai_dv*db4_dKnai)*dE4_dx4 + (dKnai_dv*db4_dKnai*dx2_db4 +
    dKnao_dv*da3_dKnao*dx2_da3 + a2*a3*dKnai_dv*da1_dKnai +
    b1*b4*dKnao_dv*db2_dKnao)*dE4_dx2)*b1 - 2.0*((dKnao_dv*da3_dKnao*dx3_da3 +
    dKnao_dv*db2_dKnao*dx3_db2)*dE3_dx3 + (dKnai_dv*da1_dKnai*dx1_da1 +
    dKnai_dv*db4_dKnai*dx1_db4 + b3*b4*dKnao_dv*db2_dKnao)*dE3_dx1 +
    (dKnai_dv*da1_dKnai*dx4_da1 + dKnao_dv*db2_dKnao*dx4_db2 +
    a1*a4*dKnao_dv*da3_dKnao + b2*b3*dKnai_dv*db4_dKnai)*dE3_dx4 +
    (dKnai_dv*db4_dKnai*dx2_db4 + dKnao_dv*da3_dKnao*dx2_da3 +
    a2*a3*dKnai_dv*da1_dKnai + b1*b4*dKnao_dv*db2_dKnao)*dE3_dx2)*a1 +
    dJnakK_da1*dKnai_dv*da1_dKnai)*dINaK_dJnakK -
    (3.0*((dKnao_dv*da3_dKnao*dx3_da3 + dKnao_dv*db2_dKnao*dx3_db2)*dE1_dx3 +
    (dKnai_dv*da1_dKnai*dx1_da1 + dKnai_dv*db4_dKnai*dx1_db4 +
    b3*b4*dKnao_dv*db2_dKnao)*dE1_dx1 + (dKnai_dv*da1_dKnai*dx4_da1 +
    dKnao_dv*db2_dKnao*dx4_db2 + a1*a4*dKnao_dv*da3_dKnao +
    b2*b3*dKnai_dv*db4_dKnai)*dE1_dx4 + (dKnai_dv*db4_dKnai*dx2_db4 +
    dKnao_dv*da3_dKnao*dx2_da3 + a2*a3*dKnai_dv*da1_dKnai +
    b1*b4*dKnao_dv*db2_dKnao)*dE1_dx2)*a3 - 3.0*((dKnao_dv*da3_dKnao*dx3_da3 +
    dKnao_dv*db2_dKnao*dx3_db2)*dE2_dx3 + (dKnai_dv*da1_dKnai*dx1_da1 +
    dKnai_dv*db4_dKnai*dx1_db4 + b3*b4*dKnao_dv*db2_dKnao)*dE2_dx1 +
    (dKnai_dv*da1_dKnai*dx4_da1 + dKnao_dv*db2_dKnao*dx4_db2 +
    a1*a4*dKnao_dv*da3_dKnao + b2*b3*dKnai_dv*db4_dKnai)*dE2_dx4 +
    (dKnai_dv*db4_dKnai*dx2_db4 + dKnao_dv*da3_dKnao*dx2_da3 +
    a2*a3*dKnai_dv*da1_dKnai + b1*b4*dKnao_dv*db2_dKnao)*dE2_dx2)*b3 +
    dJnakNa_da3*dKnao_dv*da3_dKnao)*dINaK_dJnakNa -
    ((((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE3_ss_dx3_ss +
    ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE3_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE3_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE3_ss_dx2_ss)*k4pp -
    (((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE2_ss_dx3_ss +
    ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE2_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE2_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE2_ss_dx2_ss)*k3pp +
    3.0*(((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE4_ss_dx3_ss +
    ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE4_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE4_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE4_ss_dx2_ss)*k7 -
    3.0*(((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx3_ss_dk3 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx3_ss_dk8*h11 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*h5*k1*k3)*dE1_ss_dx3_ss +
    ((wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*dx4_ss_dk3 + (wnaca*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv) + dhca_dv*dk4p_ss_dhca +
    dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*k2*k8 + wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dx4_ss_dk8*h11)*dE1_ss_dx4_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx1_ss_dk4 +
    (wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv) +
    wca*dh7_dhna*dh9_dh7*dhna_dv)*k5*k7 + wna*(dh2_dhna*dhna_dv +
    dh1_dhna*dh2_dh1*dhna_dv)*dx1_ss_dk7*h5)*dE1_ss_dx1_ss +
    ((wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv) +
    dhca_dv*dk4p_ss_dhca + dh1_dhna*dh3_dh1*dhna_dv*dk4p_ss_dh3)*dx2_ss_dk4 +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dx2_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*h11*k4*k6)*dE1_ss_dx2_ss)*k8 +
    wnaca*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dJncxNa_ss_dk4pp +
    wnaca*(dh8_dhna*dhna_dv + dh7_dhna*dh8_dh7*dhna_dv)*dJncxNa_ss_dk3pp +
    wna*(dh2_dhna*dhna_dv + dh1_dhna*dh2_dh1*dhna_dv)*dJncxNa_ss_dk7*h5 +
    wna*(dh8_dhna*dhna_dv +
    dh7_dhna*dh8_dh7*dhna_dv)*dJncxNa_ss_dk8*h11)*dINaCa_ss_dJncxNa_ss -
    ((((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE3_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE3_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE3_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE3_i_dx2_i)*k4pp_i -
    (((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE2_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE2_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE2_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE2_i_dx2_i)*k3pp_i +
    3.0*(((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE4_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE4_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE4_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE4_i_dx2_i)*k7_i -
    3.0*(((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx3_i_dk3_i + wna*(dh8_i_dhna*dhna_dv
    + dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx3_i_dk8_i*h11_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*h5_i*k1_i*k3_i)*dE1_i_dx3_i +
    ((wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*dx4_i_dk3_i +
    (wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*k2_i*k8_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dx4_i_dk8_i*h11_i)*dE1_i_dx4_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wnaca*(dh8_i_dhna*dhna_dv + dh7_i_dhna*dh8_i_dh7_i*dhna_dv) +
    wca*dh7_i_dhna*dh9_i_dh7_i*dhna_dv)*k5_i*k7_i + wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx1_i_dk7_i*h5_i)*dE1_i_dx1_i +
    ((wnaca*(dh2_i_dhna*dhna_dv + dh1_i_dhna*dh2_i_dh1_i*dhna_dv) +
    dhca_dv*dk4p_i_dhca +
    dh1_i_dhna*dh3_i_dh1_i*dhna_dv*dk4p_i_dh3_i)*dx2_i_dk4_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dx2_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*h11_i*k4_i*k6_i)*dE1_i_dx2_i)*k8_i +
    wnaca*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dJncxNa_i_dk4pp_i +
    wnaca*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dJncxNa_i_dk3pp_i +
    wna*(dh2_i_dhna*dhna_dv +
    dh1_i_dhna*dh2_i_dh1_i*dhna_dv)*dJncxNa_i_dk7_i*h5_i +
    wna*(dh8_i_dhna*dhna_dv +
    dh7_i_dhna*dh8_i_dh7_i*dhna_dv)*dJncxNa_i_dk8_i*h11_i)*dINaCa_i_dJncxNa_i
    - dICab_dvffrt*dvffrt_dv - dICab_dvfrt*dvfrt_dv - dIK1_drk1*drk1_dv -
    dIKb_dxkb*dxkb_dv - dIKr_drkr*drkr_dv - dINab_dvffrt*dvffrt_dv -
    dINab_dvfrt*dvfrt_dv;
  states[STATE_v] = (fabs(dv_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dv_dt_linearized))*dv_dt/dv_dt_linearized : dt*dv_dt) + v;

  // Expressions for the diffusion fluxes component
  const double JdiffNa = 0.5*nass - 0.5*nai;
  const double JdiffK = 0.5*kss - 0.5*ki;
  const double Jdiff = 5.0*cass - 5.0*cai;

  // Expressions for the ryanodione receptor component
  const double a_rel = 0.5*bt;
  const double Jrel_inf = -ICaL*a_rel/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_rel_tmp = bt/(1.0 + 0.0123/cajsr);
  const double tau_rel = (tau_rel_tmp < 0.001 ? 0.001 : tau_rel_tmp);
  const double dJrelnp_dt = (-Jrelnp + Jrel_inf)/tau_rel;
  const double dJrelnp_dt_linearized = -1./tau_rel;
  states[STATE_Jrelnp] =
    (expm1(dt*dJrelnp_dt_linearized))*dJrelnp_dt/dJrelnp_dt_linearized +
    Jrelnp;
  const double btp = 1.25*bt;
  const double a_relp = 0.5*btp;
  const double Jrel_infp = -ICaL*a_relp/(1.0 +
    25.62890625*pow(scale_HF_Jrel_inf/cajsr, 8.0));
  const double tau_relp_tmp = btp/(1.0 + 0.0123/cajsr);
  const double tau_relp = (tau_relp_tmp < 0.001 ? 0.001 : tau_relp_tmp);
  const double dJrelp_dt = (-Jrelp + Jrel_infp)/tau_relp;
  const double dJrelp_dt_linearized = -1./tau_relp;
  states[STATE_Jrelp] =
    (expm1(dt*dJrelp_dt_linearized))*dJrelp_dt/dJrelp_dt_linearized + Jrelp;
  const double fJrelp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jrel = (1.0 - fJrelp)*Jrelnp + Jrelp*fJrelp;

  // Expressions for the calcium buffers component
  const double Jupnp = 0.004375*cai/(0.00092 + cai);
  const double Jupp = 0.01203125*cai/(0.00075 + cai);
  const double fJupp = 1.0/(1.0 + KmCaMK/CaMKa);
  const double Jleak = 0.0002625*scale_HF_Jleak*cansr;
  const double Jup = -Jleak + (1.0 - fJupp)*Jupnp + scale_HF_Jup*Jupp*fJupp;
  const double Jtr = 0.01*cansr - 0.01*cajsr;

  // Expressions for the intracellular concentrations component
  const double dnai_dt = JdiffNa*vss/vmyo + (-INa - INaL - INab -
    Isac_P_ns/3. - 3.0*INaCa_i - 3.0*INaK)*Acap/(F*vmyo);
  const double dENa_dnai = -R*T/(F*nai);
  const double dINa_dENa = -GNa*scale_drug_INa*pow(m, 3.0)*((1.0 - fINap)*h*j
    + fINap*hp*jp);
  const double dINaL_dENa = -((1.0 - fINaLp)*hL + fINaLp*hLp)*GNaL*mL;
  const double dINab_dnai = PNab*scale_drug_INab*exp(vfrt)*vffrt/(-1.0 +
    exp(vfrt));
  const double dx1_db3 = a1*a2 + a2*b4 + b2*b4;
  const double dx4_db3 = a1*b2 + b2*b4;
  const double dJnakNa_db3 = -3.0*E2 + 3.0*(dE1_dx1*dx1_db3 + dE1_dx4*dx4_db3 +
    b1*b2*dE1_dx3)*a3 - 3.0*(dE2_dx1*dx1_db3 + dE2_dx4*dx4_db3 +
    b1*b2*dE2_dx3)*b3;
  const double dP_dnai = -eP/(Knap*((1.0 + H/Khp + nai/Knap + ki/Kxkur)*(1.0 +
    H/Khp + nai/Knap + ki/Kxkur)));
  const double da1_dnai = 3.0*k1p*pow(nai/Knai, 3.0)/((-1.0 + pow(1.0 +
    ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0))*nai) - 3.0*k1p*pow(nai/Knai,
    3.0)*pow(1.0 + nai/Knai, 2.0)/(((-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 +
    nai/Knai, 3.0))*(-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai,
    3.0)))*Knai);
  const double db3_dP = H*k3m/(1.0 + MgATP/Kmgatp);
  const double db4_dnai = -3.0*k4m*pow(ki/Kki, 2.0)*pow(1.0 + nai/Knai,
    2.0)/(((-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0))*(-1.0 +
    pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0)))*Knai);
  const double dh1_i_dnai = (1. + hna)/kna3;
  const double dh2_i_dnai = hna/(kna3*h1_i) -
    dh1_i_dnai*hna*nai/(kna3*(h1_i*h1_i));
  const double dh4_i_dnai = (1. + nai/kna2)/kna1 + nai/(kna1*kna2);
  const double dh5_i_dh4_i = -(nai*nai)/(kna1*kna2*(h4_i*h4_i));
  const double dh5_i_dnai = 2.*nai/(kna1*kna2*h4_i) -
    (nai*nai)*dh4_i_dnai/(kna1*kna2*(h4_i*h4_i));
  const double dh6_i_dh4_i = -1.0/(h4_i*h4_i);
  const double dx2_i_dk6_i = (k1_i + k8_i)*k4_i;
  const double dx3_i_dk6_i = (k2_i + k3_i)*k8_i + k1_i*k3_i;
  const double dnai_dt_linearized = -0.5*vss/vmyo + (-dINab_dnai -
    dENa_dnai*dINaL_dENa - dENa_dnai*dINa_dENa -
    3.0*((((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE2_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE2_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE2_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE2_i_dx4_i*k2_i*k8_i)*k2_i -
    (((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE1_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE1_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE1_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE1_i_dx4_i*k2_i*k8_i)*k1_i)*dINaCa_i_dJncxCa_i
    - 3.0*(dJnakK_da1*da1_dnai + 2.0*((db4_dnai*dx2_db4 +
    a2*a3*da1_dnai)*dE4_dx2 + (da1_dnai*dx1_da1 + db4_dnai*dx1_db4 +
    dP_dnai*db3_dP*dx1_db3)*dE4_dx1 + (da1_dnai*dx4_da1 + b2*b3*db4_dnai +
    dP_dnai*db3_dP*dx4_db3)*dE4_dx4 + b1*b2*dE4_dx3*dP_dnai*db3_dP)*b1 -
    2.0*((db4_dnai*dx2_db4 + a2*a3*da1_dnai)*dE3_dx2 + (da1_dnai*dx1_da1 +
    db4_dnai*dx1_db4 + dP_dnai*db3_dP*dx1_db3)*dE3_dx1 + (da1_dnai*dx4_da1 +
    b2*b3*db4_dnai + dP_dnai*db3_dP*dx4_db3)*dE3_dx4 +
    b1*b2*dE3_dx3*dP_dnai*db3_dP)*a1)*dINaK_dJnakK -
    3.0*(3.0*((db4_dnai*dx2_db4 + a2*a3*da1_dnai)*dE1_dx2 + (da1_dnai*dx1_da1 +
    db4_dnai*dx1_db4 + dP_dnai*db3_dP*dx1_db3)*dE1_dx1 + (da1_dnai*dx4_da1 +
    b2*b3*db4_dnai + dP_dnai*db3_dP*dx4_db3)*dE1_dx4 +
    b1*b2*dE1_dx3*dP_dnai*db3_dP)*a3 - 3.0*((db4_dnai*dx2_db4 +
    a2*a3*da1_dnai)*dE2_dx2 + (da1_dnai*dx1_da1 + db4_dnai*dx1_db4 +
    dP_dnai*db3_dP*dx1_db3)*dE2_dx1 + (da1_dnai*dx4_da1 + b2*b3*db4_dnai +
    dP_dnai*db3_dP*dx4_db3)*dE2_dx4 + b1*b2*dE2_dx3*dP_dnai*db3_dP)*b3 +
    dJnakNa_db3*dP_dnai*db3_dP)*dINaK_dJnakNa -
    3.0*((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dJncxNa_i_dk7_i +
    (((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE3_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE3_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE3_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE3_i_dx4_i*k2_i*k8_i)*k4pp_i -
    (((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE2_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE2_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE2_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE2_i_dx4_i*k2_i*k8_i)*k3pp_i +
    3.0*(((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE4_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE4_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE4_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE4_i_dx4_i*k2_i*k8_i)*k7_i -
    3.0*(((wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*k1_i*k3_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx3_i_dk6_i)*dE1_i_dx3_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx1_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx1_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*k2_i*k4_i)*dE1_i_dx1_i +
    ((wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dx2_i_dk4_i +
    (wna*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai)*h5_i +
    wna*(dh4_i_dnai*dh5_i_dh4_i + dh5_i_dnai)*h2_i)*dx2_i_dk7_i +
    kcaon*cai*dh4_i_dnai*dh6_i_dh4_i*dx2_i_dk6_i)*dE1_i_dx2_i +
    (wnaca*(dh1_i_dnai*dh2_i_dh1_i + dh2_i_dnai) +
    dh1_i_dnai*dh3_i_dh1_i*dk4p_i_dh3_i)*dE1_i_dx4_i*k2_i*k8_i)*k8_i +
    wnaca*(dh1_i_dnai*dh2_i_dh1_i +
    dh2_i_dnai)*dJncxNa_i_dk4pp_i)*dINaCa_i_dJncxNa_i)*Acap/(F*vmyo);
  states[STATE_nai] = (fabs(dnai_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dnai_dt_linearized))*dnai_dt/dnai_dt_linearized : dt*dnai_dt) +
    nai;
  const double dnass_dt = -JdiffNa + (-ICaNa - 3.0*INaCa_ss)*Acap/(F*vss);
  const double dPhiCaNa_dnass = 0.75*exp(1.0*vfrt)*vffrt/(-1.0 +
    exp(1.0*vfrt));
  const double dh1_dnass = (1. + hna)/kna3;
  const double dh2_dnass = hna/(kna3*h1) - dh1_dnass*hna*nass/(kna3*(h1*h1));
  const double dh4_dnass = (1. + nass/kna2)/kna1 + nass/(kna1*kna2);
  const double dh5_dh4 = -(nass*nass)/(kna1*kna2*(h4*h4));
  const double dh5_dnass = 2.*nass/(kna1*kna2*h4) -
    (nass*nass)*dh4_dnass/(kna1*kna2*(h4*h4));
  const double dh6_dh4 = -1.0/(h4*h4);
  const double dx2_ss_dk6 = (k1 + k8)*k4;
  const double dx3_ss_dk6 = (k2 + k3)*k8 + k1*k3;
  const double dnass_dt_linearized = -0.5 + (-dICaNa_dPhiCaNa*dPhiCaNa_dnass
    - 3.0*((((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE2_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE2_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE2_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE2_ss_dx4_ss*k2*k8)*k2 -
    (((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE1_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE1_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE1_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE1_ss_dx4_ss*k2*k8)*k1)*dINaCa_ss_dJncxCa_ss
    - 3.0*((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*dJncxNa_ss_dk7 + (((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 +
    wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE3_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE3_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE3_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE3_ss_dx4_ss*k2*k8)*k4pp -
    (((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE2_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE2_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE2_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE2_ss_dx4_ss*k2*k8)*k3pp +
    3.0*(((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE4_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE4_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE4_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE4_ss_dx4_ss*k2*k8)*k7 -
    3.0*(((wna*(dh1_dnass*dh2_dh1 + dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 +
    dh5_dnass)*h2)*k1*k3 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx3_ss_dk6)*dE1_ss_dx3_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx1_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx1_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*k2*k4)*dE1_ss_dx1_ss +
    ((wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dx2_ss_dk4 + (wna*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*h5 + wna*(dh4_dnass*dh5_dh4 + dh5_dnass)*h2)*dx2_ss_dk7 +
    kcaon*cass*dh4_dnass*dh6_dh4*dx2_ss_dk6)*dE1_ss_dx2_ss +
    (wnaca*(dh1_dnass*dh2_dh1 + dh2_dnass) +
    dh1_dnass*dh3_dh1*dk4p_ss_dh3)*dE1_ss_dx4_ss*k2*k8)*k8 +
    wnaca*(dh1_dnass*dh2_dh1 +
    dh2_dnass)*dJncxNa_ss_dk4pp)*dINaCa_ss_dJncxNa_ss)*Acap/(F*vss);
  states[STATE_nass] = (fabs(dnass_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dnass_dt_linearized))*dnass_dt/dnass_dt_linearized :
    dt*dnass_dt) + nass;
  const double dki_dt = JdiffK*vss/vmyo + (-Isac_P_k - IK1 - IKb - IKr - IKs
    - Istim - Ito - Isac_P_ns/3. + 2.0*INaK)*Acap/(F*vmyo);
  const double dEK_dki = -R*T/(F*ki);
  const double dEKs_dki = -R*T/(F*(PKNa*nai + ki));
  const double dIK1_dEK = -sqrt(ko)*GK1*rk1*xk1;
  const double dIKb_dEK = -GKb*scale_drug_IKb*xkb;
  const double dIKr_dEK = -0.430331482911935*sqrt(ko)*GKr*rkr*xr;
  const double dIKs_dEKs = -GKs*KsCa*xs1*xs2;
  const double dIto_dEK = -Gto*scale_HF_Gto*scale_drug_Ito*((1.0 - fItop)*a*i
    + ap*fItop*ip);
  const double dP_dki = -eP/(Kxkur*((1.0 + H/Khp + nai/Knap + ki/Kxkur)*(1.0 +
    H/Khp + nai/Knap + ki/Kxkur)));
  const double da1_dki = -2.0*k1p*pow(nai/Knai, 3.0)*pow(1.0 + ki/Kki,
    1.0)/(Kki*((-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai,
    3.0))*(-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0))));
  const double db4_dki = 2.0*k4m*pow(ki/Kki, 2.0)/((-1.0 + pow(1.0 + ki/Kki,
    2.0) + pow(1.0 + nai/Knai, 3.0))*ki) - 2.0*k4m*pow(ki/Kki, 2.0)*pow(1.0 +
    ki/Kki, 1.0)/(Kki*((-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai,
    3.0))*(-1.0 + pow(1.0 + ki/Kki, 2.0) + pow(1.0 + nai/Knai, 3.0))));
  const double dki_dt_linearized = -0.5*vss/vmyo + (-dEK_dki*dIK1_dEK -
    dEK_dki*dIKb_dEK - dEK_dki*dIKr_dEK - dEK_dki*dIto_dEK -
    dEKs_dki*dIKs_dEKs + 2.0*(dJnakK_da1*da1_dki + 2.0*((db4_dki*dx2_db4 +
    a2*a3*da1_dki)*dE4_dx2 + (da1_dki*dx1_da1 + db4_dki*dx1_db4 +
    dP_dki*db3_dP*dx1_db3)*dE4_dx1 + (da1_dki*dx4_da1 + b2*b3*db4_dki +
    dP_dki*db3_dP*dx4_db3)*dE4_dx4 + b1*b2*dE4_dx3*dP_dki*db3_dP)*b1 -
    2.0*((db4_dki*dx2_db4 + a2*a3*da1_dki)*dE3_dx2 + (da1_dki*dx1_da1 +
    db4_dki*dx1_db4 + dP_dki*db3_dP*dx1_db3)*dE3_dx1 + (da1_dki*dx4_da1 +
    b2*b3*db4_dki + dP_dki*db3_dP*dx4_db3)*dE3_dx4 +
    b1*b2*dE3_dx3*dP_dki*db3_dP)*a1)*dINaK_dJnakK +
    2.0*(3.0*((db4_dki*dx2_db4 + a2*a3*da1_dki)*dE1_dx2 + (da1_dki*dx1_da1 +
    db4_dki*dx1_db4 + dP_dki*db3_dP*dx1_db3)*dE1_dx1 + (da1_dki*dx4_da1 +
    b2*b3*db4_dki + dP_dki*db3_dP*dx4_db3)*dE1_dx4 +
    b1*b2*dE1_dx3*dP_dki*db3_dP)*a3 - 3.0*((db4_dki*dx2_db4 +
    a2*a3*da1_dki)*dE2_dx2 + (da1_dki*dx1_da1 + db4_dki*dx1_db4 +
    dP_dki*db3_dP*dx1_db3)*dE2_dx1 + (da1_dki*dx4_da1 + b2*b3*db4_dki +
    dP_dki*db3_dP*dx4_db3)*dE2_dx4 + b1*b2*dE2_dx3*dP_dki*db3_dP)*b3 +
    dJnakNa_db3*dP_dki*db3_dP)*dINaK_dJnakNa)*Acap/(F*vmyo);
  states[STATE_ki] = (fabs(dki_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dki_dt_linearized))*dki_dt/dki_dt_linearized : dt*dki_dt) + ki;
  const double dkss_dt = -JdiffK - Acap*ICaK/(F*vss);
  const double dPhiCaK_dkss = 0.75*exp(1.0*vfrt)*vffrt/(-1.0 + exp(1.0*vfrt));
  const double dkss_dt_linearized = -0.5 -
    Acap*dICaK_dPhiCaK*dPhiCaK_dkss/(F*vss);
  states[STATE_kss] = (fabs(dkss_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dkss_dt_linearized))*dkss_dt/dkss_dt_linearized : dt*dkss_dt) +
    kss;
  const double Bcass = 1.0/(1.0 + BSLmax*KmBSL*pow(KmBSL + cass, -2.0) +
    BSRmax*KmBSR*pow(KmBSR + cass, -2.0));
  const double dcass_dt = (-Jdiff + Jrel*vjsr/vss + 0.5*(-ICaL +
    2.0*INaCa_ss)*Acap/(F*vss))*Bcass;
  const double dBcass_dcass = 1.0*(2.0*BSLmax*KmBSL*pow(KmBSL + cass, -3.0) +
    2.0*BSRmax*KmBSR*pow(KmBSR + cass, -3.0))/((1.0 + BSLmax*KmBSL*pow(KmBSL
    + cass, -2.0) + BSRmax*KmBSR*pow(KmBSR + cass, -2.0))*(1.0 +
    BSLmax*KmBSL*pow(KmBSL + cass, -2.0) + BSRmax*KmBSR*pow(KmBSR + cass,
    -2.0)));
  const double dCaMKb_dcass = CaMKo*KmCaM*(1.0 - CaMKt)/(((1.0 +
    KmCaM/cass)*(1.0 + KmCaM/cass))*(cass*cass));
  const double dICaL_dfICaLp = ((1.0 - nca)*fp + fcap*jca*nca)*PCap*PhiCaL*d
    - ((1.0 - nca)*f + fca*jca*nca)*PCa*PhiCaL*d;
  const double dINaCa_ss_dallo_ss = 0.2*Gncx*scale_HF_Gncx*(zca*JncxCa_ss +
    zna*JncxNa_ss);
  const double dJrel_dfJrelp = -Jrelnp + Jrelp;
  const double dPhiCaL_dcass = 4.0*exp(2.0*vfrt)*vffrt/(-1.0 + exp(2.0*vfrt));
  const double dallo_ss_dcass = 2.0*pow(KmCaAct/cass, 2.0)/(((1.0 +
    pow(KmCaAct/cass, 2.0))*(1.0 + pow(KmCaAct/cass, 2.0)))*cass);
  const double dfICaLp_dCaMKa = 1.0*KmCaMK/(((1.0 + KmCaMK/CaMKa)*(1.0 +
    KmCaMK/CaMKa))*(CaMKa*CaMKa));
  const double dfJrelp_dCaMKa = 1.0*KmCaMK/(((1.0 + KmCaMK/CaMKa)*(1.0 +
    KmCaMK/CaMKa))*(CaMKa*CaMKa));
  const double dcass_dt_linearized = (-5.0 +
    0.5*(-dICaL_dPhiCaL*dPhiCaL_dcass +
    2.0*((kcaon*dE2_ss_dx2_ss*dx2_ss_dk6*h6 +
    kcaon*dE2_ss_dx3_ss*dx3_ss_dk6*h6 + kcaon*dE2_ss_dx1_ss*h6*k2*k4)*k2 -
    (kcaon*dE1_ss_dx2_ss*dx2_ss_dk6*h6 + kcaon*dE1_ss_dx3_ss*dx3_ss_dk6*h6 +
    kcaon*dE1_ss_dx1_ss*h6*k2*k4)*k1)*dINaCa_ss_dJncxCa_ss +
    2.0*((kcaon*dE3_ss_dx2_ss*dx2_ss_dk6*h6 +
    kcaon*dE3_ss_dx3_ss*dx3_ss_dk6*h6 + kcaon*dE3_ss_dx1_ss*h6*k2*k4)*k4pp -
    (kcaon*dE2_ss_dx2_ss*dx2_ss_dk6*h6 + kcaon*dE2_ss_dx3_ss*dx3_ss_dk6*h6 +
    kcaon*dE2_ss_dx1_ss*h6*k2*k4)*k3pp +
    3.0*(kcaon*dE4_ss_dx2_ss*dx2_ss_dk6*h6 +
    kcaon*dE4_ss_dx3_ss*dx3_ss_dk6*h6 + kcaon*dE4_ss_dx1_ss*h6*k2*k4)*k7 -
    3.0*(kcaon*dE1_ss_dx2_ss*dx2_ss_dk6*h6 +
    kcaon*dE1_ss_dx3_ss*dx3_ss_dk6*h6 +
    kcaon*dE1_ss_dx1_ss*h6*k2*k4)*k8)*dINaCa_ss_dJncxNa_ss +
    2.0*dINaCa_ss_dallo_ss*dallo_ss_dcass -
    scale_HF_CaMKa*dCaMKb_dcass*dICaL_dfICaLp*dfICaLp_dCaMKa)*Acap/(F*vss) +
    scale_HF_CaMKa*dCaMKb_dcass*dJrel_dfJrelp*dfJrelp_dCaMKa*vjsr/vss)*Bcass
    + (-Jdiff + Jrel*vjsr/vss + 0.5*(-ICaL +
    2.0*INaCa_ss)*Acap/(F*vss))*dBcass_dcass;
  states[STATE_cass] = (fabs(dcass_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dcass_dt_linearized))*dcass_dt/dcass_dt_linearized :
    dt*dcass_dt) + cass;
  const double dcansr_dt = -Jtr*vjsr/vnsr + Jup;
  const double dcansr_dt_linearized = -0.0002625*scale_HF_Jleak -
    0.01*vjsr/vnsr;
  states[STATE_cansr] = (fabs(dcansr_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dcansr_dt_linearized))*dcansr_dt/dcansr_dt_linearized :
    dt*dcansr_dt) + cansr;
  const double Bcajsr = 1.0/(1.0 + csqnmax*kmcsqn*pow(kmcsqn + cajsr, -2.0));
  const double dcajsr_dt = (-Jrel + Jtr)*Bcajsr;
  const double dBcajsr_dcajsr = 2.0*csqnmax*kmcsqn*pow(kmcsqn + cajsr,
    -3.0)/((1.0 + csqnmax*kmcsqn*pow(kmcsqn + cajsr, -2.0))*(1.0 +
    csqnmax*kmcsqn*pow(kmcsqn + cajsr, -2.0)));
  const double dcajsr_dt_linearized = -0.01*Bcajsr + (-Jrel +
    Jtr)*dBcajsr_dcajsr;
  states[STATE_cajsr] = (fabs(dcajsr_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dcajsr_dt_linearized))*dcajsr_dt/dcajsr_dt_linearized :
    dt*dcajsr_dt) + cajsr;

  // Expressions for the mechanics component
  const double kwu = -kws + kuw*(-1. + 1.0/rw);
  const double ksu = kws*rw*(-1. + 1.0/rs);
  const double Aw = Tot_A*rs/(rs + rw*(1. - rs));
  const double As = Aw;
  const double cw = kuw*phi*(1. - rw)/rw;
  const double cs = kws*phi*rw*(1. - rs)/rs;
  const double lambda_min12 = (lmbda < 1.2 ? lmbda : 1.2);
  const double XU = 1. - TmB - XS - XW;
  const double gammawu = gammaw*fabs(Zetaw);
  const double gammasu = gammas*(Zetas*(Zetas > 0.) > (-1. - Zetas)*(Zetas <
    -1.) ? Zetas*(Zetas > 0.) : (-1. - Zetas)*(Zetas < -1.));
  const double dXS_dt = kws*XW - XS*gammasu - XS*ksu;
  const double dXS_dt_linearized = -gammasu - ksu;
  states[STATE_XS] = (fabs(dXS_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dXS_dt_linearized))*dXS_dt/dXS_dt_linearized : dt*dXS_dt) + XS;
  const double dXW_dt = kuw*XU - kws*XW - XW*gammawu - XW*kwu;
  const double dXW_dt_linearized = -kuw - kws - gammawu - kwu;
  states[STATE_XW] = (fabs(dXW_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dXW_dt_linearized))*dXW_dt/dXW_dt_linearized : dt*dXW_dt) + XW;
  const double cat50 = scale_HF_cat50_ref*(cat50_ref + Beta1*(-1. +
    lambda_min12));
  const double dCaTrpn_dt = ktrpn*(-CaTrpn + pow(1000.*cai/cat50, ntrpn)*(1.
    - CaTrpn));
  const double dCaTrpn_dt_linearized = ktrpn*(-1. - pow(1000.*cai/cat50,
    ntrpn));
  states[STATE_CaTrpn] = CaTrpn + (fabs(dCaTrpn_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCaTrpn_dt_linearized))*dCaTrpn_dt/dCaTrpn_dt_linearized :
    dt*dCaTrpn_dt);
  const double kb = ku*pow(Trpn50, ntm)/(1. - rs - rw*(1. - rs));
  const double dTmB_dt = (pow(CaTrpn, -ntm/2.) < 100. ? pow(CaTrpn, -ntm/2.)
    : 100.)*XU*kb - ku*pow(CaTrpn, ntm/2.)*TmB;
  const double dTmB_dt_linearized = -ku*pow(CaTrpn, ntm/2.) - (pow(CaTrpn,
    -ntm/2.) < 100. ? pow(CaTrpn, -ntm/2.) : 100.)*kb;
  states[STATE_TmB] = (fabs(dTmB_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dTmB_dt_linearized))*dTmB_dt/dTmB_dt_linearized : dt*dTmB_dt) +
    TmB;
  const double dZetas_dt = dLambda*As - Zetas*cs;
  const double dZetas_dt_linearized = -cs;
  states[STATE_Zetas] = (fabs(dZetas_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dZetas_dt_linearized))*dZetas_dt/dZetas_dt_linearized :
    dt*dZetas_dt) + Zetas;
  const double dZetaw_dt = dLambda*Aw - Zetaw*cw;
  const double dZetaw_dt_linearized = -cw;
  states[STATE_Zetaw] = (fabs(dZetaw_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dZetaw_dt_linearized))*dZetaw_dt/dZetaw_dt_linearized :
    dt*dZetaw_dt) + Zetaw;
  const double C = -1. + lambda_min12;
  const double dCd = -Cd + C;
  const double eta = (dCd < 0. ? etas : etal);
  const double dCd_dt = p_k*(-Cd + C)/eta;
  const double dCd_dt_linearized = -p_k/eta;
  states[STATE_Cd] = Cd + (fabs(dCd_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCd_dt_linearized))*dCd_dt/dCd_dt_linearized : dt*dCd_dt);
  const double Bcai = 1.0/(1.0 + cmdnmax*kmcmdn*pow(kmcmdn + cai, -2.0));
  const double J_TRPN = trpnmax*dCaTrpn_dt;
  const double dcai_dt = (-J_TRPN + Jdiff*vss/vmyo - Jup*vnsr/vmyo +
    0.5*(-ICab - IpCa - Isac_P_ns/3. + 2.0*INaCa_i)*Acap/(F*vmyo))*Bcai;
  const double dBcai_dcai = 2.0*cmdnmax*kmcmdn*pow(kmcmdn + cai, -3.0)/((1.0 +
    cmdnmax*kmcmdn*pow(kmcmdn + cai, -2.0))*(1.0 + cmdnmax*kmcmdn*pow(kmcmdn
    + cai, -2.0)));
  const double dICab_dcai =
    4.0*PCab*scale_drug_ICab*exp(2.0*vfrt)*vffrt/(-1.0 + exp(2.0*vfrt));
  const double dINaCa_i_dallo_i = 0.8*Gncx*scale_HF_Gncx*(zca*JncxCa_i +
    zna*JncxNa_i);
  const double dIpCa_dcai = GpCa*scale_drug_IpCa/(0.0005 + cai) -
    GpCa*scale_drug_IpCa*cai/((0.0005 + cai)*(0.0005 + cai));
  const double dJup_dJupnp = 1.0 - fJupp;
  const double dJupnp_dcai = 0.004375/(0.00092 + cai) -
    0.004375*cai/((0.00092 + cai)*(0.00092 + cai));
  const double dJupp_dcai = 0.01203125/(0.00075 + cai) -
    0.01203125*cai/((0.00075 + cai)*(0.00075 + cai));
  const double dallo_i_dcai = 2.0*pow(KmCaAct/cai, 2.0)/(((1.0 +
    pow(KmCaAct/cai, 2.0))*(1.0 + pow(KmCaAct/cai, 2.0)))*cai);
  const double dcai_dt_linearized = (-5.0*vss/vmyo - (dJup_dJupnp*dJupnp_dcai
    + scale_HF_Jup*dJupp_dcai*fJupp)*vnsr/vmyo + 0.5*(-dICab_dcai -
    dIpCa_dcai + 2.0*((kcaon*dE2_i_dx2_i*dx2_i_dk6_i*h6_i +
    kcaon*dE2_i_dx3_i*dx3_i_dk6_i*h6_i +
    kcaon*dE2_i_dx1_i*h6_i*k2_i*k4_i)*k2_i -
    (kcaon*dE1_i_dx2_i*dx2_i_dk6_i*h6_i + kcaon*dE1_i_dx3_i*dx3_i_dk6_i*h6_i
    + kcaon*dE1_i_dx1_i*h6_i*k2_i*k4_i)*k1_i)*dINaCa_i_dJncxCa_i +
    2.0*((kcaon*dE3_i_dx2_i*dx2_i_dk6_i*h6_i +
    kcaon*dE3_i_dx3_i*dx3_i_dk6_i*h6_i +
    kcaon*dE3_i_dx1_i*h6_i*k2_i*k4_i)*k4pp_i -
    (kcaon*dE2_i_dx2_i*dx2_i_dk6_i*h6_i + kcaon*dE2_i_dx3_i*dx3_i_dk6_i*h6_i
    + kcaon*dE2_i_dx1_i*h6_i*k2_i*k4_i)*k3pp_i +
    3.0*(kcaon*dE4_i_dx2_i*dx2_i_dk6_i*h6_i +
    kcaon*dE4_i_dx3_i*dx3_i_dk6_i*h6_i +
    kcaon*dE4_i_dx1_i*h6_i*k2_i*k4_i)*k7_i -
    3.0*(kcaon*dE1_i_dx2_i*dx2_i_dk6_i*h6_i +
    kcaon*dE1_i_dx3_i*dx3_i_dk6_i*h6_i +
    kcaon*dE1_i_dx1_i*h6_i*k2_i*k4_i)*k8_i)*dINaCa_i_dJncxNa_i +
    2.0*dINaCa_i_dallo_i*dallo_i_dcai)*Acap/(F*vmyo))*Bcai + (-J_TRPN +
    Jdiff*vss/vmyo - Jup*vnsr/vmyo + 0.5*(-ICab - IpCa - Isac_P_ns/3. +
    2.0*INaCa_i)*Acap/(F*vmyo))*dBcai_dcai;
  states[STATE_cai] = (fabs(dcai_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dcai_dt_linearized))*dcai_dt/dcai_dt_linearized : dt*dcai_dt) +
    cai;
}
