#include "globvars.h"

// Global variables
char gNet_player_name[32];
br_matrix34 gRearview_camera_to_world;
tSpecial_volume gDefault_default_water_spec_vol;
br_matrix34 gCamera_to_world;
tRace_list_spec gRace_list[100];
tPath_name gApplication_path;
tU32 gI_am_cheating;
float gPinball_factor;
float gOpponent_speed_factor;
float gCar_crush_min_fold;
float gNet_recovery_cost[7];
float gCar_crush_softness;
br_vector3 gDisabled_vector;
br_vector3 *gOur_pos;
float gCar_crush_max_fold;
tBrender_storage gNet_cars_storage_space;
float gNet_softness[7];
tS32 gJoystick_deadzone;
float gCar_crush_limit_deviant;
float gNet_offensive[7];
float gCar_crush_split_chance;
float gGravity_multiplier;
float gCar_crush_wibble;
float gRepair_cost[3];
float gCop_speed_factor;
float gDefault_gravity;
tU32 gKeys_pressed;
tSpecial_volume *gDefault_water_spec_vol;
float gNet_repair_cost[7];
br_font *gFont_7;
tU32 gLast_replay_frame_time;
tU32 gTag_start_time;
tOpponent *gOpponents;
tU32 gLast_credit_tick;
tBrender_storage gTheir_cars_storage_space;
br_font *gHeadup_font;
tSave_game *gPre_race_saved_game;
tU32 gRace_finished;
FILE *gDiagnostic_file;
tU32 gFrame_start_time;
tProgram_state gProgram_state;
tU32 gCredit_period_single[3];
tU32 gRace_start;
tBrender_storage gTrack_storage_space;
br_scalar gYon_multiplier;
tU32 gFrame_period;
tU32 gCredit_period;
tU32 gCredit_period_network[7];
tBrender_storage gOur_car_storage_space;
tU32 gFox_start_time;
br_font *gBig_font;
tBrender_storage gPedestrians_storage_space;
tRace_info gCurrent_race;
br_scalar gCut_delay_4;
br_actor *gSelf;
br_scalar gCut_delay_1;
br_scalar gCut_delay_2;
br_actor *gDont_render_actor;
br_scalar gCut_delay_3;
br_pixelmap *gScreen;
br_pixelmap *gRender_screen;
br_actor *gRearview_camera;
br_scalar gCamera_hither;
br_pixelmap *gRearview_screen;
br_pixelmap *gBack_screen;
br_scalar gCamera_angle;
br_pixelmap *gDigits_pix;
br_pixelmap *gRender_shade_table;
br_pixelmap *gRearview_depth_buffer;
br_pixelmap *gWhole_screen;
br_pixelmap *gIcons_pix;
br_scalar gCamera_yon;
br_actor *gCamera;
br_actor *gArrow_actor;
br_pixelmap *gIcons_pix_low_res;
br_pixelmap *gDepth_buffer;
int gSound_override;
int gAustere_override;
int gInitial_net_credits[5];
float gCar_cred_value[3];
int gNo_races_yet;
int gDefault_engine_noise_index;
int gGame_to_load;
int gJump_start_fine[3];
int gSausage_override;
int gAusterity_mode;
int gReal_graf_data_index;
float gCar_time_value[3];
int gTyping_slot;
int gCunning_stunt_bonus[3];
int gKnobbled_frame_period;
int gCD_is_in_drive;
int gInterface_within_race_mode;
br_actor *gNon_track_actor;
int gCut_scene_override;
int gKey_map_index;
int gWait_for_it;
int gCheck_point_cash[3];
int gPoints_per_second[3];
br_actor *gUniverse_actor;
br_actor *gTrack_actor;
int gMap_mode;
int gPed_time_value[3];
int gHost_abandon_game;
int gAbandon_game;
int gLap;
int gShow_opponents;
int gPipe_reg_snap_before_new_game;
int gTotal_laps;
int gDisallow_abandon_race;
int gFree_repairs;
int gFreeze_timer;
int gRoll_over_creds[3];
int gShow_peds_on_map;
int gOn_drugs;
int gWasted_time[3];
int gAction_replay_mode;
int gPipe_reg_snap_after_our_car;
int gRecover_car;
int gCheckpoint;
int gRoll_over_time[3];
int gPipe_reg_snap_before_our_car;
int gWasted_creds[3];
int gTimer;
int gCheckpoint_count;
int gCountdown;
int gFrame_rate;
int gNumber_of_racers;
int gSound_enabled;
int gInfo_on;
int gGraf_spec_index;
int gTyping;
int gSound_available;
int gNumber_of_races;
int gArrow_mode;
char gDir_separator[3];

