/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
SpriteMappings.h
	Mappings (in SDL_Rect structs) of 1943 NES sprites
History
	04/02/14	Jon Richelsen	Add majority of sprites
To Do
	Add remaining sprites
	Remap sprites and check that mappings are identical using diff
*/
#ifndef SPRITEMAPPINGS_H
#define SPRITEMAPPINGS_H

#include "SDL/SDL.h"

/*
Created with SpriteClip 14.03.1-3
Jon Richelsen (jrichelsen@gmail.com)
Visit me at jonrichelsen.com
Takes user-inputted name and coordinates for sprites and formats them into SDL_Rect structs
*/

struct SpriteMappings {

SDL_Rect rect_plyr_hlthy_fRollLeft; //sprite of healthy player full roll left
rect_plyr_hlthy_fRollLeft.x = 15;
rect_plyr_hlthy_fRollLeft.y = 28;
rect_plyr_hlthy_fRollLeft.w = 16;
rect_plyr_hlthy_fRollLeft.h = 16;

SDL_Rect rect_plyr_hlthy_hRollLeft; //sprite of healthy player half roll left
rect_plyr_hlthy_hRollLeft.x = 38;
rect_plyr_hlthy_hRollLeft.y = 28;
rect_plyr_hlthy_hRollLeft.w = 20;
rect_plyr_hlthy_hRollLeft.h = 16;

SDL_Rect rect_plyr_hlthy_straight; //sprite of healthy player straight
rect_plyr_hlthy_straight.x = 65;
rect_plyr_hlthy_straight.y = 28;
rect_plyr_hlthy_straight.w = 24;
rect_plyr_hlthy_straight.h = 16;

SDL_Rect rect_plyr_hlthy_hRollRight; //sprite of healthy player half roll right
rect_plyr_hlthy_hRollRight.x = 96;
rect_plyr_hlthy_hRollRight.y = 28;
rect_plyr_hlthy_hRollRight.w = 20;
rect_plyr_hlthy_hRollRight.h = 16;

SDL_Rect rect_plyr_hlthy_fRollRight; //sprite of healthy player full roll right
rect_plyr_hlthy_fRollRight.x = 123;
rect_plyr_hlthy_fRollRight.y = 28;
rect_plyr_hlthy_fRollRight.w = 16;
rect_plyr_hlthy_fRollRight.h = 16;

SDL_Rect rect_plyr_dmgd_fRollLeft; //sprite of damaged player full roll left
rect_plyr_dmgd_fRollLeft.x = 14;
rect_plyr_dmgd_fRollLeft.y = 82;
rect_plyr_dmgd_fRollLeft.w = 16;
rect_plyr_dmgd_fRollLeft.h = 16;

SDL_Rect rect_plyr_dmgd_hRollLeft; //sprite of damaged player half roll left
rect_plyr_dmgd_hRollLeft.x = 37;
rect_plyr_dmgd_hRollLeft.y = 82;
rect_plyr_dmgd_hRollLeft.w = 20;
rect_plyr_dmgd_hRollLeft.h = 16;

SDL_Rect rect_plyr_dmgd_straight; //sprite of damaged player straight
rect_plyr_dmgd_straight.x = 64;
rect_plyr_dmgd_straight.y = 82;
rect_plyr_dmgd_straight.w = 24;
rect_plyr_dmgd_straight.h = 16;

SDL_Rect rect_plyr_dmgd_hRollRight; //sprite of damaged player half roll right
rect_plyr_dmgd_hRollRight.x = 95;
rect_plyr_dmgd_hRollRight.y = 82;
rect_plyr_dmgd_hRollRight.w = 20;
rect_plyr_dmgd_hRollRight.h = 16;

SDL_Rect rect_plyr_dmgd_fRollRight; //sprite of damaged player full roll right
rect_plyr_dmgd_fRollRight.x = 122;
rect_plyr_dmgd_fRollRight.y = 82;
rect_plyr_dmgd_fRollRight.w = 16;
rect_plyr_dmgd_fRollRight.h = 16;

SDL_Rect rect_txt_0; //sprite of text “0”
rect_txt_0.x = 172;
rect_txt_0.y = 32;
rect_txt_0.w = 6;
rect_txt_0.h = 7;

SDL_Rect rect_txt_1; //sprite of text “1”
rect_txt_1.x = 189;
rect_txt_1.y = 32;
rect_txt_1.w = 4;
rect_txt_1.h = 7;

SDL_Rect rect_txt_2; //sprite of text “2”
rect_txt_2.x = 204;
rect_txt_2.y = 32;
rect_txt_2.w = 6;
rect_txt_2.h = 7;

SDL_Rect rect_txt_3; //sprite of text “3”
rect_txt_3.x = 220;
rect_txt_3.y = 32;
rect_txt_3.w = 6;
rect_txt_3.h = 7;

SDL_Rect rect_txt_4; //sprite of text “4”
rect_txt_4.x = 235;
rect_txt_4.y = 32;
rect_txt_4.w = 7;
rect_txt_4.h = 7;

SDL_Rect rect_txt_5; //sprite of text “5”
rect_txt_5.x = 252;
rect_txt_5.y = 32;
rect_txt_5.w = 6;
rect_txt_5.h = 7;

SDL_Rect rect_txt_6; //sprite of text “6”
rect_txt_6.x = 268;
rect_txt_6.y = 32;
rect_txt_6.w = 6;
rect_txt_6.h = 7;

SDL_Rect rect_txt_7; //sprite of text “7”
rect_txt_7.x = 284;
rect_txt_7.y = 32;
rect_txt_7.w = 6;
rect_txt_7.h = 7;

SDL_Rect rect_txt_8; //sprite of text “8”
rect_txt_8.x = 300;
rect_txt_8.y = 32;
rect_txt_8.w = 6;
rect_txt_8.h = 7;

SDL_Rect rect_txt_9; //sprite of text “9”
rect_txt_9.x = 316;
rect_txt_9.y = 32;
rect_txt_9.w = 6;
rect_txt_9.h = 7;

SDL_Rect rect_txt_A; //sprite of text “A”
rect_txt_A.x = 171;
rect_txt_A.y = 48;
rect_txt_A.w = 7;
rect_txt_A.h = 7;

SDL_Rect rect_txt_B; //sprite of text “B”
rect_txt_B.x = 187;
rect_txt_B.y = 48;
rect_txt_B.w = 7;
rect_txt_B.h = 7;

SDL_Rect rect_txt_C; //sprite of text “C”
rect_txt_C.x = 203;
rect_txt_C.y = 48;
rect_txt_C.w = 7;
rect_txt_C.h = 7;

SDL_Rect rect_txt_D; //sprite of text “D”
rect_txt_D.x = 219;
rect_txt_D.y = 48;
rect_txt_D.w = 7;
rect_txt_D.h = 7;

SDL_Rect rect_txt_E; //sprite of text “E”
rect_txt_E.x = 235;
rect_txt_E.y = 48;
rect_txt_E.w = 7;
rect_txt_E.h = 7;

SDL_Rect rect_txt_F; //sprite of text “F”
rect_txt_F.x = 251;
rect_txt_F.y = 48;
rect_txt_F.w = 7;
rect_txt_F.h = 7;

SDL_Rect rect_txt_G; //sprite of text “G”
rect_txt_G.x = 267;
rect_txt_G.y = 48;
rect_txt_G.w = 7;
rect_txt_G.h = 7;

SDL_Rect rect_txt_H; //sprite of text “H”
rect_txt_H.x = 283;
rect_txt_H.y = 48;
rect_txt_H.w = 7;
rect_txt_H.h = 7;

SDL_Rect rect_txt_I; //sprite of text “I”
rect_txt_I.x = 301;
rect_txt_I.y = 48;
rect_txt_I.w = 4;
rect_txt_I.h = 7;

SDL_Rect rect_txt_J; //sprite of text “J”
rect_txt_J.x = 315;
rect_txt_J.y = 48;
rect_txt_J.w = 7;
rect_txt_J.h = 7;

SDL_Rect rect_txt_K; //sprite of text “K”
rect_txt_K.x = 171;
rect_txt_K.y = 64;
rect_txt_K.w = 7;
rect_txt_K.h = 7;

SDL_Rect rect_txt_L; //sprite of text “L”
rect_txt_L.x = 187;
rect_txt_L.y = 64;
rect_txt_L.w = 7;
rect_txt_L.h = 7;

SDL_Rect rect_txt_M; //sprite of text “M”
rect_txt_M.x = 203;
rect_txt_M.y = 64;
rect_txt_M.w = 7;
rect_txt_M.h = 7;

SDL_Rect rect_txt_N; //sprite of text “N”
rect_txt_N.x = 219;
rect_txt_N.y = 64;
rect_txt_N.w = 7;
rect_txt_N.h = 7;

SDL_Rect rect_txt_O; //sprite of text “O”
rect_txt_O.x = 235;
rect_txt_O.y = 64;
rect_txt_O.w = 7;
rect_txt_O.h = 7;

SDL_Rect rect_txt_P; //sprite of text “P”
rect_txt_P.x = 251;
rect_txt_P.y = 64;
rect_txt_P.w = 7;
rect_txt_P.h = 7;

SDL_Rect rect_txt_Q; //sprite of text “Q”
rect_txt_Q.x = 267;
rect_txt_Q.y = 64;
rect_txt_Q.w = 7;
rect_txt_Q.h = 7;

SDL_Rect rect_txt_R; //sprite of text “R”
rect_txt_R.x = 283;
rect_txt_R.y = 64;
rect_txt_R.w = 7;
rect_txt_R.h = 7;

SDL_Rect rect_txt_S; //sprite of text “S”
rect_txt_S.x = 299;
rect_txt_S.y = 64;
rect_txt_S.w = 7;
rect_txt_S.h = 7;

SDL_Rect rect_txt_T; //sprite of text “T”
rect_txt_T.x = 315;
rect_txt_T.y = 64;
rect_txt_T.w = 7;
rect_txt_T.h = 7;

SDL_Rect rect_txt_U; //sprite of text “U”
rect_txt_U.x = 171;
rect_txt_U.y = 80;
rect_txt_U.w = 7;
rect_txt_U.h = 7;

SDL_Rect rect_txt_V; //sprite of text “V”
rect_txt_V.x = 187;
rect_txt_V.y = 80;
rect_txt_V.w = 7;
rect_txt_V.h = 7;

SDL_Rect rect_txt_W; //sprite of text “W”
rect_txt_W.x = 203;
rect_txt_W.y = 80;
rect_txt_W.w = 7;
rect_txt_W.h = 7;

SDL_Rect rect_txt_X; //sprite of text “X”
rect_txt_X.x = 219;
rect_txt_X.y = 80;
rect_txt_X.w = 7;
rect_txt_X.h = 7;

SDL_Rect rect_txt_Y; //sprite of text “Y”
rect_txt_Y.x = 235;
rect_txt_Y.y = 80;
rect_txt_Y.w = 7;
rect_txt_Y.h = 7;

SDL_Rect rect_txt_Z; //sprite of text “Z”
rect_txt_Z.x = 252;
rect_txt_Z.y = 80;
rect_txt_Z.w = 6;
rect_txt_Z.h = 7;

SDL_Rect rect_plyr_intr_1; //sprite of stage 1/7 of player intro sequence
rect_plyr_intr_1.x = 12;
rect_plyr_intr_1.y = 141;
rect_plyr_intr_1.w = 13;
rect_plyr_intr_1.h = 8;

SDL_Rect rect_plyr_intr_2; //sprite of stage 2/7 of player intro sequence
rect_plyr_intr_2.x = 39;
rect_plyr_intr_2.y = 141;
rect_plyr_intr_2.w = 21;
rect_plyr_intr_2.h = 13;

SDL_Rect rect_plyr_intr_3; //sprite of stage 3/7 of player intro sequence
rect_plyr_intr_3.x = 76;
rect_plyr_intr_3.y = 138;
rect_plyr_intr_3.w = 28;
rect_plyr_intr_3.h = 7;

SDL_Rect rect_plyr_intr_4; //sprite of stage 4/7 of player intro sequence
rect_plyr_intr_4.x = 119;
rect_plyr_intr_4.y = 139;
rect_plyr_intr_4.w = 30;
rect_plyr_intr_4.h = 6;

SDL_Rect rect_plyr_intr_5; //sprite of stage 5/7 of player intro sequence
rect_plyr_intr_5.x = 163;
rect_plyr_intr_5.y = 134;
rect_plyr_intr_5.w = 30;
rect_plyr_intr_5.h = 16;

SDL_Rect rect_plyr_intr_6; //sprite of stage 6/7 of player intro sequence
rect_plyr_intr_6.x = 205;
rect_plyr_intr_6.y = 132;
rect_plyr_intr_6.w = 28;
rect_plyr_intr_6.h = 16;

SDL_Rect rect_plyr_intr_7; //sprite of stage 7/7 of player intro sequence
rect_plyr_intr_7.x = 241;
rect_plyr_intr_7.y = 130;
rect_plyr_intr_7.w = 24;
rect_plyr_intr_7.h = 15;

SDL_Rect rect_attr_sel; //sprite of attribute selection arrow
rect_attr_sel.x = 442;
rect_attr_sel.y = 155;
rect_attr_sel.w = 7;
rect_attr_sel.h = 7;

SDL_Rect rect_attr_full; //sprite of full attribute level
rect_attr_full.x = 460;
rect_attr_full.y = 155;
rect_attr_full.w = 13;
rect_attr_full.h = 8;

SDL_Rect rect_attr_emp; //sprite of empty attribute level
rect_attr_emp.x = 476;
rect_attr_emp.y = 155;
rect_attr_emp.w = 13;
rect_attr_emp.h = 8;

SDL_Rect rect_blt_nrm; //sprite of normal bullet
rect_blt_nrm.x = 13;
rect_blt_nrm.y = 220;
rect_blt_nrm.w = 2;
rect_blt_nrm.h = 14;

SDL_Rect rect_blt_opn; //sprite of open circle bullet
rect_blt_opn.x = 40;
rect_blt_opn.y = 223;
rect_blt_opn.w = 8;
rect_blt_opn.h = 8;

SDL_Rect rect_blt_rnd; //sprite of rounded bullet
rect_blt_rnd.x = 61;
rect_blt_rnd.y = 220;
rect_blt_rnd.w = 3;
rect_blt_rnd.h = 16;

SDL_Rect rect_blt_clsd; //sprite of closed circle bullet
rect_blt_clsd.x = 85;
rect_blt_clsd.y = 225;
rect_blt_clsd.w = 6;
rect_blt_clsd.h = 6;

SDL_Rect rect_blt_beam; //sprite of beam bullet
rect_blt_beam.x = 98;
rect_blt_beam.y = 200;
rect_blt_beam.w = 5;
rect_blt_beam.h = 44;

SDL_Rect rect_cntr_E; //sprite of counter text “E”
rect_cntr_E.x = 135;
rect_cntr_E.y = 218;
rect_cntr_E.w = 7;
rect_cntr_E.h = 7;

SDL_Rect rect_cntr_0; //sprite of counter text “0”
rect_cntr_0.x = 144;
rect_cntr_0.y = 218;
rect_cntr_0.w = 7;
rect_cntr_0.h = 8;

SDL_Rect rect_cntr_1; //sprite of counter text “1”
rect_cntr_1.x = 189;
rect_cntr_1.y = 217;
rect_cntr_1.w = 5;
rect_cntr_1.h = 8;

SDL_Rect rect_cntr_2; //sprite of counter text “2”
rect_cntr_2.x = 196;
rect_cntr_2.y = 217;
rect_cntr_2.w = 7;
rect_cntr_2.h = 8;

SDL_Rect rect_cntr_3; //sprite of counter text “3”
rect_cntr_3.x = 204;
rect_cntr_3.y = 217;
rect_cntr_3.w = 7;
rect_cntr_3.h = 8;

SDL_Rect rect_cntr_4; //sprite of counter text “4”
rect_cntr_4.x = 211;
rect_cntr_4.y = 217;
rect_cntr_4.w = 8;
rect_cntr_4.h = 8;

SDL_Rect rect_cntr_5; //sprite of counter text “5”
rect_cntr_5.x = 220;
rect_cntr_5.y = 217;
rect_cntr_5.w = 7;
rect_cntr_5.h = 8;

SDL_Rect rect_cntr_6; //sprite of counter text “6”
rect_cntr_6.x = 228;
rect_cntr_6.y = 217;
rect_cntr_6.w = 7;
rect_cntr_6.h = 8;

SDL_Rect rect_cntr_7; //sprite of counter text “7”
rect_cntr_7.x = 236;
rect_cntr_7.y = 217;
rect_cntr_7.w = 7;
rect_cntr_7.h = 8;

SDL_Rect rect_cntr_8; //sprite of counter text “8”
rect_cntr_8.x = 244;
rect_cntr_8.y = 217;
rect_cntr_8.w = 7;
rect_cntr_8.h = 8;

SDL_Rect rect_cntr_9; //sprite of counter text “9”
rect_cntr_9.x = 252;
rect_cntr_9.y = 217;
rect_cntr_9.w = 7;
rect_cntr_9.h = 8;

SDL_Rect rect_expl_1; //sprite of stage 1/6 of explosion
rect_expl_1.x = 11;
rect_expl_1.y = 277;
rect_expl_1.w = 15;
rect_expl_1.h = 15;

SDL_Rect rect_expl_2; //sprite of stage 2/6 of explosion
rect_expl_2.x = 39;
rect_expl_2.y = 279;
rect_expl_2.w = 10;
rect_expl_2.h = 10;

SDL_Rect rect_expl_3; //sprite of stage 3/6 of explosion
rect_expl_3.x = 58;
rect_expl_3.y = 279;
rect_expl_3.w = 11;
rect_expl_3.h = 11;

SDL_Rect rect_expl_4; //sprite of stage 4/6 of explosion
rect_expl_4.x = 80;
rect_expl_4.y = 277;
rect_expl_4.w = 13;
rect_expl_4.h = 13;

SDL_Rect rect_expl_5; //sprite of stage 5/6 of explosion
rect_expl_5.x = 105;
rect_expl_5.y = 277;
rect_expl_5.w = 15;
rect_expl_5.h = 14;

SDL_Rect rect_expl_6; //sprite of stage 6/6 of explosion
rect_expl_6.x = 129;
rect_expl_6.y = 276;
rect_expl_6.w = 16;
rect_expl_6.h = 16;

SDL_Rect rect_pwrup_pow; //sprite of POW powerup
rect_pwrup_pow.x = 10;
rect_pwrup_pow.y = 327;
rect_pwrup_pow.w = 16;
rect_pwrup_pow.h = 16;

SDL_Rect rect_pwrup_sprd; //sprite of spread shot powerup
rect_pwrup_sprd.x = 33;
rect_pwrup_sprd.y = 330;
rect_pwrup_sprd.w = 16;
rect_pwrup_sprd.h = 10;

SDL_Rect rect_pwrup_mssl; //sprite of missile powerup
rect_pwrup_mssl.x = 58;
rect_pwrup_mssl.y = 328;
rect_pwrup_mssl.w = 14;
rect_pwrup_mssl.h = 14;

SDL_Rect rect_pwrup_beam; //sprite of beam powerup
rect_pwrup_beam.x = 79;
rect_pwrup_beam.y = 327;
rect_pwrup_beam.w = 16;
rect_pwrup_beam.h = 16;

SDL_Rect rect_pwrup_auto; //sprite of automatic fire powerup
rect_pwrup_auto.x = 102;
rect_pwrup_auto.y = 327;
rect_pwrup_auto.w = 16;
rect_pwrup_auto.h = 16;

SDL_Rect rect_pwrup_cow; //sprite of cow powerup
rect_pwrup_cow.x = 126;
rect_pwrup_cow.y = 329;
rect_pwrup_cow.w = 16;
rect_pwrup_cow.h = 13;

SDL_Rect rect_red_N; //sprite of red plane heading north
rect_red_N.x = 45;
rect_red_N.y = 373;
rect_red_N.w = 15;
rect_red_N.h = 15;

SDL_Rect rect_red_NE; //sprite of red plane heading northeast
rect_red_NE.x = 69;
rect_red_NE.y = 381;
rect_red_NE.w = 15;
rect_red_NE.h = 15;

SDL_Rect rect_red_E; //sprite of red plane heading east
rect_red_E.x = 75;
rect_red_E.y = 405;
rect_red_E.w = 15;
rect_red_E.h = 15;

SDL_Rect rect_red_SE; //sprite of red plane heading southeast
rect_red_SE.x = 69;
rect_red_SE.y = 429;
rect_red_SE.w = 15;
rect_red_SE.h = 15;

SDL_Rect rect_red_S; //sprite of red plane heading south
rect_red_S.x = 45;
rect_red_S.y = 437;
rect_red_S.w = 15;
rect_red_S.h = 15;

SDL_Rect rect_red_SW; //sprite of red plane heading southwest
rect_red_SW.x = 21;
rect_red_SW.y = 429;
rect_red_SW.w = 15;
rect_red_SW.h = 15;

SDL_Rect rect_red_W; //sprite of red plane heading west
rect_red_W.x = 15;
rect_red_W.y = 405;
rect_red_W.w = 15;
rect_red_W.h = 15;

SDL_Rect rect_red_NW; //sprite of red plane heading northwest
rect_red_NW.x = 21;
rect_red_NW.y = 381;
rect_red_NW.w = 15;
rect_red_NW.h = 15;

SDL_Rect rect_lilGray_N; //sprite of little gray plane heading north
rect_lilGray_N.x = 134;
rect_lilGray_N.y = 382;
rect_lilGray_N.w = 11;
rect_lilGray_N.h = 15;

SDL_Rect rect_lilGray_NE; //sprite of little gray plane heading northeast
rect_lilGray_NE.x = 150;
rect_lilGray_NE.y = 389;
rect_lilGray_NE.w = 13;
rect_lilGray_NE.h = 13;

SDL_Rect rect_lilGray_E; //sprite of little gray plane heading east
rect_lilGray_E.x = 155;
rect_lilGray_E.y = 407;
rect_lilGray_E.w = 15;
rect_lilGray_E.h = 11;

SDL_Rect rect_lilGray_SE; //sprite of little gray plane heading southeast
rect_lilGray_SE.x = 150;
rect_lilGray_SE.y = 423;
rect_lilGray_SE.w = 13;
rect_lilGray_SE.h = 13;

SDL_Rect rect_lilGray_S; //sprite of little gray plane heading south
rect_lilGray_S.x = 134;
rect_lilGray_S.y = 428;
rect_lilGray_S.w = 11;
rect_lilGray_S.h = 15;

SDL_Rect rect_lilGray_SW; //sprite of little gray plane heading southwest
rect_lilGray_SW.x = 116;
rect_lilGray_SW.y = 423;
rect_lilGray_SW.w = 13;
rect_lilGray_SW.h = 13;

SDL_Rect rect_lilGray_W; //sprite of little gray plane heading west
rect_lilGray_W.x = 109;
rect_lilGray_W.y = 407;
rect_lilGray_W.w = 15;
rect_lilGray_W.h = 11;

SDL_Rect rect_lilGray_NW; //sprite of little gray plane heading northwest
rect_lilGray_NW.x = 116;
rect_lilGray_NW.y = 389;
rect_lilGray_NW.w = 13;
rect_lilGray_NW.h = 13;

SDL_Rect rect_singGreen_straight; //sprite of single-engine green plane straight
rect_singGreen_straight.x = 193;
rect_singGreen_straight.y = 276;
rect_singGreen_straight.w = 15;
rect_singGreen_straight.h = 15;

SDL_Rect rect_singGreen_hVert; //sprite of single-engine green plane halfway vertical
rect_singGreen_hVert.x = 217;
rect_singGreen_hVert.y = 278;
rect_singGreen_hVert.w = 15;
rect_singGreen_hVert.h = 12;

SDL_Rect rect_singGreen_fVert; //sprite of single-engine green plane vertical
rect_singGreen_fVert.x = 241;
rect_singGreen_fVert.y = 282;
rect_singGreen_fVert.w = 15;
rect_singGreen_fVert.h = 6;

SDL_Rect rect_singGreen_updown; //sprite of single-engine green plane upside-down
rect_singGreen_updown.x = 263;
rect_singGreen_updown.y = 278;
rect_singGreen_updown.w = 15;
rect_singGreen_updown.h = 15;

SDL_Rect rect_doubGreen_straight; //sprite of double-engine green plane straight
rect_doubGreen_straight.x = 192;
rect_doubGreen_straight.y = 300;
rect_doubGreen_straight.w = 15;
rect_doubGreen_straight.h = 15;

SDL_Rect rect_doubGreen_roll1; //sprite of double-engine green plane in stage 1/7 of barrel roll
rect_doubGreen_roll1.x = 217;
rect_doubGreen_roll1.y = 300;
rect_doubGreen_roll1.w = 8;
rect_doubGreen_roll1.h = 15;

SDL_Rect rect_doubGreen_roll2; //sprite of double-engine green plane in stage 2/7 of barrel roll
rect_doubGreen_roll2.x = 238;
rect_doubGreen_roll2.y = 300;
rect_doubGreen_roll2.w = 8;
rect_doubGreen_roll2.h = 15;

SDL_Rect rect_doubGreen_roll3; //sprite of double-engine green plane in stage 3/7 of barrel roll
rect_doubGreen_roll3.x = 257;
rect_doubGreen_roll3.y = 300;
rect_doubGreen_roll3.w = 9;
rect_doubGreen_roll3.h = 16;

SDL_Rect rect_doubGreen_roll4; //sprite of double-engine green plane in stage 4/7 of barrel roll
rect_doubGreen_roll4.x = 275;
rect_doubGreen_roll4.y = 300;
rect_doubGreen_roll4.w = 15;
rect_doubGreen_roll4.h = 16;

SDL_Rect rect_doubGreen_roll5; //sprite of double-engine green plane in stage 5/7 of barrel roll
rect_doubGreen_roll5.x = 297;
rect_doubGreen_roll5.y = 300;
rect_doubGreen_roll5.w = 9;
rect_doubGreen_roll5.h = 16;

SDL_Rect rect_doubGreen_roll6; //sprite of double-engine green plane in stage 6/7 of barrel roll
rect_doubGreen_roll6.x = 317;
rect_doubGreen_roll6.y = 300;
rect_doubGreen_roll6.w = 8;
rect_doubGreen_roll6.h = 15;

SDL_Rect rect_doubGreen_roll7; //sprite of double-engine green plane in stage 7/7 of barrel roll
rect_doubGreen_roll7.x = 338;
rect_doubGreen_roll7.y = 300;
rect_doubGreen_roll7.w = 8;
rect_doubGreen_roll7.h = 15;

SDL_Rect rect_purp4; //sprite of purple plane 1 (largest of 4)
rect_purp4.x = 192;
rect_purp4.y = 324;
rect_purp4.w = 30;
rect_purp4.h = 28;

SDL_Rect rect_purp3; //sprite of purple plane 2 (second largest of 4)
rect_purp3.x = 236;
rect_purp3.y = 328;
rect_purp3.w = 24;
rect_purp3.h = 21;

SDL_Rect rect_purp2; //sprite of purple plane 3 (second smallest of 4)
rect_purp2.x = 272;
rect_purp2.y = 329;
rect_purp2.w = 16;
rect_purp2.h = 16;

SDL_Rect rect_purp1; //sprite of purple plane 4 (smallest of 4)
rect_purp1.x = 298;
rect_purp1.y = 331;
rect_purp1.w = 16;
rect_purp1.h = 13;

SDL_Rect rect_bigGray; //sprite of big gray plane
rect_bigGray.x = 191;
rect_bigGray.y = 359;
rect_bigGray.w = 32;
rect_bigGray.h = 30;

SDL_Rect rect_greenBoss_rollLeft; //sprite of green boss plane roll left
rect_greenBoss_rollLeft.x = 188;
rect_greenBoss_rollLeft.y = 400;
rect_greenBoss_rollLeft.w = 40;
rect_greenBoss_rollLeft.h = 46;

SDL_Rect rect_greenBoss_straight; //sprite of green boss plane roll straight
rect_greenBoss_straight.x = 241;
rect_greenBoss_straight.y = 399;
rect_greenBoss_straight.w = 48;
rect_greenBoss_straight.h = 46;

SDL_Rect rect_greenBoss_rollRight; //sprite of green boss plane roll right
rect_greenBoss_rollRight.x = 302;
rect_greenBoss_rollRight.y = 400;
rect_greenBoss_rollRight.w = 40;
rect_greenBoss_rollRight.h = 46;

};
#endif //SPRITEMAPPINGS_H
