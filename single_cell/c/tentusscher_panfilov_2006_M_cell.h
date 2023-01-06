#include <math.h>
#include <string.h>
// Gotran generated C/C++ code for the "tentusscher_panfilov_2006_M_cell" model

enum state {
  STATE_Xr1,
  STATE_Xr2,
  STATE_Xs,
  STATE_m,
  STATE_h,
  STATE_j,
  STATE_d,
  STATE_f,
  STATE_f2,
  STATE_fCass,
  STATE_s,
  STATE_r,
  STATE_Ca_i,
  STATE_R_prime,
  STATE_Ca_SR,
  STATE_Ca_ss,
  STATE_Na_i,
  STATE_V,
  STATE_K_i,
  NUM_STATES,
};

enum parameter {
  PARAM_P_kna,
  PARAM_g_K1,
  PARAM_g_Kr,
  PARAM_g_Ks,
  PARAM_g_Na,
  PARAM_g_bna,
  PARAM_g_CaL,
  PARAM_g_bca,
  PARAM_g_to,
  PARAM_K_mNa,
  PARAM_K_mk,
  PARAM_P_NaK,
  PARAM_K_NaCa,
  PARAM_K_sat,
  PARAM_Km_Ca,
  PARAM_Km_Nai,
  PARAM_alpha,
  PARAM_gamma,
  PARAM_K_pCa,
  PARAM_g_pCa,
  PARAM_g_pK,
  PARAM_Buf_c,
  PARAM_Buf_sr,
  PARAM_Buf_ss,
  PARAM_Ca_o,
  PARAM_EC,
  PARAM_K_buf_c,
  PARAM_K_buf_sr,
  PARAM_K_buf_ss,
  PARAM_K_up,
  PARAM_V_leak,
  PARAM_V_rel,
  PARAM_V_sr,
  PARAM_V_ss,
  PARAM_V_xfer,
  PARAM_Vmax_up,
  PARAM_k1_prime,
  PARAM_k2_prime,
  PARAM_k3,
  PARAM_k4,
  PARAM_max_sr,
  PARAM_min_sr,
  PARAM_Na_o,
  PARAM_Cm,
  PARAM_F,
  PARAM_R,
  PARAM_T,
  PARAM_V_c,
  PARAM_stim_amplitude,
  PARAM_stim_duration,
  PARAM_stim_period,
  PARAM_stim_start,
  PARAM_K_o,
  NUM_PARAMS,
};

enum monitored {
  MONITOR_E_Na,
  MONITOR_E_K,
  MONITOR_E_Ks,
  MONITOR_E_Ca,
  MONITOR_alpha_K1,
  MONITOR_beta_K1,
  MONITOR_xK1_inf,
  MONITOR_i_K1,
  MONITOR_i_Kr,
  MONITOR_xr1_inf,
  MONITOR_alpha_xr1,
  MONITOR_beta_xr1,
  MONITOR_tau_xr1,
  MONITOR_xr2_inf,
  MONITOR_alpha_xr2,
  MONITOR_beta_xr2,
  MONITOR_tau_xr2,
  MONITOR_i_Ks,
  MONITOR_xs_inf,
  MONITOR_alpha_xs,
  MONITOR_beta_xs,
  MONITOR_tau_xs,
  MONITOR_i_Na,
  MONITOR_m_inf,
  MONITOR_alpha_m,
  MONITOR_beta_m,
  MONITOR_tau_m,
  MONITOR_h_inf,
  MONITOR_alpha_h,
  MONITOR_beta_h,
  MONITOR_tau_h,
  MONITOR_j_inf,
  MONITOR_alpha_j,
  MONITOR_beta_j,
  MONITOR_tau_j,
  MONITOR_i_b_Na,
  MONITOR_V_eff,
  MONITOR_i_CaL,
  MONITOR_d_inf,
  MONITOR_alpha_d,
  MONITOR_beta_d,
  MONITOR_gamma_d,
  MONITOR_tau_d,
  MONITOR_f_inf,
  MONITOR_tau_f,
  MONITOR_f2_inf,
  MONITOR_tau_f2,
  MONITOR_fCass_inf,
  MONITOR_tau_fCass,
  MONITOR_i_b_Ca,
  MONITOR_i_to,
  MONITOR_s_inf,
  MONITOR_tau_s,
  MONITOR_r_inf,
  MONITOR_tau_r,
  MONITOR_i_NaK,
  MONITOR_i_NaCa,
  MONITOR_i_p_Ca,
  MONITOR_i_p_K,
  MONITOR_i_up,
  MONITOR_i_leak,
  MONITOR_i_xfer,
  MONITOR_kcasr,
  MONITOR_Ca_i_bufc,
  MONITOR_Ca_sr_bufsr,
  MONITOR_Ca_ss_bufss,
  MONITOR_k1,
  MONITOR_k2,
  MONITOR_O,
  MONITOR_i_rel,
  MONITOR_i_Stim,
  MONITOR_dXr1_dt,
  MONITOR_dXr2_dt,
  MONITOR_dXs_dt,
  MONITOR_dm_dt,
  MONITOR_dh_dt,
  MONITOR_dj_dt,
  MONITOR_dd_dt,
  MONITOR_df_dt,
  MONITOR_df2_dt,
  MONITOR_dfCass_dt,
  MONITOR_ds_dt,
  MONITOR_dr_dt,
  MONITOR_dCa_i_dt,
  MONITOR_dR_prime_dt,
  MONITOR_dCa_SR_dt,
  MONITOR_dCa_ss_dt,
  MONITOR_dNa_i_dt,
  MONITOR_dV_dt,
  MONITOR_dK_i_dt,
  NUM_MONITORED,
};

// Init state values
void init_state_values(double* states)
{
  states[STATE_Xr1] = 0.0165;
  states[STATE_Xr2] = 0.473;
  states[STATE_Xs] = 0.0174;
  states[STATE_m] = 0.00165;
  states[STATE_h] = 0.749;
  states[STATE_j] = 0.6788;
  states[STATE_d] = 3.288e-05;
  states[STATE_f] = 0.7026;
  states[STATE_f2] = 0.9526;
  states[STATE_fCass] = 0.9942;
  states[STATE_s] = 0.999998;
  states[STATE_r] = 2.347e-08;
  states[STATE_Ca_i] = 0.000153;
  states[STATE_R_prime] = 0.8978;
  states[STATE_Ca_SR] = 4.272;
  states[STATE_Ca_ss] = 0.00042;
  states[STATE_Na_i] = 10.132;
  states[STATE_V] = -85.423;
  states[STATE_K_i] = 138.52;
}

// Default parameter values
void init_parameters_values(double* parameters)
{
  parameters[PARAM_P_kna] = 0.03;
  parameters[PARAM_g_K1] = 5.405;
  parameters[PARAM_g_Kr] = 0.153;
  parameters[PARAM_g_Ks] = 0.098;
  parameters[PARAM_g_Na] = 14.838;
  parameters[PARAM_g_bna] = 0.00029;
  parameters[PARAM_g_CaL] = 3.98e-05;
  parameters[PARAM_g_bca] = 0.000592;
  parameters[PARAM_g_to] = 0.294;
  parameters[PARAM_K_mNa] = 40.0;
  parameters[PARAM_K_mk] = 1.0;
  parameters[PARAM_P_NaK] = 2.724;
  parameters[PARAM_K_NaCa] = 1000.0;
  parameters[PARAM_K_sat] = 0.1;
  parameters[PARAM_Km_Ca] = 1.38;
  parameters[PARAM_Km_Nai] = 87.5;
  parameters[PARAM_alpha] = 2.5;
  parameters[PARAM_gamma] = 0.35;
  parameters[PARAM_K_pCa] = 0.0005;
  parameters[PARAM_g_pCa] = 0.1238;
  parameters[PARAM_g_pK] = 0.0146;
  parameters[PARAM_Buf_c] = 0.2;
  parameters[PARAM_Buf_sr] = 10.0;
  parameters[PARAM_Buf_ss] = 0.4;
  parameters[PARAM_Ca_o] = 2.0;
  parameters[PARAM_EC] = 1.5;
  parameters[PARAM_K_buf_c] = 0.001;
  parameters[PARAM_K_buf_sr] = 0.3;
  parameters[PARAM_K_buf_ss] = 0.00025;
  parameters[PARAM_K_up] = 0.00025;
  parameters[PARAM_V_leak] = 0.00036;
  parameters[PARAM_V_rel] = 0.102;
  parameters[PARAM_V_sr] = 0.001094;
  parameters[PARAM_V_ss] = 5.468e-05;
  parameters[PARAM_V_xfer] = 0.0038;
  parameters[PARAM_Vmax_up] = 0.006375;
  parameters[PARAM_k1_prime] = 0.15;
  parameters[PARAM_k2_prime] = 0.045;
  parameters[PARAM_k3] = 0.06;
  parameters[PARAM_k4] = 0.005;
  parameters[PARAM_max_sr] = 2.5;
  parameters[PARAM_min_sr] = 1.0;
  parameters[PARAM_Na_o] = 140.0;
  parameters[PARAM_Cm] = 0.185;
  parameters[PARAM_F] = 96485.3415;
  parameters[PARAM_R] = 8314.472;
  parameters[PARAM_T] = 310.0;
  parameters[PARAM_V_c] = 0.016404;
  parameters[PARAM_stim_amplitude] = 52.0;
  parameters[PARAM_stim_duration] = 1.0;
  parameters[PARAM_stim_period] = 1000.0;
  parameters[PARAM_stim_start] = 10.0;
  parameters[PARAM_K_o] = 5.4;
}

// State index
int state_index(const char name[])
{
  if (strcmp(name, "Xr1")==0)
  {
    return STATE_Xr1;
  }
  else if (strcmp(name, "Xr2")==0)
  {
    return STATE_Xr2;
  }
  else if (strcmp(name, "Xs")==0)
  {
    return STATE_Xs;
  }
  else if (strcmp(name, "m")==0)
  {
    return STATE_m;
  }
  else if (strcmp(name, "h")==0)
  {
    return STATE_h;
  }
  else if (strcmp(name, "j")==0)
  {
    return STATE_j;
  }
  else if (strcmp(name, "d")==0)
  {
    return STATE_d;
  }
  else if (strcmp(name, "f")==0)
  {
    return STATE_f;
  }
  else if (strcmp(name, "f2")==0)
  {
    return STATE_f2;
  }
  else if (strcmp(name, "fCass")==0)
  {
    return STATE_fCass;
  }
  else if (strcmp(name, "s")==0)
  {
    return STATE_s;
  }
  else if (strcmp(name, "r")==0)
  {
    return STATE_r;
  }
  else if (strcmp(name, "Ca_i")==0)
  {
    return STATE_Ca_i;
  }
  else if (strcmp(name, "R_prime")==0)
  {
    return STATE_R_prime;
  }
  else if (strcmp(name, "Ca_SR")==0)
  {
    return STATE_Ca_SR;
  }
  else if (strcmp(name, "Ca_ss")==0)
  {
    return STATE_Ca_ss;
  }
  else if (strcmp(name, "Na_i")==0)
  {
    return STATE_Na_i;
  }
  else if (strcmp(name, "V")==0)
  {
    return STATE_V;
  }
  else if (strcmp(name, "K_i")==0)
  {
    return STATE_K_i;
  }
  return -1;
}

// Parameter index
int parameter_index(const char name[])
{
  if (strcmp(name, "P_kna")==0)
  {
    return PARAM_P_kna;
  }
  else if (strcmp(name, "g_K1")==0)
  {
    return PARAM_g_K1;
  }
  else if (strcmp(name, "g_Kr")==0)
  {
    return PARAM_g_Kr;
  }
  else if (strcmp(name, "g_Ks")==0)
  {
    return PARAM_g_Ks;
  }
  else if (strcmp(name, "g_Na")==0)
  {
    return PARAM_g_Na;
  }
  else if (strcmp(name, "g_bna")==0)
  {
    return PARAM_g_bna;
  }
  else if (strcmp(name, "g_CaL")==0)
  {
    return PARAM_g_CaL;
  }
  else if (strcmp(name, "g_bca")==0)
  {
    return PARAM_g_bca;
  }
  else if (strcmp(name, "g_to")==0)
  {
    return PARAM_g_to;
  }
  else if (strcmp(name, "K_mNa")==0)
  {
    return PARAM_K_mNa;
  }
  else if (strcmp(name, "K_mk")==0)
  {
    return PARAM_K_mk;
  }
  else if (strcmp(name, "P_NaK")==0)
  {
    return PARAM_P_NaK;
  }
  else if (strcmp(name, "K_NaCa")==0)
  {
    return PARAM_K_NaCa;
  }
  else if (strcmp(name, "K_sat")==0)
  {
    return PARAM_K_sat;
  }
  else if (strcmp(name, "Km_Ca")==0)
  {
    return PARAM_Km_Ca;
  }
  else if (strcmp(name, "Km_Nai")==0)
  {
    return PARAM_Km_Nai;
  }
  else if (strcmp(name, "alpha")==0)
  {
    return PARAM_alpha;
  }
  else if (strcmp(name, "gamma")==0)
  {
    return PARAM_gamma;
  }
  else if (strcmp(name, "K_pCa")==0)
  {
    return PARAM_K_pCa;
  }
  else if (strcmp(name, "g_pCa")==0)
  {
    return PARAM_g_pCa;
  }
  else if (strcmp(name, "g_pK")==0)
  {
    return PARAM_g_pK;
  }
  else if (strcmp(name, "Buf_c")==0)
  {
    return PARAM_Buf_c;
  }
  else if (strcmp(name, "Buf_sr")==0)
  {
    return PARAM_Buf_sr;
  }
  else if (strcmp(name, "Buf_ss")==0)
  {
    return PARAM_Buf_ss;
  }
  else if (strcmp(name, "Ca_o")==0)
  {
    return PARAM_Ca_o;
  }
  else if (strcmp(name, "EC")==0)
  {
    return PARAM_EC;
  }
  else if (strcmp(name, "K_buf_c")==0)
  {
    return PARAM_K_buf_c;
  }
  else if (strcmp(name, "K_buf_sr")==0)
  {
    return PARAM_K_buf_sr;
  }
  else if (strcmp(name, "K_buf_ss")==0)
  {
    return PARAM_K_buf_ss;
  }
  else if (strcmp(name, "K_up")==0)
  {
    return PARAM_K_up;
  }
  else if (strcmp(name, "V_leak")==0)
  {
    return PARAM_V_leak;
  }
  else if (strcmp(name, "V_rel")==0)
  {
    return PARAM_V_rel;
  }
  else if (strcmp(name, "V_sr")==0)
  {
    return PARAM_V_sr;
  }
  else if (strcmp(name, "V_ss")==0)
  {
    return PARAM_V_ss;
  }
  else if (strcmp(name, "V_xfer")==0)
  {
    return PARAM_V_xfer;
  }
  else if (strcmp(name, "Vmax_up")==0)
  {
    return PARAM_Vmax_up;
  }
  else if (strcmp(name, "k1_prime")==0)
  {
    return PARAM_k1_prime;
  }
  else if (strcmp(name, "k2_prime")==0)
  {
    return PARAM_k2_prime;
  }
  else if (strcmp(name, "k3")==0)
  {
    return PARAM_k3;
  }
  else if (strcmp(name, "k4")==0)
  {
    return PARAM_k4;
  }
  else if (strcmp(name, "max_sr")==0)
  {
    return PARAM_max_sr;
  }
  else if (strcmp(name, "min_sr")==0)
  {
    return PARAM_min_sr;
  }
  else if (strcmp(name, "Na_o")==0)
  {
    return PARAM_Na_o;
  }
  else if (strcmp(name, "Cm")==0)
  {
    return PARAM_Cm;
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
  else if (strcmp(name, "V_c")==0)
  {
    return PARAM_V_c;
  }
  else if (strcmp(name, "stim_amplitude")==0)
  {
    return PARAM_stim_amplitude;
  }
  else if (strcmp(name, "stim_duration")==0)
  {
    return PARAM_stim_duration;
  }
  else if (strcmp(name, "stim_period")==0)
  {
    return PARAM_stim_period;
  }
  else if (strcmp(name, "stim_start")==0)
  {
    return PARAM_stim_start;
  }
  else if (strcmp(name, "K_o")==0)
  {
    return PARAM_K_o;
  }
  return -1;
}

int monitored_index(const char name[])
{
  if (strcmp(name, "E_Na")==0)
  {
    return MONITOR_E_Na;
  }
  else if (strcmp(name, "E_K")==0)
  {
    return MONITOR_E_K;
  }
  else if (strcmp(name, "E_Ks")==0)
  {
    return MONITOR_E_Ks;
  }
  else if (strcmp(name, "E_Ca")==0)
  {
    return MONITOR_E_Ca;
  }
  else if (strcmp(name, "alpha_K1")==0)
  {
    return MONITOR_alpha_K1;
  }
  else if (strcmp(name, "beta_K1")==0)
  {
    return MONITOR_beta_K1;
  }
  else if (strcmp(name, "xK1_inf")==0)
  {
    return MONITOR_xK1_inf;
  }
  else if (strcmp(name, "i_K1")==0)
  {
    return MONITOR_i_K1;
  }
  else if (strcmp(name, "i_Kr")==0)
  {
    return MONITOR_i_Kr;
  }
  else if (strcmp(name, "xr1_inf")==0)
  {
    return MONITOR_xr1_inf;
  }
  else if (strcmp(name, "alpha_xr1")==0)
  {
    return MONITOR_alpha_xr1;
  }
  else if (strcmp(name, "beta_xr1")==0)
  {
    return MONITOR_beta_xr1;
  }
  else if (strcmp(name, "tau_xr1")==0)
  {
    return MONITOR_tau_xr1;
  }
  else if (strcmp(name, "xr2_inf")==0)
  {
    return MONITOR_xr2_inf;
  }
  else if (strcmp(name, "alpha_xr2")==0)
  {
    return MONITOR_alpha_xr2;
  }
  else if (strcmp(name, "beta_xr2")==0)
  {
    return MONITOR_beta_xr2;
  }
  else if (strcmp(name, "tau_xr2")==0)
  {
    return MONITOR_tau_xr2;
  }
  else if (strcmp(name, "i_Ks")==0)
  {
    return MONITOR_i_Ks;
  }
  else if (strcmp(name, "xs_inf")==0)
  {
    return MONITOR_xs_inf;
  }
  else if (strcmp(name, "alpha_xs")==0)
  {
    return MONITOR_alpha_xs;
  }
  else if (strcmp(name, "beta_xs")==0)
  {
    return MONITOR_beta_xs;
  }
  else if (strcmp(name, "tau_xs")==0)
  {
    return MONITOR_tau_xs;
  }
  else if (strcmp(name, "i_Na")==0)
  {
    return MONITOR_i_Na;
  }
  else if (strcmp(name, "m_inf")==0)
  {
    return MONITOR_m_inf;
  }
  else if (strcmp(name, "alpha_m")==0)
  {
    return MONITOR_alpha_m;
  }
  else if (strcmp(name, "beta_m")==0)
  {
    return MONITOR_beta_m;
  }
  else if (strcmp(name, "tau_m")==0)
  {
    return MONITOR_tau_m;
  }
  else if (strcmp(name, "h_inf")==0)
  {
    return MONITOR_h_inf;
  }
  else if (strcmp(name, "alpha_h")==0)
  {
    return MONITOR_alpha_h;
  }
  else if (strcmp(name, "beta_h")==0)
  {
    return MONITOR_beta_h;
  }
  else if (strcmp(name, "tau_h")==0)
  {
    return MONITOR_tau_h;
  }
  else if (strcmp(name, "j_inf")==0)
  {
    return MONITOR_j_inf;
  }
  else if (strcmp(name, "alpha_j")==0)
  {
    return MONITOR_alpha_j;
  }
  else if (strcmp(name, "beta_j")==0)
  {
    return MONITOR_beta_j;
  }
  else if (strcmp(name, "tau_j")==0)
  {
    return MONITOR_tau_j;
  }
  else if (strcmp(name, "i_b_Na")==0)
  {
    return MONITOR_i_b_Na;
  }
  else if (strcmp(name, "V_eff")==0)
  {
    return MONITOR_V_eff;
  }
  else if (strcmp(name, "i_CaL")==0)
  {
    return MONITOR_i_CaL;
  }
  else if (strcmp(name, "d_inf")==0)
  {
    return MONITOR_d_inf;
  }
  else if (strcmp(name, "alpha_d")==0)
  {
    return MONITOR_alpha_d;
  }
  else if (strcmp(name, "beta_d")==0)
  {
    return MONITOR_beta_d;
  }
  else if (strcmp(name, "gamma_d")==0)
  {
    return MONITOR_gamma_d;
  }
  else if (strcmp(name, "tau_d")==0)
  {
    return MONITOR_tau_d;
  }
  else if (strcmp(name, "f_inf")==0)
  {
    return MONITOR_f_inf;
  }
  else if (strcmp(name, "tau_f")==0)
  {
    return MONITOR_tau_f;
  }
  else if (strcmp(name, "f2_inf")==0)
  {
    return MONITOR_f2_inf;
  }
  else if (strcmp(name, "tau_f2")==0)
  {
    return MONITOR_tau_f2;
  }
  else if (strcmp(name, "fCass_inf")==0)
  {
    return MONITOR_fCass_inf;
  }
  else if (strcmp(name, "tau_fCass")==0)
  {
    return MONITOR_tau_fCass;
  }
  else if (strcmp(name, "i_b_Ca")==0)
  {
    return MONITOR_i_b_Ca;
  }
  else if (strcmp(name, "i_to")==0)
  {
    return MONITOR_i_to;
  }
  else if (strcmp(name, "s_inf")==0)
  {
    return MONITOR_s_inf;
  }
  else if (strcmp(name, "tau_s")==0)
  {
    return MONITOR_tau_s;
  }
  else if (strcmp(name, "r_inf")==0)
  {
    return MONITOR_r_inf;
  }
  else if (strcmp(name, "tau_r")==0)
  {
    return MONITOR_tau_r;
  }
  else if (strcmp(name, "i_NaK")==0)
  {
    return MONITOR_i_NaK;
  }
  else if (strcmp(name, "i_NaCa")==0)
  {
    return MONITOR_i_NaCa;
  }
  else if (strcmp(name, "i_p_Ca")==0)
  {
    return MONITOR_i_p_Ca;
  }
  else if (strcmp(name, "i_p_K")==0)
  {
    return MONITOR_i_p_K;
  }
  else if (strcmp(name, "i_up")==0)
  {
    return MONITOR_i_up;
  }
  else if (strcmp(name, "i_leak")==0)
  {
    return MONITOR_i_leak;
  }
  else if (strcmp(name, "i_xfer")==0)
  {
    return MONITOR_i_xfer;
  }
  else if (strcmp(name, "kcasr")==0)
  {
    return MONITOR_kcasr;
  }
  else if (strcmp(name, "Ca_i_bufc")==0)
  {
    return MONITOR_Ca_i_bufc;
  }
  else if (strcmp(name, "Ca_sr_bufsr")==0)
  {
    return MONITOR_Ca_sr_bufsr;
  }
  else if (strcmp(name, "Ca_ss_bufss")==0)
  {
    return MONITOR_Ca_ss_bufss;
  }
  else if (strcmp(name, "k1")==0)
  {
    return MONITOR_k1;
  }
  else if (strcmp(name, "k2")==0)
  {
    return MONITOR_k2;
  }
  else if (strcmp(name, "O")==0)
  {
    return MONITOR_O;
  }
  else if (strcmp(name, "i_rel")==0)
  {
    return MONITOR_i_rel;
  }
  else if (strcmp(name, "i_Stim")==0)
  {
    return MONITOR_i_Stim;
  }
  else if (strcmp(name, "dXr1_dt")==0)
  {
    return MONITOR_dXr1_dt;
  }
  else if (strcmp(name, "dXr2_dt")==0)
  {
    return MONITOR_dXr2_dt;
  }
  else if (strcmp(name, "dXs_dt")==0)
  {
    return MONITOR_dXs_dt;
  }
  else if (strcmp(name, "dm_dt")==0)
  {
    return MONITOR_dm_dt;
  }
  else if (strcmp(name, "dh_dt")==0)
  {
    return MONITOR_dh_dt;
  }
  else if (strcmp(name, "dj_dt")==0)
  {
    return MONITOR_dj_dt;
  }
  else if (strcmp(name, "dd_dt")==0)
  {
    return MONITOR_dd_dt;
  }
  else if (strcmp(name, "df_dt")==0)
  {
    return MONITOR_df_dt;
  }
  else if (strcmp(name, "df2_dt")==0)
  {
    return MONITOR_df2_dt;
  }
  else if (strcmp(name, "dfCass_dt")==0)
  {
    return MONITOR_dfCass_dt;
  }
  else if (strcmp(name, "ds_dt")==0)
  {
    return MONITOR_ds_dt;
  }
  else if (strcmp(name, "dr_dt")==0)
  {
    return MONITOR_dr_dt;
  }
  else if (strcmp(name, "dCa_i_dt")==0)
  {
    return MONITOR_dCa_i_dt;
  }
  else if (strcmp(name, "dR_prime_dt")==0)
  {
    return MONITOR_dR_prime_dt;
  }
  else if (strcmp(name, "dCa_SR_dt")==0)
  {
    return MONITOR_dCa_SR_dt;
  }
  else if (strcmp(name, "dCa_ss_dt")==0)
  {
    return MONITOR_dCa_ss_dt;
  }
  else if (strcmp(name, "dNa_i_dt")==0)
  {
    return MONITOR_dNa_i_dt;
  }
  else if (strcmp(name, "dV_dt")==0)
  {
    return MONITOR_dV_dt;
  }
  else if (strcmp(name, "dK_i_dt")==0)
  {
    return MONITOR_dK_i_dt;
  }
  return -1;
}

// Compute the right hand side of the tentusscher_panfilov_2006_M_cell ODE
void rhs(const double *__restrict states, const double t, const double
  *__restrict parameters, double* values)
{

  // Assign states
  const double Xr1 = states[STATE_Xr1];
  const double Xr2 = states[STATE_Xr2];
  const double Xs = states[STATE_Xs];
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double j = states[STATE_j];
  const double d = states[STATE_d];
  const double f = states[STATE_f];
  const double f2 = states[STATE_f2];
  const double fCass = states[STATE_fCass];
  const double s = states[STATE_s];
  const double r = states[STATE_r];
  const double Ca_i = states[STATE_Ca_i];
  const double R_prime = states[STATE_R_prime];
  const double Ca_SR = states[STATE_Ca_SR];
  const double Ca_ss = states[STATE_Ca_ss];
  const double Na_i = states[STATE_Na_i];
  const double V = states[STATE_V];
  const double K_i = states[STATE_K_i];

  // Assign parameters
  const double P_kna = parameters[PARAM_P_kna];
  const double g_K1 = parameters[PARAM_g_K1];
  const double g_Kr = parameters[PARAM_g_Kr];
  const double g_Ks = parameters[PARAM_g_Ks];
  const double g_Na = parameters[PARAM_g_Na];
  const double g_bna = parameters[PARAM_g_bna];
  const double g_CaL = parameters[PARAM_g_CaL];
  const double g_bca = parameters[PARAM_g_bca];
  const double g_to = parameters[PARAM_g_to];
  const double K_mNa = parameters[PARAM_K_mNa];
  const double K_mk = parameters[PARAM_K_mk];
  const double P_NaK = parameters[PARAM_P_NaK];
  const double K_NaCa = parameters[PARAM_K_NaCa];
  const double K_sat = parameters[PARAM_K_sat];
  const double Km_Ca = parameters[PARAM_Km_Ca];
  const double Km_Nai = parameters[PARAM_Km_Nai];
  const double alpha = parameters[PARAM_alpha];
  const double gamma = parameters[PARAM_gamma];
  const double K_pCa = parameters[PARAM_K_pCa];
  const double g_pCa = parameters[PARAM_g_pCa];
  const double g_pK = parameters[PARAM_g_pK];
  const double Buf_c = parameters[PARAM_Buf_c];
  const double Buf_sr = parameters[PARAM_Buf_sr];
  const double Buf_ss = parameters[PARAM_Buf_ss];
  const double Ca_o = parameters[PARAM_Ca_o];
  const double EC = parameters[PARAM_EC];
  const double K_buf_c = parameters[PARAM_K_buf_c];
  const double K_buf_sr = parameters[PARAM_K_buf_sr];
  const double K_buf_ss = parameters[PARAM_K_buf_ss];
  const double K_up = parameters[PARAM_K_up];
  const double V_leak = parameters[PARAM_V_leak];
  const double V_rel = parameters[PARAM_V_rel];
  const double V_sr = parameters[PARAM_V_sr];
  const double V_ss = parameters[PARAM_V_ss];
  const double V_xfer = parameters[PARAM_V_xfer];
  const double Vmax_up = parameters[PARAM_Vmax_up];
  const double k1_prime = parameters[PARAM_k1_prime];
  const double k2_prime = parameters[PARAM_k2_prime];
  const double k3 = parameters[PARAM_k3];
  const double k4 = parameters[PARAM_k4];
  const double max_sr = parameters[PARAM_max_sr];
  const double min_sr = parameters[PARAM_min_sr];
  const double Na_o = parameters[PARAM_Na_o];
  const double Cm = parameters[PARAM_Cm];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double V_c = parameters[PARAM_V_c];
  const double stim_amplitude = parameters[PARAM_stim_amplitude];
  const double stim_duration = parameters[PARAM_stim_duration];
  const double stim_period = parameters[PARAM_stim_period];
  const double stim_start = parameters[PARAM_stim_start];
  const double K_o = parameters[PARAM_K_o];

  // Expressions for the Reversal potentials component
  const double E_Na = R*T*log(Na_o/Na_i)/F;
  const double E_K = R*T*log(K_o/K_i)/F;
  const double E_Ks = R*T*log((K_o + Na_o*P_kna)/(P_kna*Na_i + K_i))/F;
  const double E_Ca = 0.5*R*T*log(Ca_o/Ca_i)/F;

  // Expressions for the Inward rectifier potassium current component
  const double alpha_K1 = 0.1/(1. + 6.14421235332821e-6*exp(0.06*V -
    0.06*E_K));
  const double beta_K1 = (0.367879441171442*exp(0.1*V - 0.1*E_K) +
    3.06060402008027*exp(0.0002*V - 0.0002*E_K))/(1. + exp(0.5*E_K - 0.5*V));
  const double xK1_inf = alpha_K1/(alpha_K1 + beta_K1);
  const double i_K1 = 0.430331482911935*g_K1*sqrt(K_o)*(-E_K + V)*xK1_inf;

  // Expressions for the Rapid time dependent potassium current component
  const double i_Kr = 0.430331482911935*g_Kr*sqrt(K_o)*(-E_K + V)*Xr1*Xr2;

  // Expressions for the Xr1 gate component
  const double xr1_inf = 1.0/(1. + exp(-26./7. - V/7.));
  const double alpha_xr1 = 450./(1. + exp(-9./2. - V/10.));
  const double beta_xr1 = 6./(1. + 13.5813245225782*exp(0.0869565217391304*V));
  const double tau_xr1 = alpha_xr1*beta_xr1;
  values[STATE_Xr1] = (-Xr1 + xr1_inf)/tau_xr1;

  // Expressions for the Xr2 gate component
  const double xr2_inf = 1.0/(1. + exp(11./3. + V/24.));
  const double alpha_xr2 = 3./(1. + exp(-3. - V/20.));
  const double beta_xr2 = 1.12/(1. + exp(-3. + V/20.));
  const double tau_xr2 = alpha_xr2*beta_xr2;
  values[STATE_Xr2] = (-Xr2 + xr2_inf)/tau_xr2;

  // Expressions for the Slow time dependent potassium current component
  const double i_Ks = g_Ks*(Xs*Xs)*(-E_Ks + V);

  // Expressions for the Xs gate component
  const double xs_inf = 1.0/(1. + exp(-5./14. - V/14.));
  const double alpha_xs = 1400./sqrt(1. + exp(5./6. - V/6.));
  const double beta_xs = 1.0/(1. + exp(-7./3. + V/15.));
  const double tau_xs = 80. + alpha_xs*beta_xs;
  values[STATE_Xs] = (-Xs + xs_inf)/tau_xs;

  // Expressions for the Fast sodium current component
  const double i_Na = g_Na*(m*m*m)*(-E_Na + V)*h*j;

  // Expressions for the m gate component
  const double m_inf = 1.0/((1. +
    0.00184221158116513*exp(-0.110741971207087*V))*(1. +
    0.00184221158116513*exp(-0.110741971207087*V)));
  const double alpha_m = 1.0/(1. + exp(-12. - V/5.));
  const double beta_m = 0.1/(1. + exp(7. + V/5.)) + 0.1/(1. + exp(-1./4. +
    V/200.));
  const double tau_m = alpha_m*beta_m;
  values[STATE_m] = (-m + m_inf)/tau_m;

  // Expressions for the h gate component
  const double h_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_h = (V < -40. ?
    4.43126792958051e-7*exp(-0.147058823529412*V) : 0.);
  const double beta_h = (V < -40. ? 310000.*exp(0.3485*V) + 2.7*exp(0.079*V)
    : 0.77/(0.13 + 0.0497581410839387*exp(-0.0900900900900901*V)));
  const double tau_h = 1.0/(alpha_h + beta_h);
  values[STATE_h] = (-h + h_inf)/tau_h;

  // Expressions for the j gate component
  const double j_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_j = (V < -40. ? (37.78 + V)*(-25428.*exp(0.2444*V) -
    6.948e-6*exp(-0.04391*V))/(1. + 50262745825.954*exp(0.311*V)) : 0.);
  const double beta_j = (V < -40. ? 0.02424*exp(-0.01052*V)/(1. +
    0.00396086833990426*exp(-0.1378*V)) : 0.6*exp(0.057*V)/(1. +
    0.0407622039783662*exp(-0.1*V)));
  const double tau_j = 1.0/(alpha_j + beta_j);
  values[STATE_j] = (-j + j_inf)/tau_j;

  // Expressions for the Sodium background current component
  const double i_b_Na = g_bna*(-E_Na + V);

  // Expressions for the L_type Ca current component
  const double V_eff = (fabs(-15. + V) < 0.01 ? 0.01 : -15. + V);
  const double i_CaL = 4.*g_CaL*(F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*V_eff/(R*T)))*V_eff*d*f*f2*fCass/(R*T*(expm1(2.*F*V_eff/(R*T))));

  // Expressions for the d gate component
  const double d_inf = 1.0/(1. + 0.344153786865412*exp(-0.133333333333333*V));
  const double alpha_d = 0.25 + 1.4/(1. + exp(-35./13. - V/13.));
  const double beta_d = 1.4/(1. + exp(1. + V/5.));
  const double gamma_d = 1.0/(1. + exp(5./2. - V/20.));
  const double tau_d = alpha_d*beta_d + gamma_d;
  values[STATE_d] = (-d + d_inf)/tau_d;

  // Expressions for the f gate component
  const double f_inf = 1.0/(1. + exp(20./7. + V/7.));
  const double tau_f = 20. + 180./(1. + exp(3. + V/10.)) + 200./(1. +
    exp(13./10. - V/10.)) + 1102.5*exp(-((27. + V)*(27. + V))/225.);
  values[STATE_f] = (-f + f_inf)/tau_f;

  // Expressions for the F2 gate component
  const double f2_inf = 0.33 + 0.67/(1. + exp(5. + V/7.));
  const double tau_f2 = 31./(1. + exp(5./2. - V/10.)) + 80./(1. + exp(3. +
    V/10.)) + 562.*exp(-((27. + V)*(27. + V))/240.);
  values[STATE_f2] = (-f2 + f2_inf)/tau_f2;

  // Expressions for the FCass gate component
  const double fCass_inf = 0.4 + 0.6/(1. + 400.0*(Ca_ss*Ca_ss));
  const double tau_fCass = 2. + 80./(1. + 400.0*(Ca_ss*Ca_ss));
  values[STATE_fCass] = (-fCass + fCass_inf)/tau_fCass;

  // Expressions for the Calcium background current component
  const double i_b_Ca = g_bca*(-E_Ca + V);

  // Expressions for the Transient outward current component
  const double i_to = g_to*(-E_K + V)*r*s;

  // Expressions for the s gate component
  const double s_inf = 1.0/(1. + exp(4. + V/5.));
  const double tau_s = 3. + 5./(1. + exp(-4. + V/5.)) + 85.*exp(-((45. +
    V)*(45. + V))/320.);
  values[STATE_s] = (-s + s_inf)/tau_s;

  // Expressions for the r gate component
  const double r_inf = 1.0/(1. + exp(10./3. - V/6.));
  const double tau_r = 0.8 + 9.5*exp(-((40. + V)*(40. + V))/1800.);
  values[STATE_r] = (-r + r_inf)/tau_r;

  // Expressions for the Sodium potassium pump current component
  const double i_NaK = K_o*P_NaK*Na_i/((K_mNa + Na_i)*(K_mk + K_o)*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T))));

  // Expressions for the Sodium calcium exchanger current component
  const double i_NaCa = K_NaCa*(Ca_o*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T)) -
    alpha*(Na_o*Na_o*Na_o)*Ca_i*exp(F*(-1. + gamma)*V/(R*T)))/((1. +
    K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));

  // Expressions for the Calcium pump current component
  const double i_p_Ca = g_pCa*Ca_i/(K_pCa + Ca_i);

  // Expressions for the Potassium pump current component
  const double i_p_K = g_pK*(-E_K + V)/(1. +
    65.4052157419383*exp(-0.167224080267559*V));

  // Expressions for the Calcium dynamics component
  const double i_up = Vmax_up/(1. + (K_up*K_up)/(Ca_i*Ca_i));
  const double i_leak = V_leak*(-Ca_i + Ca_SR);
  const double i_xfer = V_xfer*(-Ca_i + Ca_ss);
  const double kcasr = max_sr - (max_sr - min_sr)/(1. + (EC*EC)/(Ca_SR*Ca_SR));
  const double Ca_i_bufc = 1.0/(1. + Buf_c*K_buf_c/((K_buf_c + Ca_i)*(K_buf_c
    + Ca_i)));
  const double Ca_sr_bufsr = 1.0/(1. + Buf_sr*K_buf_sr/((K_buf_sr +
    Ca_SR)*(K_buf_sr + Ca_SR)));
  const double Ca_ss_bufss = 1.0/(1. + Buf_ss*K_buf_ss/((K_buf_ss +
    Ca_ss)*(K_buf_ss + Ca_ss)));
  values[STATE_Ca_i] = (V_sr*(-i_up + i_leak)/V_c - Cm*(-2.*i_NaCa + i_b_Ca +
    i_p_Ca)/(2.*F*V_c) + i_xfer)*Ca_i_bufc;
  const double k1 = k1_prime/kcasr;
  const double k2 = k2_prime*kcasr;
  const double O = (Ca_ss*Ca_ss)*R_prime*k1/(k3 + (Ca_ss*Ca_ss)*k1);
  values[STATE_R_prime] = k4*(1. - R_prime) - Ca_ss*R_prime*k2;
  const double i_rel = V_rel*(-Ca_ss + Ca_SR)*O;
  values[STATE_Ca_SR] = (-i_leak - i_rel + i_up)*Ca_sr_bufsr;
  values[STATE_Ca_ss] = (V_sr*i_rel/V_ss - V_c*i_xfer/V_ss -
    Cm*i_CaL/(2.*F*V_ss))*Ca_ss_bufss;

  // Expressions for the Sodium dynamics component
  values[STATE_Na_i] = Cm*(-i_Na - i_b_Na - 3.*i_NaCa - 3.*i_NaK)/(F*V_c);

  // Expressions for the Membrane component
  const double i_Stim = (t - stim_period*floor(t/stim_period) <=
    stim_duration + stim_start && t - stim_period*floor(t/stim_period) >=
    stim_start ? -stim_amplitude : 0.);
  values[STATE_V] = -i_CaL - i_K1 - i_Kr - i_Ks - i_Na - i_NaCa - i_NaK -
    i_Stim - i_b_Ca - i_b_Na - i_p_Ca - i_p_K - i_to;

  // Expressions for the Potassium dynamics component
  values[STATE_K_i] = Cm*(-i_K1 - i_Kr - i_Ks - i_Stim - i_p_K - i_to +
    2.*i_NaK)/(F*V_c);
}

// Computes monitored expressions of the tentusscher_panfilov_2006_M_cell ODE
void monitor(const double *__restrict states, const double t, const double
  *__restrict parameters, double* monitored)
{

  // Assign states
  const double Xr1 = states[STATE_Xr1];
  const double Xr2 = states[STATE_Xr2];
  const double Xs = states[STATE_Xs];
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double j = states[STATE_j];
  const double d = states[STATE_d];
  const double f = states[STATE_f];
  const double f2 = states[STATE_f2];
  const double fCass = states[STATE_fCass];
  const double s = states[STATE_s];
  const double r = states[STATE_r];
  const double Ca_i = states[STATE_Ca_i];
  const double R_prime = states[STATE_R_prime];
  const double Ca_SR = states[STATE_Ca_SR];
  const double Ca_ss = states[STATE_Ca_ss];
  const double Na_i = states[STATE_Na_i];
  const double V = states[STATE_V];
  const double K_i = states[STATE_K_i];

  // Assign parameters
  const double P_kna = parameters[PARAM_P_kna];
  const double g_K1 = parameters[PARAM_g_K1];
  const double g_Kr = parameters[PARAM_g_Kr];
  const double g_Ks = parameters[PARAM_g_Ks];
  const double g_Na = parameters[PARAM_g_Na];
  const double g_bna = parameters[PARAM_g_bna];
  const double g_CaL = parameters[PARAM_g_CaL];
  const double g_bca = parameters[PARAM_g_bca];
  const double g_to = parameters[PARAM_g_to];
  const double K_mNa = parameters[PARAM_K_mNa];
  const double K_mk = parameters[PARAM_K_mk];
  const double P_NaK = parameters[PARAM_P_NaK];
  const double K_NaCa = parameters[PARAM_K_NaCa];
  const double K_sat = parameters[PARAM_K_sat];
  const double Km_Ca = parameters[PARAM_Km_Ca];
  const double Km_Nai = parameters[PARAM_Km_Nai];
  const double alpha = parameters[PARAM_alpha];
  const double gamma = parameters[PARAM_gamma];
  const double K_pCa = parameters[PARAM_K_pCa];
  const double g_pCa = parameters[PARAM_g_pCa];
  const double g_pK = parameters[PARAM_g_pK];
  const double Buf_c = parameters[PARAM_Buf_c];
  const double Buf_sr = parameters[PARAM_Buf_sr];
  const double Buf_ss = parameters[PARAM_Buf_ss];
  const double Ca_o = parameters[PARAM_Ca_o];
  const double EC = parameters[PARAM_EC];
  const double K_buf_c = parameters[PARAM_K_buf_c];
  const double K_buf_sr = parameters[PARAM_K_buf_sr];
  const double K_buf_ss = parameters[PARAM_K_buf_ss];
  const double K_up = parameters[PARAM_K_up];
  const double V_leak = parameters[PARAM_V_leak];
  const double V_rel = parameters[PARAM_V_rel];
  const double V_sr = parameters[PARAM_V_sr];
  const double V_ss = parameters[PARAM_V_ss];
  const double V_xfer = parameters[PARAM_V_xfer];
  const double Vmax_up = parameters[PARAM_Vmax_up];
  const double k1_prime = parameters[PARAM_k1_prime];
  const double k2_prime = parameters[PARAM_k2_prime];
  const double k3 = parameters[PARAM_k3];
  const double k4 = parameters[PARAM_k4];
  const double max_sr = parameters[PARAM_max_sr];
  const double min_sr = parameters[PARAM_min_sr];
  const double Na_o = parameters[PARAM_Na_o];
  const double Cm = parameters[PARAM_Cm];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double V_c = parameters[PARAM_V_c];
  const double stim_amplitude = parameters[PARAM_stim_amplitude];
  const double stim_duration = parameters[PARAM_stim_duration];
  const double stim_period = parameters[PARAM_stim_period];
  const double stim_start = parameters[PARAM_stim_start];
  const double K_o = parameters[PARAM_K_o];

  // Expressions for the Reversal potentials component
  monitored[MONITOR_E_Na] = R*T*log(Na_o/Na_i)/F;
  monitored[MONITOR_E_K] = R*T*log(K_o/K_i)/F;
  monitored[MONITOR_E_Ks] = R*T*log((K_o + Na_o*P_kna)/(P_kna*Na_i + K_i))/F;
  monitored[MONITOR_E_Ca] = 0.5*R*T*log(Ca_o/Ca_i)/F;

  // Expressions for the Inward rectifier potassium current component
  monitored[MONITOR_alpha_K1] = 0.1/(1. + 6.14421235332821e-6*exp(0.06*V -
    0.06*monitored[1]));
  monitored[MONITOR_beta_K1] = (0.367879441171442*exp(0.1*V -
    0.1*monitored[1]) + 3.06060402008027*exp(0.0002*V -
    0.0002*monitored[1]))/(1. + exp(0.5*monitored[1] - 0.5*V));
  monitored[MONITOR_xK1_inf] = monitored[4]/(monitored[4] + monitored[5]);
  monitored[MONITOR_i_K1] = 0.430331482911935*g_K1*sqrt(K_o)*(-monitored[1] +
    V)*monitored[6];

  // Expressions for the Rapid time dependent potassium current component
  monitored[MONITOR_i_Kr] = 0.430331482911935*g_Kr*sqrt(K_o)*(-monitored[1] +
    V)*Xr1*Xr2;

  // Expressions for the Xr1 gate component
  monitored[MONITOR_xr1_inf] = 1.0/(1. + exp(-26./7. - V/7.));
  monitored[MONITOR_alpha_xr1] = 450./(1. + exp(-9./2. - V/10.));
  monitored[MONITOR_beta_xr1] = 6./(1. +
    13.5813245225782*exp(0.0869565217391304*V));
  monitored[MONITOR_tau_xr1] = monitored[10]*monitored[11];
  monitored[MONITOR_dXr1_dt] = (-Xr1 + monitored[9])/monitored[12];

  // Expressions for the Xr2 gate component
  monitored[MONITOR_xr2_inf] = 1.0/(1. + exp(11./3. + V/24.));
  monitored[MONITOR_alpha_xr2] = 3./(1. + exp(-3. - V/20.));
  monitored[MONITOR_beta_xr2] = 1.12/(1. + exp(-3. + V/20.));
  monitored[MONITOR_tau_xr2] = monitored[14]*monitored[15];
  monitored[MONITOR_dXr2_dt] = (-Xr2 + monitored[13])/monitored[16];

  // Expressions for the Slow time dependent potassium current component
  monitored[MONITOR_i_Ks] = g_Ks*(Xs*Xs)*(-monitored[2] + V);

  // Expressions for the Xs gate component
  monitored[MONITOR_xs_inf] = 1.0/(1. + exp(-5./14. - V/14.));
  monitored[MONITOR_alpha_xs] = 1400./sqrt(1. + exp(5./6. - V/6.));
  monitored[MONITOR_beta_xs] = 1.0/(1. + exp(-7./3. + V/15.));
  monitored[MONITOR_tau_xs] = 80. + monitored[19]*monitored[20];
  monitored[MONITOR_dXs_dt] = (-Xs + monitored[18])/monitored[21];

  // Expressions for the Fast sodium current component
  monitored[MONITOR_i_Na] = g_Na*(m*m*m)*(-monitored[0] + V)*h*j;

  // Expressions for the m gate component
  monitored[MONITOR_m_inf] = 1.0/((1. +
    0.00184221158116513*exp(-0.110741971207087*V))*(1. +
    0.00184221158116513*exp(-0.110741971207087*V)));
  monitored[MONITOR_alpha_m] = 1.0/(1. + exp(-12. - V/5.));
  monitored[MONITOR_beta_m] = 0.1/(1. + exp(7. + V/5.)) + 0.1/(1. +
    exp(-1./4. + V/200.));
  monitored[MONITOR_tau_m] = monitored[24]*monitored[25];
  monitored[MONITOR_dm_dt] = (-m + monitored[23])/monitored[26];

  // Expressions for the h gate component
  monitored[MONITOR_h_inf] = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  monitored[MONITOR_alpha_h] = (V < -40. ?
    4.43126792958051e-7*exp(-0.147058823529412*V) : 0.);
  monitored[MONITOR_beta_h] = (V < -40. ? 310000.*exp(0.3485*V) +
    2.7*exp(0.079*V) : 0.77/(0.13 +
    0.0497581410839387*exp(-0.0900900900900901*V)));
  monitored[MONITOR_tau_h] = 1.0/(monitored[28] + monitored[29]);
  monitored[MONITOR_dh_dt] = (-h + monitored[27])/monitored[30];

  // Expressions for the j gate component
  monitored[MONITOR_j_inf] = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  monitored[MONITOR_alpha_j] = (V < -40. ? (37.78 + V)*(-25428.*exp(0.2444*V)
    - 6.948e-6*exp(-0.04391*V))/(1. + 50262745825.954*exp(0.311*V)) : 0.);
  monitored[MONITOR_beta_j] = (V < -40. ? 0.02424*exp(-0.01052*V)/(1. +
    0.00396086833990426*exp(-0.1378*V)) : 0.6*exp(0.057*V)/(1. +
    0.0407622039783662*exp(-0.1*V)));
  monitored[MONITOR_tau_j] = 1.0/(monitored[32] + monitored[33]);
  monitored[MONITOR_dj_dt] = (-j + monitored[31])/monitored[34];

  // Expressions for the Sodium background current component
  monitored[MONITOR_i_b_Na] = g_bna*(-monitored[0] + V);

  // Expressions for the L_type Ca current component
  monitored[MONITOR_V_eff] = (fabs(-15. + V) < 0.01 ? 0.01 : -15. + V);
  monitored[MONITOR_i_CaL] = 4.*g_CaL*(F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*monitored[36]/(R*T)))*d*f*f2*fCass*monitored[36]/(R*T*(expm1(2.*F*monitored[36]/(R*T))));

  // Expressions for the d gate component
  monitored[MONITOR_d_inf] = 1.0/(1. +
    0.344153786865412*exp(-0.133333333333333*V));
  monitored[MONITOR_alpha_d] = 0.25 + 1.4/(1. + exp(-35./13. - V/13.));
  monitored[MONITOR_beta_d] = 1.4/(1. + exp(1. + V/5.));
  monitored[MONITOR_gamma_d] = 1.0/(1. + exp(5./2. - V/20.));
  monitored[MONITOR_tau_d] = monitored[39]*monitored[40] + monitored[41];
  monitored[MONITOR_dd_dt] = (-d + monitored[38])/monitored[42];

  // Expressions for the f gate component
  monitored[MONITOR_f_inf] = 1.0/(1. + exp(20./7. + V/7.));
  monitored[MONITOR_tau_f] = 20. + 180./(1. + exp(3. + V/10.)) + 200./(1. +
    exp(13./10. - V/10.)) + 1102.5*exp(-((27. + V)*(27. + V))/225.);
  monitored[MONITOR_df_dt] = (-f + monitored[43])/monitored[44];

  // Expressions for the F2 gate component
  monitored[MONITOR_f2_inf] = 0.33 + 0.67/(1. + exp(5. + V/7.));
  monitored[MONITOR_tau_f2] = 31./(1. + exp(5./2. - V/10.)) + 80./(1. +
    exp(3. + V/10.)) + 562.*exp(-((27. + V)*(27. + V))/240.);
  monitored[MONITOR_df2_dt] = (-f2 + monitored[45])/monitored[46];

  // Expressions for the FCass gate component
  monitored[MONITOR_fCass_inf] = 0.4 + 0.6/(1. + 400.0*(Ca_ss*Ca_ss));
  monitored[MONITOR_tau_fCass] = 2. + 80./(1. + 400.0*(Ca_ss*Ca_ss));
  monitored[MONITOR_dfCass_dt] = (-fCass + monitored[47])/monitored[48];

  // Expressions for the Calcium background current component
  monitored[MONITOR_i_b_Ca] = g_bca*(-monitored[3] + V);

  // Expressions for the Transient outward current component
  monitored[MONITOR_i_to] = g_to*(-monitored[1] + V)*r*s;

  // Expressions for the s gate component
  monitored[MONITOR_s_inf] = 1.0/(1. + exp(4. + V/5.));
  monitored[MONITOR_tau_s] = 3. + 5./(1. + exp(-4. + V/5.)) + 85.*exp(-((45.
    + V)*(45. + V))/320.);
  monitored[MONITOR_ds_dt] = (-s + monitored[51])/monitored[52];

  // Expressions for the r gate component
  monitored[MONITOR_r_inf] = 1.0/(1. + exp(10./3. - V/6.));
  monitored[MONITOR_tau_r] = 0.8 + 9.5*exp(-((40. + V)*(40. + V))/1800.);
  monitored[MONITOR_dr_dt] = (-r + monitored[53])/monitored[54];

  // Expressions for the Sodium potassium pump current component
  monitored[MONITOR_i_NaK] = K_o*P_NaK*Na_i/((K_mNa + Na_i)*(K_mk + K_o)*(1.
    + 0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T))));

  // Expressions for the Sodium calcium exchanger current component
  monitored[MONITOR_i_NaCa] =
    K_NaCa*(Ca_o*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T)) -
    alpha*(Na_o*Na_o*Na_o)*Ca_i*exp(F*(-1. + gamma)*V/(R*T)))/((1. +
    K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));

  // Expressions for the Calcium pump current component
  monitored[MONITOR_i_p_Ca] = g_pCa*Ca_i/(K_pCa + Ca_i);

  // Expressions for the Potassium pump current component
  monitored[MONITOR_i_p_K] = g_pK*(-monitored[1] + V)/(1. +
    65.4052157419383*exp(-0.167224080267559*V));

  // Expressions for the Calcium dynamics component
  monitored[MONITOR_i_up] = Vmax_up/(1. + (K_up*K_up)/(Ca_i*Ca_i));
  monitored[MONITOR_i_leak] = V_leak*(-Ca_i + Ca_SR);
  monitored[MONITOR_i_xfer] = V_xfer*(-Ca_i + Ca_ss);
  monitored[MONITOR_kcasr] = max_sr - (max_sr - min_sr)/(1. +
    (EC*EC)/(Ca_SR*Ca_SR));
  monitored[MONITOR_Ca_i_bufc] = 1.0/(1. + Buf_c*K_buf_c/((K_buf_c +
    Ca_i)*(K_buf_c + Ca_i)));
  monitored[MONITOR_Ca_sr_bufsr] = 1.0/(1. + Buf_sr*K_buf_sr/((K_buf_sr +
    Ca_SR)*(K_buf_sr + Ca_SR)));
  monitored[MONITOR_Ca_ss_bufss] = 1.0/(1. + Buf_ss*K_buf_ss/((K_buf_ss +
    Ca_ss)*(K_buf_ss + Ca_ss)));
  monitored[MONITOR_dCa_i_dt] = (V_sr*(-monitored[59] + monitored[60])/V_c -
    Cm*(-2.*monitored[56] + monitored[49] + monitored[57])/(2.*F*V_c) +
    monitored[61])*monitored[63];
  monitored[MONITOR_k1] = k1_prime/monitored[62];
  monitored[MONITOR_k2] = k2_prime*monitored[62];
  monitored[MONITOR_O] = (Ca_ss*Ca_ss)*R_prime*monitored[66]/(k3 +
    (Ca_ss*Ca_ss)*monitored[66]);
  monitored[MONITOR_dR_prime_dt] = k4*(1. - R_prime) -
    Ca_ss*R_prime*monitored[67];
  monitored[MONITOR_i_rel] = V_rel*(-Ca_ss + Ca_SR)*monitored[68];
  monitored[MONITOR_dCa_SR_dt] = (-monitored[60] - monitored[69] +
    monitored[59])*monitored[64];
  monitored[MONITOR_dCa_ss_dt] = (V_sr*monitored[69]/V_ss -
    V_c*monitored[61]/V_ss - Cm*monitored[37]/(2.*F*V_ss))*monitored[65];

  // Expressions for the Sodium dynamics component
  monitored[MONITOR_dNa_i_dt] = Cm*(-monitored[22] - monitored[35] -
    3.*monitored[55] - 3.*monitored[56])/(F*V_c);

  // Expressions for the Membrane component
  monitored[MONITOR_i_Stim] = (t - stim_period*floor(t/stim_period) <=
    stim_duration + stim_start && t - stim_period*floor(t/stim_period) >=
    stim_start ? -stim_amplitude : 0.);
  monitored[MONITOR_dV_dt] = -monitored[17] - monitored[22] - monitored[35] -
    monitored[37] - monitored[49] - monitored[50] - monitored[55] -
    monitored[56] - monitored[57] - monitored[58] - monitored[70] -
    monitored[7] - monitored[8];

  // Expressions for the Potassium dynamics component
  monitored[MONITOR_dK_i_dt] = Cm*(-monitored[17] - monitored[50] -
    monitored[58] - monitored[70] - monitored[7] - monitored[8] +
    2.*monitored[55])/(F*V_c);
}

// Compute a forward step using the explicit Euler scheme to the
// tentusscher_panfilov_2006_M_cell ODE
void forward_explicit_euler(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double Xr1 = states[STATE_Xr1];
  const double Xr2 = states[STATE_Xr2];
  const double Xs = states[STATE_Xs];
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double j = states[STATE_j];
  const double d = states[STATE_d];
  const double f = states[STATE_f];
  const double f2 = states[STATE_f2];
  const double fCass = states[STATE_fCass];
  const double s = states[STATE_s];
  const double r = states[STATE_r];
  const double Ca_i = states[STATE_Ca_i];
  const double R_prime = states[STATE_R_prime];
  const double Ca_SR = states[STATE_Ca_SR];
  const double Ca_ss = states[STATE_Ca_ss];
  const double Na_i = states[STATE_Na_i];
  const double V = states[STATE_V];
  const double K_i = states[STATE_K_i];

  // Assign parameters
  const double P_kna = parameters[PARAM_P_kna];
  const double g_K1 = parameters[PARAM_g_K1];
  const double g_Kr = parameters[PARAM_g_Kr];
  const double g_Ks = parameters[PARAM_g_Ks];
  const double g_Na = parameters[PARAM_g_Na];
  const double g_bna = parameters[PARAM_g_bna];
  const double g_CaL = parameters[PARAM_g_CaL];
  const double g_bca = parameters[PARAM_g_bca];
  const double g_to = parameters[PARAM_g_to];
  const double K_mNa = parameters[PARAM_K_mNa];
  const double K_mk = parameters[PARAM_K_mk];
  const double P_NaK = parameters[PARAM_P_NaK];
  const double K_NaCa = parameters[PARAM_K_NaCa];
  const double K_sat = parameters[PARAM_K_sat];
  const double Km_Ca = parameters[PARAM_Km_Ca];
  const double Km_Nai = parameters[PARAM_Km_Nai];
  const double alpha = parameters[PARAM_alpha];
  const double gamma = parameters[PARAM_gamma];
  const double K_pCa = parameters[PARAM_K_pCa];
  const double g_pCa = parameters[PARAM_g_pCa];
  const double g_pK = parameters[PARAM_g_pK];
  const double Buf_c = parameters[PARAM_Buf_c];
  const double Buf_sr = parameters[PARAM_Buf_sr];
  const double Buf_ss = parameters[PARAM_Buf_ss];
  const double Ca_o = parameters[PARAM_Ca_o];
  const double EC = parameters[PARAM_EC];
  const double K_buf_c = parameters[PARAM_K_buf_c];
  const double K_buf_sr = parameters[PARAM_K_buf_sr];
  const double K_buf_ss = parameters[PARAM_K_buf_ss];
  const double K_up = parameters[PARAM_K_up];
  const double V_leak = parameters[PARAM_V_leak];
  const double V_rel = parameters[PARAM_V_rel];
  const double V_sr = parameters[PARAM_V_sr];
  const double V_ss = parameters[PARAM_V_ss];
  const double V_xfer = parameters[PARAM_V_xfer];
  const double Vmax_up = parameters[PARAM_Vmax_up];
  const double k1_prime = parameters[PARAM_k1_prime];
  const double k2_prime = parameters[PARAM_k2_prime];
  const double k3 = parameters[PARAM_k3];
  const double k4 = parameters[PARAM_k4];
  const double max_sr = parameters[PARAM_max_sr];
  const double min_sr = parameters[PARAM_min_sr];
  const double Na_o = parameters[PARAM_Na_o];
  const double Cm = parameters[PARAM_Cm];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double V_c = parameters[PARAM_V_c];
  const double stim_amplitude = parameters[PARAM_stim_amplitude];
  const double stim_duration = parameters[PARAM_stim_duration];
  const double stim_period = parameters[PARAM_stim_period];
  const double stim_start = parameters[PARAM_stim_start];
  const double K_o = parameters[PARAM_K_o];

  // Expressions for the Reversal potentials component
  const double E_Na = R*T*log(Na_o/Na_i)/F;
  const double E_K = R*T*log(K_o/K_i)/F;
  const double E_Ks = R*T*log((K_o + Na_o*P_kna)/(P_kna*Na_i + K_i))/F;
  const double E_Ca = 0.5*R*T*log(Ca_o/Ca_i)/F;

  // Expressions for the Inward rectifier potassium current component
  const double alpha_K1 = 0.1/(1. + 6.14421235332821e-6*exp(0.06*V -
    0.06*E_K));
  const double beta_K1 = (0.367879441171442*exp(0.1*V - 0.1*E_K) +
    3.06060402008027*exp(0.0002*V - 0.0002*E_K))/(1. + exp(0.5*E_K - 0.5*V));
  const double xK1_inf = alpha_K1/(alpha_K1 + beta_K1);
  const double i_K1 = 0.430331482911935*g_K1*sqrt(K_o)*(-E_K + V)*xK1_inf;

  // Expressions for the Rapid time dependent potassium current component
  const double i_Kr = 0.430331482911935*g_Kr*sqrt(K_o)*(-E_K + V)*Xr1*Xr2;

  // Expressions for the Xr1 gate component
  const double xr1_inf = 1.0/(1. + exp(-26./7. - V/7.));
  const double alpha_xr1 = 450./(1. + exp(-9./2. - V/10.));
  const double beta_xr1 = 6./(1. + 13.5813245225782*exp(0.0869565217391304*V));
  const double tau_xr1 = alpha_xr1*beta_xr1;
  const double dXr1_dt = (-Xr1 + xr1_inf)/tau_xr1;
  states[STATE_Xr1] = dt*dXr1_dt + Xr1;

  // Expressions for the Xr2 gate component
  const double xr2_inf = 1.0/(1. + exp(11./3. + V/24.));
  const double alpha_xr2 = 3./(1. + exp(-3. - V/20.));
  const double beta_xr2 = 1.12/(1. + exp(-3. + V/20.));
  const double tau_xr2 = alpha_xr2*beta_xr2;
  const double dXr2_dt = (-Xr2 + xr2_inf)/tau_xr2;
  states[STATE_Xr2] = dt*dXr2_dt + Xr2;

  // Expressions for the Slow time dependent potassium current component
  const double i_Ks = g_Ks*(Xs*Xs)*(-E_Ks + V);

  // Expressions for the Xs gate component
  const double xs_inf = 1.0/(1. + exp(-5./14. - V/14.));
  const double alpha_xs = 1400./sqrt(1. + exp(5./6. - V/6.));
  const double beta_xs = 1.0/(1. + exp(-7./3. + V/15.));
  const double tau_xs = 80. + alpha_xs*beta_xs;
  const double dXs_dt = (-Xs + xs_inf)/tau_xs;
  states[STATE_Xs] = dt*dXs_dt + Xs;

  // Expressions for the Fast sodium current component
  const double i_Na = g_Na*(m*m*m)*(-E_Na + V)*h*j;

  // Expressions for the m gate component
  const double m_inf = 1.0/((1. +
    0.00184221158116513*exp(-0.110741971207087*V))*(1. +
    0.00184221158116513*exp(-0.110741971207087*V)));
  const double alpha_m = 1.0/(1. + exp(-12. - V/5.));
  const double beta_m = 0.1/(1. + exp(7. + V/5.)) + 0.1/(1. + exp(-1./4. +
    V/200.));
  const double tau_m = alpha_m*beta_m;
  const double dm_dt = (-m + m_inf)/tau_m;
  states[STATE_m] = dt*dm_dt + m;

  // Expressions for the h gate component
  const double h_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_h = (V < -40. ?
    4.43126792958051e-7*exp(-0.147058823529412*V) : 0.);
  const double beta_h = (V < -40. ? 310000.*exp(0.3485*V) + 2.7*exp(0.079*V)
    : 0.77/(0.13 + 0.0497581410839387*exp(-0.0900900900900901*V)));
  const double tau_h = 1.0/(alpha_h + beta_h);
  const double dh_dt = (-h + h_inf)/tau_h;
  states[STATE_h] = dt*dh_dt + h;

  // Expressions for the j gate component
  const double j_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_j = (V < -40. ? (37.78 + V)*(-25428.*exp(0.2444*V) -
    6.948e-6*exp(-0.04391*V))/(1. + 50262745825.954*exp(0.311*V)) : 0.);
  const double beta_j = (V < -40. ? 0.02424*exp(-0.01052*V)/(1. +
    0.00396086833990426*exp(-0.1378*V)) : 0.6*exp(0.057*V)/(1. +
    0.0407622039783662*exp(-0.1*V)));
  const double tau_j = 1.0/(alpha_j + beta_j);
  const double dj_dt = (-j + j_inf)/tau_j;
  states[STATE_j] = dt*dj_dt + j;

  // Expressions for the Sodium background current component
  const double i_b_Na = g_bna*(-E_Na + V);

  // Expressions for the L_type Ca current component
  const double V_eff = (fabs(-15. + V) < 0.01 ? 0.01 : -15. + V);
  const double i_CaL = 4.*g_CaL*(F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*V_eff/(R*T)))*V_eff*d*f*f2*fCass/(R*T*(expm1(2.*F*V_eff/(R*T))));

  // Expressions for the d gate component
  const double d_inf = 1.0/(1. + 0.344153786865412*exp(-0.133333333333333*V));
  const double alpha_d = 0.25 + 1.4/(1. + exp(-35./13. - V/13.));
  const double beta_d = 1.4/(1. + exp(1. + V/5.));
  const double gamma_d = 1.0/(1. + exp(5./2. - V/20.));
  const double tau_d = alpha_d*beta_d + gamma_d;
  const double dd_dt = (-d + d_inf)/tau_d;
  states[STATE_d] = dt*dd_dt + d;

  // Expressions for the f gate component
  const double f_inf = 1.0/(1. + exp(20./7. + V/7.));
  const double tau_f = 20. + 180./(1. + exp(3. + V/10.)) + 200./(1. +
    exp(13./10. - V/10.)) + 1102.5*exp(-((27. + V)*(27. + V))/225.);
  const double df_dt = (-f + f_inf)/tau_f;
  states[STATE_f] = dt*df_dt + f;

  // Expressions for the F2 gate component
  const double f2_inf = 0.33 + 0.67/(1. + exp(5. + V/7.));
  const double tau_f2 = 31./(1. + exp(5./2. - V/10.)) + 80./(1. + exp(3. +
    V/10.)) + 562.*exp(-((27. + V)*(27. + V))/240.);
  const double df2_dt = (-f2 + f2_inf)/tau_f2;
  states[STATE_f2] = dt*df2_dt + f2;

  // Expressions for the FCass gate component
  const double fCass_inf = 0.4 + 0.6/(1. + 400.0*(Ca_ss*Ca_ss));
  const double tau_fCass = 2. + 80./(1. + 400.0*(Ca_ss*Ca_ss));
  const double dfCass_dt = (-fCass + fCass_inf)/tau_fCass;
  states[STATE_fCass] = dt*dfCass_dt + fCass;

  // Expressions for the Calcium background current component
  const double i_b_Ca = g_bca*(-E_Ca + V);

  // Expressions for the Transient outward current component
  const double i_to = g_to*(-E_K + V)*r*s;

  // Expressions for the s gate component
  const double s_inf = 1.0/(1. + exp(4. + V/5.));
  const double tau_s = 3. + 5./(1. + exp(-4. + V/5.)) + 85.*exp(-((45. +
    V)*(45. + V))/320.);
  const double ds_dt = (-s + s_inf)/tau_s;
  states[STATE_s] = dt*ds_dt + s;

  // Expressions for the r gate component
  const double r_inf = 1.0/(1. + exp(10./3. - V/6.));
  const double tau_r = 0.8 + 9.5*exp(-((40. + V)*(40. + V))/1800.);
  const double dr_dt = (-r + r_inf)/tau_r;
  states[STATE_r] = dt*dr_dt + r;

  // Expressions for the Sodium potassium pump current component
  const double i_NaK = K_o*P_NaK*Na_i/((K_mNa + Na_i)*(K_mk + K_o)*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T))));

  // Expressions for the Sodium calcium exchanger current component
  const double i_NaCa = K_NaCa*(Ca_o*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T)) -
    alpha*(Na_o*Na_o*Na_o)*Ca_i*exp(F*(-1. + gamma)*V/(R*T)))/((1. +
    K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));

  // Expressions for the Calcium pump current component
  const double i_p_Ca = g_pCa*Ca_i/(K_pCa + Ca_i);

  // Expressions for the Potassium pump current component
  const double i_p_K = g_pK*(-E_K + V)/(1. +
    65.4052157419383*exp(-0.167224080267559*V));

  // Expressions for the Calcium dynamics component
  const double i_up = Vmax_up/(1. + (K_up*K_up)/(Ca_i*Ca_i));
  const double i_leak = V_leak*(-Ca_i + Ca_SR);
  const double i_xfer = V_xfer*(-Ca_i + Ca_ss);
  const double kcasr = max_sr - (max_sr - min_sr)/(1. + (EC*EC)/(Ca_SR*Ca_SR));
  const double Ca_i_bufc = 1.0/(1. + Buf_c*K_buf_c/((K_buf_c + Ca_i)*(K_buf_c
    + Ca_i)));
  const double Ca_sr_bufsr = 1.0/(1. + Buf_sr*K_buf_sr/((K_buf_sr +
    Ca_SR)*(K_buf_sr + Ca_SR)));
  const double Ca_ss_bufss = 1.0/(1. + Buf_ss*K_buf_ss/((K_buf_ss +
    Ca_ss)*(K_buf_ss + Ca_ss)));
  const double dCa_i_dt = (V_sr*(-i_up + i_leak)/V_c - Cm*(-2.*i_NaCa +
    i_b_Ca + i_p_Ca)/(2.*F*V_c) + i_xfer)*Ca_i_bufc;
  states[STATE_Ca_i] = dt*dCa_i_dt + Ca_i;
  const double k1 = k1_prime/kcasr;
  const double k2 = k2_prime*kcasr;
  const double O = (Ca_ss*Ca_ss)*R_prime*k1/(k3 + (Ca_ss*Ca_ss)*k1);
  const double dR_prime_dt = k4*(1. - R_prime) - Ca_ss*R_prime*k2;
  states[STATE_R_prime] = dt*dR_prime_dt + R_prime;
  const double i_rel = V_rel*(-Ca_ss + Ca_SR)*O;
  const double dCa_SR_dt = (-i_leak - i_rel + i_up)*Ca_sr_bufsr;
  states[STATE_Ca_SR] = dt*dCa_SR_dt + Ca_SR;
  const double dCa_ss_dt = (V_sr*i_rel/V_ss - V_c*i_xfer/V_ss -
    Cm*i_CaL/(2.*F*V_ss))*Ca_ss_bufss;
  states[STATE_Ca_ss] = dt*dCa_ss_dt + Ca_ss;

  // Expressions for the Sodium dynamics component
  const double dNa_i_dt = Cm*(-i_Na - i_b_Na - 3.*i_NaCa - 3.*i_NaK)/(F*V_c);
  states[STATE_Na_i] = dt*dNa_i_dt + Na_i;

  // Expressions for the Membrane component
  const double i_Stim = (t - stim_period*floor(t/stim_period) <=
    stim_duration + stim_start && t - stim_period*floor(t/stim_period) >=
    stim_start ? -stim_amplitude : 0.);
  const double dV_dt = -i_CaL - i_K1 - i_Kr - i_Ks - i_Na - i_NaCa - i_NaK -
    i_Stim - i_b_Ca - i_b_Na - i_p_Ca - i_p_K - i_to;
  states[STATE_V] = dt*dV_dt + V;

  // Expressions for the Potassium dynamics component
  const double dK_i_dt = Cm*(-i_K1 - i_Kr - i_Ks - i_Stim - i_p_K - i_to +
    2.*i_NaK)/(F*V_c);
  states[STATE_K_i] = dt*dK_i_dt + K_i;
}

// Compute a forward step using the Rush-Larsen scheme to the
// tentusscher_panfilov_2006_M_cell ODE
void forward_rush_larsen(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double Xr1 = states[STATE_Xr1];
  const double Xr2 = states[STATE_Xr2];
  const double Xs = states[STATE_Xs];
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double j = states[STATE_j];
  const double d = states[STATE_d];
  const double f = states[STATE_f];
  const double f2 = states[STATE_f2];
  const double fCass = states[STATE_fCass];
  const double s = states[STATE_s];
  const double r = states[STATE_r];
  const double Ca_i = states[STATE_Ca_i];
  const double R_prime = states[STATE_R_prime];
  const double Ca_SR = states[STATE_Ca_SR];
  const double Ca_ss = states[STATE_Ca_ss];
  const double Na_i = states[STATE_Na_i];
  const double V = states[STATE_V];
  const double K_i = states[STATE_K_i];

  // Assign parameters
  const double P_kna = parameters[PARAM_P_kna];
  const double g_K1 = parameters[PARAM_g_K1];
  const double g_Kr = parameters[PARAM_g_Kr];
  const double g_Ks = parameters[PARAM_g_Ks];
  const double g_Na = parameters[PARAM_g_Na];
  const double g_bna = parameters[PARAM_g_bna];
  const double g_CaL = parameters[PARAM_g_CaL];
  const double g_bca = parameters[PARAM_g_bca];
  const double g_to = parameters[PARAM_g_to];
  const double K_mNa = parameters[PARAM_K_mNa];
  const double K_mk = parameters[PARAM_K_mk];
  const double P_NaK = parameters[PARAM_P_NaK];
  const double K_NaCa = parameters[PARAM_K_NaCa];
  const double K_sat = parameters[PARAM_K_sat];
  const double Km_Ca = parameters[PARAM_Km_Ca];
  const double Km_Nai = parameters[PARAM_Km_Nai];
  const double alpha = parameters[PARAM_alpha];
  const double gamma = parameters[PARAM_gamma];
  const double K_pCa = parameters[PARAM_K_pCa];
  const double g_pCa = parameters[PARAM_g_pCa];
  const double g_pK = parameters[PARAM_g_pK];
  const double Buf_c = parameters[PARAM_Buf_c];
  const double Buf_sr = parameters[PARAM_Buf_sr];
  const double Buf_ss = parameters[PARAM_Buf_ss];
  const double Ca_o = parameters[PARAM_Ca_o];
  const double EC = parameters[PARAM_EC];
  const double K_buf_c = parameters[PARAM_K_buf_c];
  const double K_buf_sr = parameters[PARAM_K_buf_sr];
  const double K_buf_ss = parameters[PARAM_K_buf_ss];
  const double K_up = parameters[PARAM_K_up];
  const double V_leak = parameters[PARAM_V_leak];
  const double V_rel = parameters[PARAM_V_rel];
  const double V_sr = parameters[PARAM_V_sr];
  const double V_ss = parameters[PARAM_V_ss];
  const double V_xfer = parameters[PARAM_V_xfer];
  const double Vmax_up = parameters[PARAM_Vmax_up];
  const double k1_prime = parameters[PARAM_k1_prime];
  const double k2_prime = parameters[PARAM_k2_prime];
  const double k3 = parameters[PARAM_k3];
  const double k4 = parameters[PARAM_k4];
  const double max_sr = parameters[PARAM_max_sr];
  const double min_sr = parameters[PARAM_min_sr];
  const double Na_o = parameters[PARAM_Na_o];
  const double Cm = parameters[PARAM_Cm];
  const double F = parameters[PARAM_F];
  const double R = parameters[PARAM_R];
  const double T = parameters[PARAM_T];
  const double V_c = parameters[PARAM_V_c];
  const double stim_amplitude = parameters[PARAM_stim_amplitude];
  const double stim_duration = parameters[PARAM_stim_duration];
  const double stim_period = parameters[PARAM_stim_period];
  const double stim_start = parameters[PARAM_stim_start];
  const double K_o = parameters[PARAM_K_o];

  // Expressions for the Reversal potentials component
  const double E_Na = R*T*log(Na_o/Na_i)/F;
  const double E_K = R*T*log(K_o/K_i)/F;
  const double E_Ks = R*T*log((K_o + Na_o*P_kna)/(P_kna*Na_i + K_i))/F;
  const double E_Ca = 0.5*R*T*log(Ca_o/Ca_i)/F;

  // Expressions for the Inward rectifier potassium current component
  const double alpha_K1 = 0.1/(1. + 6.14421235332821e-6*exp(0.06*V -
    0.06*E_K));
  const double beta_K1 = (0.367879441171442*exp(0.1*V - 0.1*E_K) +
    3.06060402008027*exp(0.0002*V - 0.0002*E_K))/(1. + exp(0.5*E_K - 0.5*V));
  const double xK1_inf = alpha_K1/(alpha_K1 + beta_K1);
  const double i_K1 = 0.430331482911935*g_K1*sqrt(K_o)*(-E_K + V)*xK1_inf;

  // Expressions for the Rapid time dependent potassium current component
  const double i_Kr = 0.430331482911935*g_Kr*sqrt(K_o)*(-E_K + V)*Xr1*Xr2;

  // Expressions for the Xr1 gate component
  const double xr1_inf = 1.0/(1. + exp(-26./7. - V/7.));
  const double alpha_xr1 = 450./(1. + exp(-9./2. - V/10.));
  const double beta_xr1 = 6./(1. + 13.5813245225782*exp(0.0869565217391304*V));
  const double tau_xr1 = alpha_xr1*beta_xr1;
  const double dXr1_dt = (-Xr1 + xr1_inf)/tau_xr1;
  const double dXr1_dt_linearized = -1./tau_xr1;
  states[STATE_Xr1] =
    (expm1(dt*dXr1_dt_linearized))*dXr1_dt/dXr1_dt_linearized + Xr1;

  // Expressions for the Xr2 gate component
  const double xr2_inf = 1.0/(1. + exp(11./3. + V/24.));
  const double alpha_xr2 = 3./(1. + exp(-3. - V/20.));
  const double beta_xr2 = 1.12/(1. + exp(-3. + V/20.));
  const double tau_xr2 = alpha_xr2*beta_xr2;
  const double dXr2_dt = (-Xr2 + xr2_inf)/tau_xr2;
  const double dXr2_dt_linearized = -1./tau_xr2;
  states[STATE_Xr2] =
    (expm1(dt*dXr2_dt_linearized))*dXr2_dt/dXr2_dt_linearized + Xr2;

  // Expressions for the Slow time dependent potassium current component
  const double i_Ks = g_Ks*(Xs*Xs)*(-E_Ks + V);

  // Expressions for the Xs gate component
  const double xs_inf = 1.0/(1. + exp(-5./14. - V/14.));
  const double alpha_xs = 1400./sqrt(1. + exp(5./6. - V/6.));
  const double beta_xs = 1.0/(1. + exp(-7./3. + V/15.));
  const double tau_xs = 80. + alpha_xs*beta_xs;
  const double dXs_dt = (-Xs + xs_inf)/tau_xs;
  const double dXs_dt_linearized = -1./tau_xs;
  states[STATE_Xs] = (expm1(dt*dXs_dt_linearized))*dXs_dt/dXs_dt_linearized +
    Xs;

  // Expressions for the Fast sodium current component
  const double i_Na = g_Na*(m*m*m)*(-E_Na + V)*h*j;

  // Expressions for the m gate component
  const double m_inf = 1.0/((1. +
    0.00184221158116513*exp(-0.110741971207087*V))*(1. +
    0.00184221158116513*exp(-0.110741971207087*V)));
  const double alpha_m = 1.0/(1. + exp(-12. - V/5.));
  const double beta_m = 0.1/(1. + exp(7. + V/5.)) + 0.1/(1. + exp(-1./4. +
    V/200.));
  const double tau_m = alpha_m*beta_m;
  const double dm_dt = (-m + m_inf)/tau_m;
  const double dm_dt_linearized = -1./tau_m;
  states[STATE_m] = (expm1(dt*dm_dt_linearized))*dm_dt/dm_dt_linearized + m;

  // Expressions for the h gate component
  const double h_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_h = (V < -40. ?
    4.43126792958051e-7*exp(-0.147058823529412*V) : 0.);
  const double beta_h = (V < -40. ? 310000.*exp(0.3485*V) + 2.7*exp(0.079*V)
    : 0.77/(0.13 + 0.0497581410839387*exp(-0.0900900900900901*V)));
  const double tau_h = 1.0/(alpha_h + beta_h);
  const double dh_dt = (-h + h_inf)/tau_h;
  const double dh_dt_linearized = -1./tau_h;
  states[STATE_h] = (expm1(dt*dh_dt_linearized))*dh_dt/dh_dt_linearized + h;

  // Expressions for the j gate component
  const double j_inf = 1.0/((1. +
    15212.5932856544*exp(0.134589502018843*V))*(1. +
    15212.5932856544*exp(0.134589502018843*V)));
  const double alpha_j = (V < -40. ? (37.78 + V)*(-25428.*exp(0.2444*V) -
    6.948e-6*exp(-0.04391*V))/(1. + 50262745825.954*exp(0.311*V)) : 0.);
  const double beta_j = (V < -40. ? 0.02424*exp(-0.01052*V)/(1. +
    0.00396086833990426*exp(-0.1378*V)) : 0.6*exp(0.057*V)/(1. +
    0.0407622039783662*exp(-0.1*V)));
  const double tau_j = 1.0/(alpha_j + beta_j);
  const double dj_dt = (-j + j_inf)/tau_j;
  const double dj_dt_linearized = -1./tau_j;
  states[STATE_j] = (expm1(dt*dj_dt_linearized))*dj_dt/dj_dt_linearized + j;

  // Expressions for the Sodium background current component
  const double i_b_Na = g_bna*(-E_Na + V);

  // Expressions for the L_type Ca current component
  const double V_eff = (fabs(-15. + V) < 0.01 ? 0.01 : -15. + V);
  const double i_CaL = 4.*g_CaL*(F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*V_eff/(R*T)))*V_eff*d*f*f2*fCass/(R*T*(expm1(2.*F*V_eff/(R*T))));

  // Expressions for the d gate component
  const double d_inf = 1.0/(1. + 0.344153786865412*exp(-0.133333333333333*V));
  const double alpha_d = 0.25 + 1.4/(1. + exp(-35./13. - V/13.));
  const double beta_d = 1.4/(1. + exp(1. + V/5.));
  const double gamma_d = 1.0/(1. + exp(5./2. - V/20.));
  const double tau_d = alpha_d*beta_d + gamma_d;
  const double dd_dt = (-d + d_inf)/tau_d;
  const double dd_dt_linearized = -1./tau_d;
  states[STATE_d] = (expm1(dt*dd_dt_linearized))*dd_dt/dd_dt_linearized + d;

  // Expressions for the f gate component
  const double f_inf = 1.0/(1. + exp(20./7. + V/7.));
  const double tau_f = 20. + 180./(1. + exp(3. + V/10.)) + 200./(1. +
    exp(13./10. - V/10.)) + 1102.5*exp(-((27. + V)*(27. + V))/225.);
  const double df_dt = (-f + f_inf)/tau_f;
  const double df_dt_linearized = -1./tau_f;
  states[STATE_f] = (expm1(dt*df_dt_linearized))*df_dt/df_dt_linearized + f;

  // Expressions for the F2 gate component
  const double f2_inf = 0.33 + 0.67/(1. + exp(5. + V/7.));
  const double tau_f2 = 31./(1. + exp(5./2. - V/10.)) + 80./(1. + exp(3. +
    V/10.)) + 562.*exp(-((27. + V)*(27. + V))/240.);
  const double df2_dt = (-f2 + f2_inf)/tau_f2;
  const double df2_dt_linearized = -1./tau_f2;
  states[STATE_f2] = (expm1(dt*df2_dt_linearized))*df2_dt/df2_dt_linearized +
    f2;

  // Expressions for the FCass gate component
  const double fCass_inf = 0.4 + 0.6/(1. + 400.0*(Ca_ss*Ca_ss));
  const double tau_fCass = 2. + 80./(1. + 400.0*(Ca_ss*Ca_ss));
  const double dfCass_dt = (-fCass + fCass_inf)/tau_fCass;
  const double dfCass_dt_linearized = -1./tau_fCass;
  states[STATE_fCass] =
    (expm1(dt*dfCass_dt_linearized))*dfCass_dt/dfCass_dt_linearized + fCass;

  // Expressions for the Calcium background current component
  const double i_b_Ca = g_bca*(-E_Ca + V);

  // Expressions for the Transient outward current component
  const double i_to = g_to*(-E_K + V)*r*s;

  // Expressions for the s gate component
  const double s_inf = 1.0/(1. + exp(4. + V/5.));
  const double tau_s = 3. + 5./(1. + exp(-4. + V/5.)) + 85.*exp(-((45. +
    V)*(45. + V))/320.);
  const double ds_dt = (-s + s_inf)/tau_s;
  const double ds_dt_linearized = -1./tau_s;
  states[STATE_s] = (expm1(dt*ds_dt_linearized))*ds_dt/ds_dt_linearized + s;

  // Expressions for the r gate component
  const double r_inf = 1.0/(1. + exp(10./3. - V/6.));
  const double tau_r = 0.8 + 9.5*exp(-((40. + V)*(40. + V))/1800.);
  const double dr_dt = (-r + r_inf)/tau_r;
  const double dr_dt_linearized = -1./tau_r;
  states[STATE_r] = (expm1(dt*dr_dt_linearized))*dr_dt/dr_dt_linearized + r;

  // Expressions for the Sodium potassium pump current component
  const double i_NaK = K_o*P_NaK*Na_i/((K_mNa + Na_i)*(K_mk + K_o)*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T))));

  // Expressions for the Sodium calcium exchanger current component
  const double i_NaCa = K_NaCa*(Ca_o*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T)) -
    alpha*(Na_o*Na_o*Na_o)*Ca_i*exp(F*(-1. + gamma)*V/(R*T)))/((1. +
    K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));

  // Expressions for the Calcium pump current component
  const double i_p_Ca = g_pCa*Ca_i/(K_pCa + Ca_i);

  // Expressions for the Potassium pump current component
  const double i_p_K = g_pK*(-E_K + V)/(1. +
    65.4052157419383*exp(-0.167224080267559*V));

  // Expressions for the Calcium dynamics component
  const double i_up = Vmax_up/(1. + (K_up*K_up)/(Ca_i*Ca_i));
  const double i_leak = V_leak*(-Ca_i + Ca_SR);
  const double i_xfer = V_xfer*(-Ca_i + Ca_ss);
  const double kcasr = max_sr - (max_sr - min_sr)/(1. + (EC*EC)/(Ca_SR*Ca_SR));
  const double Ca_i_bufc = 1.0/(1. + Buf_c*K_buf_c/((K_buf_c + Ca_i)*(K_buf_c
    + Ca_i)));
  const double Ca_sr_bufsr = 1.0/(1. + Buf_sr*K_buf_sr/((K_buf_sr +
    Ca_SR)*(K_buf_sr + Ca_SR)));
  const double Ca_ss_bufss = 1.0/(1. + Buf_ss*K_buf_ss/((K_buf_ss +
    Ca_ss)*(K_buf_ss + Ca_ss)));
  const double dCa_i_dt = (V_sr*(-i_up + i_leak)/V_c - Cm*(-2.*i_NaCa +
    i_b_Ca + i_p_Ca)/(2.*F*V_c) + i_xfer)*Ca_i_bufc;
  const double dCa_i_bufc_dCa_i = 2.*Buf_c*K_buf_c/(((1. +
    Buf_c*K_buf_c/((K_buf_c + Ca_i)*(K_buf_c + Ca_i)))*(1. +
    Buf_c*K_buf_c/((K_buf_c + Ca_i)*(K_buf_c + Ca_i))))*((K_buf_c +
    Ca_i)*(K_buf_c + Ca_i)*(K_buf_c + Ca_i)));
  const double dE_Ca_dCa_i = -0.5*R*T/(F*Ca_i);
  const double di_NaCa_dCa_i = -K_NaCa*alpha*(Na_o*Na_o*Na_o)*exp(F*(-1. +
    gamma)*V/(R*T))/((1. + K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));
  const double di_p_Ca_dCa_i = g_pCa/(K_pCa + Ca_i) - g_pCa*Ca_i/((K_pCa +
    Ca_i)*(K_pCa + Ca_i));
  const double di_up_dCa_i = 2.*Vmax_up*(K_up*K_up)/(((1. +
    (K_up*K_up)/(Ca_i*Ca_i))*(1. +
    (K_up*K_up)/(Ca_i*Ca_i)))*(Ca_i*Ca_i*Ca_i));
  const double dCa_i_dt_linearized = (-V_xfer + V_sr*(-V_leak -
    di_up_dCa_i)/V_c - Cm*(-2.*di_NaCa_dCa_i - g_bca*dE_Ca_dCa_i +
    di_p_Ca_dCa_i)/(2.*F*V_c))*Ca_i_bufc + (V_sr*(-i_up + i_leak)/V_c -
    Cm*(-2.*i_NaCa + i_b_Ca + i_p_Ca)/(2.*F*V_c) + i_xfer)*dCa_i_bufc_dCa_i;
  states[STATE_Ca_i] = Ca_i + (fabs(dCa_i_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCa_i_dt_linearized))*dCa_i_dt/dCa_i_dt_linearized :
    dt*dCa_i_dt);
  const double k1 = k1_prime/kcasr;
  const double k2 = k2_prime*kcasr;
  const double O = (Ca_ss*Ca_ss)*R_prime*k1/(k3 + (Ca_ss*Ca_ss)*k1);
  const double dR_prime_dt = k4*(1. - R_prime) - Ca_ss*R_prime*k2;
  const double dR_prime_dt_linearized = -k4 - Ca_ss*k2;
  states[STATE_R_prime] = (fabs(dR_prime_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dR_prime_dt_linearized))*dR_prime_dt/dR_prime_dt_linearized :
    dt*dR_prime_dt) + R_prime;
  const double i_rel = V_rel*(-Ca_ss + Ca_SR)*O;
  const double dCa_SR_dt = (-i_leak - i_rel + i_up)*Ca_sr_bufsr;
  const double dCa_sr_bufsr_dCa_SR = 2.*Buf_sr*K_buf_sr/(((1. +
    Buf_sr*K_buf_sr/((K_buf_sr + Ca_SR)*(K_buf_sr + Ca_SR)))*(1. +
    Buf_sr*K_buf_sr/((K_buf_sr + Ca_SR)*(K_buf_sr + Ca_SR))))*((K_buf_sr +
    Ca_SR)*(K_buf_sr + Ca_SR)*(K_buf_sr + Ca_SR)));
  const double dO_dk1 = (Ca_ss*Ca_ss)*R_prime/(k3 + (Ca_ss*Ca_ss)*k1) -
    (((Ca_ss)*(Ca_ss))*((Ca_ss)*(Ca_ss)))*R_prime*k1/((k3 +
    (Ca_ss*Ca_ss)*k1)*(k3 + (Ca_ss*Ca_ss)*k1));
  const double dk1_dkcasr = -k1_prime/(kcasr*kcasr);
  const double dkcasr_dCa_SR = -2.*(EC*EC)*(max_sr - min_sr)/(((1. +
    (EC*EC)/(Ca_SR*Ca_SR))*(1. + (EC*EC)/(Ca_SR*Ca_SR)))*(Ca_SR*Ca_SR*Ca_SR));
  const double di_rel_dCa_SR = V_rel*O + V_rel*(-Ca_ss +
    Ca_SR)*dO_dk1*dk1_dkcasr*dkcasr_dCa_SR;
  const double di_rel_dO = V_rel*(-Ca_ss + Ca_SR);
  const double dCa_SR_dt_linearized = (-V_leak - di_rel_dCa_SR -
    dO_dk1*di_rel_dO*dk1_dkcasr*dkcasr_dCa_SR)*Ca_sr_bufsr + (-i_leak - i_rel
    + i_up)*dCa_sr_bufsr_dCa_SR;
  states[STATE_Ca_SR] = Ca_SR + (fabs(dCa_SR_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCa_SR_dt_linearized))*dCa_SR_dt/dCa_SR_dt_linearized :
    dt*dCa_SR_dt);
  const double dCa_ss_dt = (V_sr*i_rel/V_ss - V_c*i_xfer/V_ss -
    Cm*i_CaL/(2.*F*V_ss))*Ca_ss_bufss;
  const double dCa_ss_bufss_dCa_ss = 2.*Buf_ss*K_buf_ss/(((1. +
    Buf_ss*K_buf_ss/((K_buf_ss + Ca_ss)*(K_buf_ss + Ca_ss)))*(1. +
    Buf_ss*K_buf_ss/((K_buf_ss + Ca_ss)*(K_buf_ss + Ca_ss))))*((K_buf_ss +
    Ca_ss)*(K_buf_ss + Ca_ss)*(K_buf_ss + Ca_ss)));
  const double dO_dCa_ss = -2.*(Ca_ss*Ca_ss*Ca_ss)*(k1*k1)*R_prime/((k3 +
    (Ca_ss*Ca_ss)*k1)*(k3 + (Ca_ss*Ca_ss)*k1)) + 2.*Ca_ss*R_prime*k1/(k3 +
    (Ca_ss*Ca_ss)*k1);
  const double di_CaL_dCa_ss =
    1.0*g_CaL*(F*F)*V_eff*d*exp(2.*F*V_eff/(R*T))*f*f2*fCass/(R*T*(expm1(2.*F*V_eff/(R*T))));
  const double di_rel_dCa_ss = -V_rel*O + V_rel*(-Ca_ss + Ca_SR)*dO_dCa_ss;
  const double dCa_ss_dt_linearized = (V_sr*(dO_dCa_ss*di_rel_dO +
    di_rel_dCa_ss)/V_ss - V_c*V_xfer/V_ss -
    Cm*di_CaL_dCa_ss/(2.*F*V_ss))*Ca_ss_bufss + (V_sr*i_rel/V_ss -
    V_c*i_xfer/V_ss - Cm*i_CaL/(2.*F*V_ss))*dCa_ss_bufss_dCa_ss;
  states[STATE_Ca_ss] = Ca_ss + (fabs(dCa_ss_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dCa_ss_dt_linearized))*dCa_ss_dt/dCa_ss_dt_linearized :
    dt*dCa_ss_dt);

  // Expressions for the Sodium dynamics component
  const double dNa_i_dt = Cm*(-i_Na - i_b_Na - 3.*i_NaCa - 3.*i_NaK)/(F*V_c);
  const double dE_Na_dNa_i = -R*T/(F*Na_i);
  const double di_Na_dE_Na = -g_Na*(m*m*m)*h*j;
  const double di_NaCa_dNa_i =
    3.*Ca_o*K_NaCa*(Na_i*Na_i)*exp(F*gamma*V/(R*T))/((1. + K_sat*exp(F*(-1. +
    gamma)*V/(R*T)))*(Ca_o + Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) +
    (Na_o*Na_o*Na_o)));
  const double di_NaK_dNa_i = K_o*P_NaK/((K_mNa + Na_i)*(K_mk + K_o)*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T)))) -
    K_o*P_NaK*Na_i/(((K_mNa + Na_i)*(K_mNa + Na_i))*(K_mk + K_o)*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T))));
  const double dNa_i_dt_linearized = Cm*(-3.*di_NaCa_dNa_i - 3.*di_NaK_dNa_i
    + g_bna*dE_Na_dNa_i - dE_Na_dNa_i*di_Na_dE_Na)/(F*V_c);
  states[STATE_Na_i] = Na_i + (fabs(dNa_i_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dNa_i_dt_linearized))*dNa_i_dt/dNa_i_dt_linearized :
    dt*dNa_i_dt);

  // Expressions for the Membrane component
  const double i_Stim = (t - stim_period*floor(t/stim_period) <=
    stim_duration + stim_start && t - stim_period*floor(t/stim_period) >=
    stim_start ? -stim_amplitude : 0.);
  const double dV_dt = -i_CaL - i_K1 - i_Kr - i_Ks - i_Na - i_NaCa - i_NaK -
    i_Stim - i_b_Ca - i_b_Na - i_p_Ca - i_p_K - i_to;
  const double dV_eff_dV = (fabs(-15. + V) < 0.01 ? 0. : 1.);
  const double dalpha_K1_dV = -3.68652741199693e-8*exp(0.06*V -
    0.06*E_K)/((1. + 6.14421235332821e-6*exp(0.06*V - 0.06*E_K))*(1. +
    6.14421235332821e-6*exp(0.06*V - 0.06*E_K)));
  const double dbeta_K1_dV = (0.000612120804016053*exp(0.0002*V - 0.0002*E_K)
    + 0.0367879441171442*exp(0.1*V - 0.1*E_K))/(1. + exp(0.5*E_K - 0.5*V)) +
    0.5*(0.367879441171442*exp(0.1*V - 0.1*E_K) +
    3.06060402008027*exp(0.0002*V - 0.0002*E_K))*exp(0.5*E_K - 0.5*V)/((1. +
    exp(0.5*E_K - 0.5*V))*(1. + exp(0.5*E_K - 0.5*V)));
  const double di_CaL_dV_eff = 4.*g_CaL*(F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*V_eff/(R*T)))*d*f*f2*fCass/(R*T*(expm1(2.*F*V_eff/(R*T))))
    - 8.*g_CaL*(F*F*F)*(-Ca_o +
    0.25*Ca_ss*exp(2.*F*V_eff/(R*T)))*V_eff*d*exp(2.*F*V_eff/(R*T))*f*f2*fCass/((R*R)*(T*T)*((expm1(2.*F*V_eff/(R*T)))*(expm1(2.*F*V_eff/(R*T)))))
    +
    2.0*g_CaL*(F*F*F)*Ca_ss*V_eff*d*exp(2.*F*V_eff/(R*T))*f*f2*fCass/((R*R)*(T*T)*(expm1(2.*F*V_eff/(R*T))));
  const double dxK1_inf_dalpha_K1 = 1.0/(alpha_K1 + beta_K1) -
    alpha_K1/((alpha_K1 + beta_K1)*(alpha_K1 + beta_K1));
  const double dxK1_inf_dbeta_K1 = -alpha_K1/((alpha_K1 + beta_K1)*(alpha_K1 +
    beta_K1));
  const double di_K1_dV = 0.430331482911935*g_K1*sqrt(K_o)*xK1_inf +
    0.430331482911935*g_K1*sqrt(K_o)*(-E_K +
    V)*(dalpha_K1_dV*dxK1_inf_dalpha_K1 + dbeta_K1_dV*dxK1_inf_dbeta_K1);
  const double di_K1_dxK1_inf = 0.430331482911935*g_K1*sqrt(K_o)*(-E_K + V);
  const double di_Kr_dV = 0.430331482911935*g_Kr*sqrt(K_o)*Xr1*Xr2;
  const double di_Ks_dV = g_Ks*(Xs*Xs);
  const double di_Na_dV = g_Na*(m*m*m)*h*j;
  const double di_NaCa_dV =
    K_NaCa*(Ca_o*F*gamma*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T))/(R*T) -
    F*alpha*(Na_o*Na_o*Na_o)*(-1. + gamma)*Ca_i*exp(F*(-1. +
    gamma)*V/(R*T))/(R*T))/((1. + K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o))) - F*K_NaCa*K_sat*(-1.
    + gamma)*(Ca_o*(Na_i*Na_i*Na_i)*exp(F*gamma*V/(R*T)) -
    alpha*(Na_o*Na_o*Na_o)*Ca_i*exp(F*(-1. + gamma)*V/(R*T)))*exp(F*(-1. +
    gamma)*V/(R*T))/(R*T*((1. + K_sat*exp(F*(-1. + gamma)*V/(R*T)))*(1. +
    K_sat*exp(F*(-1. + gamma)*V/(R*T))))*(Ca_o +
    Km_Ca)*((Km_Nai*Km_Nai*Km_Nai) + (Na_o*Na_o*Na_o)));
  const double di_NaK_dV = K_o*P_NaK*(0.0353*F*exp(-F*V/(R*T))/(R*T) +
    0.01245*F*exp(-0.1*F*V/(R*T))/(R*T))*Na_i/((K_mNa + Na_i)*(K_mk +
    K_o)*((1. + 0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T)))*(1. +
    0.0353*exp(-F*V/(R*T)) + 0.1245*exp(-0.1*F*V/(R*T)))));
  const double di_p_K_dV = g_pK/(1. +
    65.4052157419383*exp(-0.167224080267559*V)) + 10.9373270471469*g_pK*(-E_K
    + V)*exp(-0.167224080267559*V)/((1. +
    65.4052157419383*exp(-0.167224080267559*V))*(1. +
    65.4052157419383*exp(-0.167224080267559*V)));
  const double di_to_dV = g_to*r*s;
  const double dV_dt_linearized = -g_bca - g_bna - di_K1_dV - di_Kr_dV -
    di_Ks_dV - di_NaCa_dV - di_NaK_dV - di_Na_dV - di_p_K_dV - di_to_dV -
    (dalpha_K1_dV*dxK1_inf_dalpha_K1 +
    dbeta_K1_dV*dxK1_inf_dbeta_K1)*di_K1_dxK1_inf - dV_eff_dV*di_CaL_dV_eff;
  states[STATE_V] = (fabs(dV_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dV_dt_linearized))*dV_dt/dV_dt_linearized : dt*dV_dt) + V;

  // Expressions for the Potassium dynamics component
  const double dK_i_dt = Cm*(-i_K1 - i_Kr - i_Ks - i_Stim - i_p_K - i_to +
    2.*i_NaK)/(F*V_c);
  const double dE_K_dK_i = -R*T/(F*K_i);
  const double dE_Ks_dK_i = -R*T/(F*(P_kna*Na_i + K_i));
  const double dalpha_K1_dE_K = 3.68652741199693e-8*exp(0.06*V -
    0.06*E_K)/((1. + 6.14421235332821e-6*exp(0.06*V - 0.06*E_K))*(1. +
    6.14421235332821e-6*exp(0.06*V - 0.06*E_K)));
  const double dbeta_K1_dE_K = (-0.000612120804016053*exp(0.0002*V -
    0.0002*E_K) - 0.0367879441171442*exp(0.1*V - 0.1*E_K))/(1. + exp(0.5*E_K
    - 0.5*V)) - 0.5*(0.367879441171442*exp(0.1*V - 0.1*E_K) +
    3.06060402008027*exp(0.0002*V - 0.0002*E_K))*exp(0.5*E_K - 0.5*V)/((1. +
    exp(0.5*E_K - 0.5*V))*(1. + exp(0.5*E_K - 0.5*V)));
  const double di_K1_dE_K = -0.430331482911935*g_K1*sqrt(K_o)*xK1_inf +
    0.430331482911935*g_K1*sqrt(K_o)*(-E_K +
    V)*(dalpha_K1_dE_K*dxK1_inf_dalpha_K1 + dbeta_K1_dE_K*dxK1_inf_dbeta_K1);
  const double di_Kr_dE_K = -0.430331482911935*g_Kr*sqrt(K_o)*Xr1*Xr2;
  const double di_Ks_dE_Ks = -g_Ks*(Xs*Xs);
  const double di_p_K_dE_K = -g_pK/(1. +
    65.4052157419383*exp(-0.167224080267559*V));
  const double di_to_dE_K = -g_to*r*s;
  const double dK_i_dt_linearized =
    Cm*(-(dE_K_dK_i*dalpha_K1_dE_K*dxK1_inf_dalpha_K1 +
    dE_K_dK_i*dbeta_K1_dE_K*dxK1_inf_dbeta_K1)*di_K1_dxK1_inf -
    dE_K_dK_i*di_K1_dE_K - dE_K_dK_i*di_Kr_dE_K - dE_K_dK_i*di_p_K_dE_K -
    dE_K_dK_i*di_to_dE_K - dE_Ks_dK_i*di_Ks_dE_Ks)/(F*V_c);
  states[STATE_K_i] = K_i + (fabs(dK_i_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dK_i_dt_linearized))*dK_i_dt/dK_i_dt_linearized : dt*dK_i_dt);
}
