#include <math.h>
#include <string.h>
// Gotran generated C/C++ code for the "noble_1962_version04" model

enum state {
  STATE_m,
  STATE_h,
  STATE_n,
  STATE_V,
  NUM_STATES,
};

enum parameter {
  PARAM_E_Na,
  PARAM_g_Na_max,
  PARAM_E_L,
  PARAM_g_L,
  PARAM_Cm,
  NUM_PARAMS,
};

enum monitored {
  MONITOR_g_Na,
  MONITOR_i_Na,
  MONITOR_alpha_m,
  MONITOR_beta_m,
  MONITOR_alpha_h,
  MONITOR_beta_h,
  MONITOR_g_K1,
  MONITOR_g_K2,
  MONITOR_i_K,
  MONITOR_alpha_n,
  MONITOR_beta_n,
  MONITOR_i_Leak,
  MONITOR_dm_dt,
  MONITOR_dh_dt,
  MONITOR_dn_dt,
  MONITOR_dV_dt,
  NUM_MONITORED,
};

// Init state values
void init_state_values(double* states)
{
  states[STATE_m] = 0.01;
  states[STATE_h] = 0.8;
  states[STATE_n] = 0.01;
  states[STATE_V] = -87.0;
}

// Default parameter values
void init_parameters_values(double* parameters)
{
  parameters[PARAM_E_Na] = 40.0;
  parameters[PARAM_g_Na_max] = 400000.0;
  parameters[PARAM_E_L] = -60.0;
  parameters[PARAM_g_L] = 75.0;
  parameters[PARAM_Cm] = 12.0;
}

// State index
int state_index(const char name[])
{
  if (strcmp(name, "m")==0)
  {
    return STATE_m;
  }
  else if (strcmp(name, "h")==0)
  {
    return STATE_h;
  }
  else if (strcmp(name, "n")==0)
  {
    return STATE_n;
  }
  else if (strcmp(name, "V")==0)
  {
    return STATE_V;
  }
  return -1;
}

// Parameter index
int parameter_index(const char name[])
{
  if (strcmp(name, "E_Na")==0)
  {
    return PARAM_E_Na;
  }
  else if (strcmp(name, "g_Na_max")==0)
  {
    return PARAM_g_Na_max;
  }
  else if (strcmp(name, "E_L")==0)
  {
    return PARAM_E_L;
  }
  else if (strcmp(name, "g_L")==0)
  {
    return PARAM_g_L;
  }
  else if (strcmp(name, "Cm")==0)
  {
    return PARAM_Cm;
  }
  return -1;
}

int monitored_index(const char name[])
{
  if (strcmp(name, "g_Na")==0)
  {
    return MONITOR_g_Na;
  }
  else if (strcmp(name, "i_Na")==0)
  {
    return MONITOR_i_Na;
  }
  else if (strcmp(name, "alpha_m")==0)
  {
    return MONITOR_alpha_m;
  }
  else if (strcmp(name, "beta_m")==0)
  {
    return MONITOR_beta_m;
  }
  else if (strcmp(name, "alpha_h")==0)
  {
    return MONITOR_alpha_h;
  }
  else if (strcmp(name, "beta_h")==0)
  {
    return MONITOR_beta_h;
  }
  else if (strcmp(name, "g_K1")==0)
  {
    return MONITOR_g_K1;
  }
  else if (strcmp(name, "g_K2")==0)
  {
    return MONITOR_g_K2;
  }
  else if (strcmp(name, "i_K")==0)
  {
    return MONITOR_i_K;
  }
  else if (strcmp(name, "alpha_n")==0)
  {
    return MONITOR_alpha_n;
  }
  else if (strcmp(name, "beta_n")==0)
  {
    return MONITOR_beta_n;
  }
  else if (strcmp(name, "i_Leak")==0)
  {
    return MONITOR_i_Leak;
  }
  else if (strcmp(name, "dm_dt")==0)
  {
    return MONITOR_dm_dt;
  }
  else if (strcmp(name, "dh_dt")==0)
  {
    return MONITOR_dh_dt;
  }
  else if (strcmp(name, "dn_dt")==0)
  {
    return MONITOR_dn_dt;
  }
  else if (strcmp(name, "dV_dt")==0)
  {
    return MONITOR_dV_dt;
  }
  return -1;
}

// Compute the right hand side of the noble_1962_version04 ODE
void rhs(const double *__restrict states, const double t, const double
  *__restrict parameters, double* values)
{

  // Assign states
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double n = states[STATE_n];
  const double V = states[STATE_V];

  // Assign parameters
  const double E_Na = parameters[PARAM_E_Na];
  const double g_Na_max = parameters[PARAM_g_Na_max];
  const double E_L = parameters[PARAM_E_L];
  const double g_L = parameters[PARAM_g_L];
  const double Cm = parameters[PARAM_Cm];

  // Expressions for the Sodium channel component
  const double g_Na = g_Na_max*(m*m*m)*h;
  const double i_Na = (140. + g_Na)*(-E_Na + V);

  // Expressions for the m gate component
  const double alpha_m = (-4800. - 100.*V)/(expm1(-16./5. - V/15.));
  const double beta_m = (960. + 120.*V)/(expm1(8./5. + V/5.));
  values[STATE_m] = (1. - m)*alpha_m - beta_m*m;

  // Expressions for the h gate component
  const double alpha_h = 170.*exp(-9./2. - V/20.);
  const double beta_h = 1000./(1. + exp(-21./5. - V/10.));
  values[STATE_h] = (1. - h)*alpha_h - beta_h*h;

  // Expressions for the Potassium channel component
  const double g_K1 = 15.*exp(3./2. + V/60.) + 1200.*exp(-9./5. - V/50.);
  const double g_K2 = 1200.*(((n)*(n))*((n)*(n)));
  const double i_K = (100. + V)*(g_K1 + g_K2);

  // Expressions for the n gate component
  const double alpha_n = (-5.0 - 0.1*V)/(expm1(-5. - V/10.));
  const double beta_n = 2.*exp(-9./8. - V/80.);
  values[STATE_n] = (1. - n)*alpha_n - beta_n*n;

  // Expressions for the Leakage current component
  const double i_Leak = g_L*(-E_L + V);

  // Expressions for the Membrane component
  values[STATE_V] = (-i_K - i_Leak - i_Na)/Cm;
}

// Computes monitored expressions of the noble_1962_version04 ODE
void monitor(const double *__restrict states, const double t, const double
  *__restrict parameters, double* monitored)
{

  // Assign states
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double n = states[STATE_n];
  const double V = states[STATE_V];

  // Assign parameters
  const double E_Na = parameters[PARAM_E_Na];
  const double g_Na_max = parameters[PARAM_g_Na_max];
  const double E_L = parameters[PARAM_E_L];
  const double g_L = parameters[PARAM_g_L];
  const double Cm = parameters[PARAM_Cm];

  // Expressions for the Sodium channel component
  monitored[MONITOR_g_Na] = g_Na_max*(m*m*m)*h;
  monitored[MONITOR_i_Na] = (140. + monitored[0])*(-E_Na + V);

  // Expressions for the m gate component
  monitored[MONITOR_alpha_m] = (-4800. - 100.*V)/(expm1(-16./5. - V/15.));
  monitored[MONITOR_beta_m] = (960. + 120.*V)/(expm1(8./5. + V/5.));
  monitored[MONITOR_dm_dt] = (1. - m)*monitored[2] - m*monitored[3];

  // Expressions for the h gate component
  monitored[MONITOR_alpha_h] = 170.*exp(-9./2. - V/20.);
  monitored[MONITOR_beta_h] = 1000./(1. + exp(-21./5. - V/10.));
  monitored[MONITOR_dh_dt] = (1. - h)*monitored[4] - h*monitored[5];

  // Expressions for the Potassium channel component
  monitored[MONITOR_g_K1] = 15.*exp(3./2. + V/60.) + 1200.*exp(-9./5. - V/50.);
  monitored[MONITOR_g_K2] = 1200.*(((n)*(n))*((n)*(n)));
  monitored[MONITOR_i_K] = (100. + V)*(monitored[6] + monitored[7]);

  // Expressions for the n gate component
  monitored[MONITOR_alpha_n] = (-5.0 - 0.1*V)/(expm1(-5. - V/10.));
  monitored[MONITOR_beta_n] = 2.*exp(-9./8. - V/80.);
  monitored[MONITOR_dn_dt] = (1. - n)*monitored[9] - monitored[10]*n;

  // Expressions for the Leakage current component
  monitored[MONITOR_i_Leak] = g_L*(-E_L + V);

  // Expressions for the Membrane component
  monitored[MONITOR_dV_dt] = (-monitored[11] - monitored[1] - monitored[8])/Cm;
}

// Compute a forward step using the explicit Euler scheme to the
// noble_1962_version04 ODE
void forward_explicit_euler(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double n = states[STATE_n];
  const double V = states[STATE_V];

  // Assign parameters
  const double E_Na = parameters[PARAM_E_Na];
  const double g_Na_max = parameters[PARAM_g_Na_max];
  const double E_L = parameters[PARAM_E_L];
  const double g_L = parameters[PARAM_g_L];
  const double Cm = parameters[PARAM_Cm];

  // Expressions for the Sodium channel component
  const double g_Na = g_Na_max*(m*m*m)*h;
  const double i_Na = (140. + g_Na)*(-E_Na + V);

  // Expressions for the m gate component
  const double alpha_m = (-4800. - 100.*V)/(expm1(-16./5. - V/15.));
  const double beta_m = (960. + 120.*V)/(expm1(8./5. + V/5.));
  const double dm_dt = (1. - m)*alpha_m - beta_m*m;
  states[STATE_m] = dt*dm_dt + m;

  // Expressions for the h gate component
  const double alpha_h = 170.*exp(-9./2. - V/20.);
  const double beta_h = 1000./(1. + exp(-21./5. - V/10.));
  const double dh_dt = (1. - h)*alpha_h - beta_h*h;
  states[STATE_h] = dt*dh_dt + h;

  // Expressions for the Potassium channel component
  const double g_K1 = 15.*exp(3./2. + V/60.) + 1200.*exp(-9./5. - V/50.);
  const double g_K2 = 1200.*(((n)*(n))*((n)*(n)));
  const double i_K = (100. + V)*(g_K1 + g_K2);

  // Expressions for the n gate component
  const double alpha_n = (-5.0 - 0.1*V)/(expm1(-5. - V/10.));
  const double beta_n = 2.*exp(-9./8. - V/80.);
  const double dn_dt = (1. - n)*alpha_n - beta_n*n;
  states[STATE_n] = dt*dn_dt + n;

  // Expressions for the Leakage current component
  const double i_Leak = g_L*(-E_L + V);

  // Expressions for the Membrane component
  const double dV_dt = (-i_K - i_Leak - i_Na)/Cm;
  states[STATE_V] = dt*dV_dt + V;
}

// Compute a forward step using the Rush-Larsen scheme to the
// noble_1962_version04 ODE
void forward_rush_larsen(double *__restrict states, const double t, const
  double dt, const double *__restrict parameters)
{

  // Assign states
  const double m = states[STATE_m];
  const double h = states[STATE_h];
  const double n = states[STATE_n];
  const double V = states[STATE_V];

  // Assign parameters
  const double E_Na = parameters[PARAM_E_Na];
  const double g_Na_max = parameters[PARAM_g_Na_max];
  const double E_L = parameters[PARAM_E_L];
  const double g_L = parameters[PARAM_g_L];
  const double Cm = parameters[PARAM_Cm];

  // Expressions for the Sodium channel component
  const double g_Na = g_Na_max*(m*m*m)*h;
  const double i_Na = (140. + g_Na)*(-E_Na + V);

  // Expressions for the m gate component
  const double alpha_m = (-4800. - 100.*V)/(expm1(-16./5. - V/15.));
  const double beta_m = (960. + 120.*V)/(expm1(8./5. + V/5.));
  const double dm_dt = (1. - m)*alpha_m - beta_m*m;
  const double dm_dt_linearized = -alpha_m - beta_m;
  states[STATE_m] = (fabs(dm_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dm_dt_linearized))*dm_dt/dm_dt_linearized : dt*dm_dt) + m;

  // Expressions for the h gate component
  const double alpha_h = 170.*exp(-9./2. - V/20.);
  const double beta_h = 1000./(1. + exp(-21./5. - V/10.));
  const double dh_dt = (1. - h)*alpha_h - beta_h*h;
  const double dh_dt_linearized = -alpha_h - beta_h;
  states[STATE_h] = (fabs(dh_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dh_dt_linearized))*dh_dt/dh_dt_linearized : dt*dh_dt) + h;

  // Expressions for the Potassium channel component
  const double g_K1 = 15.*exp(3./2. + V/60.) + 1200.*exp(-9./5. - V/50.);
  const double g_K2 = 1200.*(((n)*(n))*((n)*(n)));
  const double i_K = (100. + V)*(g_K1 + g_K2);

  // Expressions for the n gate component
  const double alpha_n = (-5.0 - 0.1*V)/(expm1(-5. - V/10.));
  const double beta_n = 2.*exp(-9./8. - V/80.);
  const double dn_dt = (1. - n)*alpha_n - beta_n*n;
  const double dn_dt_linearized = -alpha_n - beta_n;
  states[STATE_n] = (fabs(dn_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dn_dt_linearized))*dn_dt/dn_dt_linearized : dt*dn_dt) + n;

  // Expressions for the Leakage current component
  const double i_Leak = g_L*(-E_L + V);

  // Expressions for the Membrane component
  const double dV_dt = (-i_K - i_Leak - i_Na)/Cm;
  const double dg_K1_dV = -24.*exp(-9./5. - V/50.) + exp(3./2. + V/60.)/4.;
  const double di_K_dV = (100. + V)*dg_K1_dV + g_K1 + g_K2;
  const double dV_dt_linearized = (-140. - g_L - di_K_dV - g_Na - (100. +
    V)*dg_K1_dV)/Cm;
  states[STATE_V] = (fabs(dV_dt_linearized) > 1.0e-8 ?
    (expm1(dt*dV_dt_linearized))*dV_dt/dV_dt_linearized : dt*dV_dt) + V;
}
