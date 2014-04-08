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

SDL_Rect spr_plyr_hlthy_fRollLeft; //sprite of healthy player full roll left
spr_plyr_hlthy_fRollLeft.x = 15;
spr_plyr_hlthy_fRollLeft.y = 28;
spr_plyr_hlthy_fRollLeft.w = 16;
spr_plyr_hlthy_fRollLeft.h = 16;

SDL_Rect spr_plyr_hlthy_hRollLeft; //sprite of healthy player half roll left
spr_plyr_hlthy_hRollLeft.x = 38;
spr_plyr_hlthy_hRollLeft.y = 28;
spr_plyr_hlthy_hRollLeft.w = 20;
spr_plyr_hlthy_hRollLeft.h = 16;

SDL_Rect spr_plyr_hlthy_straight; //sprite of healthy player straight
spr_plyr_hlthy_straight.x = 65;
spr_plyr_hlthy_straight.y = 28;
spr_plyr_hlthy_straight.w = 24;
spr_plyr_hlthy_straight.h = 16;

SDL_Rect spr_plyr_hlthy_hRollRight; //sprite of healthy player half roll right
spr_plyr_hlthy_hRollRight.x = 96;
spr_plyr_hlthy_hRollRight.y = 28;
spr_plyr_hlthy_hRollRight.w = 20;
spr_plyr_hlthy_hRollRight.h = 16;

SDL_Rect spr_plyr_hlthy_fRollRight; //sprite of healthy player full roll right
spr_plyr_hlthy_fRollRight.x = 123;
spr_plyr_hlthy_fRollRight.y = 28;
spr_plyr_hlthy_fRollRight.w = 16;
spr_plyr_hlthy_fRollRight.h = 16;

SDL_Rect spr_plyr_dmgd_fRollLeft; //sprite of damaged player full roll left
spr_plyr_dmgd_fRollLeft.x = 14;
spr_plyr_dmgd_fRollLeft.y = 82;
spr_plyr_dmgd_fRollLeft.w = 16;
spr_plyr_dmgd_fRollLeft.h = 16;

SDL_Rect spr_plyr_dmgd_hRollLeft; //sprite of damaged player half roll left
spr_plyr_dmgd_hRollLeft.x = 37;
spr_plyr_dmgd_hRollLeft.y = 82;
spr_plyr_dmgd_hRollLeft.w = 20;
spr_plyr_dmgd_hRollLeft.h = 16;

SDL_Rect spr_plyr_dmgd_straight; //sprite of damaged player straight
spr_plyr_dmgd_straight.x = 64;
spr_plyr_dmgd_straight.y = 82;
spr_plyr_dmgd_straight.w = 24;
spr_plyr_dmgd_straight.h = 16;

SDL_Rect spr_plyr_dmgd_hRollRight; //sprite of damaged player half roll right
spr_plyr_dmgd_hRollRight.x = 95;
spr_plyr_dmgd_hRollRight.y = 82;
spr_plyr_dmgd_hRollRight.w = 20;
spr_plyr_dmgd_hRollRight.h = 16;

SDL_Rect spr_plyr_dmgd_fRollRight; //sprite of damaged player full roll right
spr_plyr_dmgd_fRollRight.x = 122;
spr_plyr_dmgd_fRollRight.y = 82;
spr_plyr_dmgd_fRollRight.w = 16;
spr_plyr_dmgd_fRollRight.h = 16;

SDL_Rect spr_txt_0; //sprite of text “0”
spr_txt_0.x = 172;
spr_txt_0.y = 32;
spr_txt_0.w = 6;
spr_txt_0.h = 7;

SDL_Rect spr_txt_1; //sprite of text “1”
spr_txt_1.x = 189;
spr_txt_1.y = 32;
spr_txt_1.w = 4;
spr_txt_1.h = 7;

SDL_Rect spr_txt_2; //sprite of text “2”
spr_txt_2.x = 204;
spr_txt_2.y = 32;
spr_txt_2.w = 6;
spr_txt_2.h = 7;

SDL_Rect spr_txt_3; //sprite of text “3”
spr_txt_3.x = 220;
spr_txt_3.y = 32;
spr_txt_3.w = 6;
spr_txt_3.h = 7;

SDL_Rect spr_txt_4; //sprite of text “4”
spr_txt_4.x = 235;
spr_txt_4.y = 32;
spr_txt_4.w = 7;
spr_txt_4.h = 7;

SDL_Rect spr_txt_5; //sprite of text “5”
spr_txt_5.x = 252;
spr_txt_5.y = 32;
spr_txt_5.w = 6;
spr_txt_5.h = 7;

SDL_Rect spr_txt_6; //sprite of text “6”
spr_txt_6.x = 268;
spr_txt_6.y = 32;
spr_txt_6.w = 6;
spr_txt_6.h = 7;

SDL_Rect spr_txt_7; //sprite of text “7”
spr_txt_7.x = 284;
spr_txt_7.y = 32;
spr_txt_7.w = 6;
spr_txt_7.h = 7;

SDL_Rect spr_txt_8; //sprite of text “8”
spr_txt_8.x = 300;
spr_txt_8.y = 32;
spr_txt_8.w = 6;
spr_txt_8.h = 7;

SDL_Rect spr_txt_9; //sprite of text “9”
spr_txt_9.x = 316;
spr_txt_9.y = 32;
spr_txt_9.w = 6;
spr_txt_9.h = 7;

SDL_Rect spr_txt_A; //sprite of text “A”
spr_txt_A.x = 171;
spr_txt_A.y = 48;
spr_txt_A.w = 7;
spr_txt_A.h = 7;

SDL_Rect spr_txt_B; //sprite of text “B”
spr_txt_B.x = 187;
spr_txt_B.y = 48;
spr_txt_B.w = 7;
spr_txt_B.h = 7;

SDL_Rect spr_txt_C; //sprite of text “C”
spr_txt_C.x = 203;
spr_txt_C.y = 48;
spr_txt_C.w = 7;
spr_txt_C.h = 7;

SDL_Rect spr_txt_D; //sprite of text “D”
spr_txt_D.x = 219;
spr_txt_D.y = 48;
spr_txt_D.w = 7;
spr_txt_D.h = 7;

SDL_Rect spr_txt_E; //sprite of text “E”
spr_txt_E.x = 235;
spr_txt_E.y = 48;
spr_txt_E.w = 7;
spr_txt_E.h = 7;

SDL_Rect spr_txt_F; //sprite of text “F”
spr_txt_F.x = 251;
spr_txt_F.y = 48;
spr_txt_F.w = 7;
spr_txt_F.h = 7;

SDL_Rect spr_txt_G; //sprite of text “G”
spr_txt_G.x = 267;
spr_txt_G.y = 48;
spr_txt_G.w = 7;
spr_txt_G.h = 7;

SDL_Rect spr_txt_H; //sprite of text “H”
spr_txt_H.x = 283;
spr_txt_H.y = 48;
spr_txt_H.w = 7;
spr_txt_H.h = 7;

SDL_Rect spr_txt_I; //sprite of text “I”
spr_txt_I.x = 301;
spr_txt_I.y = 48;
spr_txt_I.w = 4;
spr_txt_I.h = 7;

SDL_Rect spr_txt_J; //sprite of text “J”
spr_txt_J.x = 315;
spr_txt_J.y = 48;
spr_txt_J.w = 7;
spr_txt_J.h = 7;

SDL_Rect spr_txt_K; //sprite of text “K”
spr_txt_K.x = 171;
spr_txt_K.y = 64;
spr_txt_K.w = 7;
spr_txt_K.h = 7;

SDL_Rect spr_txt_L; //sprite of text “L”
spr_txt_L.x = 187;
spr_txt_L.y = 64;
spr_txt_L.w = 7;
spr_txt_L.h = 7;

SDL_Rect spr_txt_M; //sprite of text “M”
spr_txt_M.x = 203;
spr_txt_M.y = 64;
spr_txt_M.w = 7;
spr_txt_M.h = 7;

SDL_Rect spr_txt_N; //sprite of text “N”
spr_txt_N.x = 219;
spr_txt_N.y = 64;
spr_txt_N.w = 7;
spr_txt_N.h = 7;

SDL_Rect spr_txt_O; //sprite of text “O”
spr_txt_O.x = 235;
spr_txt_O.y = 64;
spr_txt_O.w = 7;
spr_txt_O.h = 7;

SDL_Rect spr_txt_P; //sprite of text “P”
spr_txt_P.x = 251;
spr_txt_P.y = 64;
spr_txt_P.w = 7;
spr_txt_P.h = 7;

SDL_Rect spr_txt_Q; //sprite of text “Q”
spr_txt_Q.x = 267;
spr_txt_Q.y = 64;
spr_txt_Q.w = 7;
spr_txt_Q.h = 7;

SDL_Rect spr_txt_R; //sprite of text “R”
spr_txt_R.x = 283;
spr_txt_R.y = 64;
spr_txt_R.w = 7;
spr_txt_R.h = 7;

SDL_Rect spr_txt_S; //sprite of text “S”
spr_txt_S.x = 299;
spr_txt_S.y = 64;
spr_txt_S.w = 7;
spr_txt_S.h = 7;

SDL_Rect spr_txt_T; //sprite of text “T”
spr_txt_T.x = 315;
spr_txt_T.y = 64;
spr_txt_T.w = 7;
spr_txt_T.h = 7;

SDL_Rect spr_txt_U; //sprite of text “U”
spr_txt_U.x = 171;
spr_txt_U.y = 80;
spr_txt_U.w = 7;
spr_txt_U.h = 7;

SDL_Rect spr_txt_V; //sprite of text “V”
spr_txt_V.x = 187;
spr_txt_V.y = 80;
spr_txt_V.w = 7;
spr_txt_V.h = 7;

SDL_Rect spr_txt_W; //sprite of text “W”
spr_txt_W.x = 203;
spr_txt_W.y = 80;
spr_txt_W.w = 7;
spr_txt_W.h = 7;

SDL_Rect spr_txt_X; //sprite of text “X”
spr_txt_X.x = 219;
spr_txt_X.y = 80;
spr_txt_X.w = 7;
spr_txt_X.h = 7;

SDL_Rect spr_txt_Y; //sprite of text “Y”
spr_txt_Y.x = 235;
spr_txt_Y.y = 80;
spr_txt_Y.w = 7;
spr_txt_Y.h = 7;

SDL_Rect spr_txt_Z; //sprite of text “Z”
spr_txt_Z.x = 252;
spr_txt_Z.y = 80;
spr_txt_Z.w = 6;
spr_txt_Z.h = 7;

SDL_Rect spr_plyr_intr_1; //sprite of stage 1/7 of player intro sequence
spr_plyr_intr_1.x = 12;
spr_plyr_intr_1.y = 141;
spr_plyr_intr_1.w = 13;
spr_plyr_intr_1.h = 8;

SDL_Rect spr_plyr_intr_2; //sprite of stage 2/7 of player intro sequence
spr_plyr_intr_2.x = 39;
spr_plyr_intr_2.y = 141;
spr_plyr_intr_2.w = 21;
spr_plyr_intr_2.h = 13;

SDL_Rect spr_plyr_intr_3; //sprite of stage 3/7 of player intro sequence
spr_plyr_intr_3.x = 76;
spr_plyr_intr_3.y = 138;
spr_plyr_intr_3.w = 28;
spr_plyr_intr_3.h = 7;

SDL_Rect spr_plyr_intr_4; //sprite of stage 4/7 of player intro sequence
spr_plyr_intr_4.x = 119;
spr_plyr_intr_4.y = 139;
spr_plyr_intr_4.w = 30;
spr_plyr_intr_4.h = 6;

SDL_Rect spr_plyr_intr_5; //sprite of stage 5/7 of player intro sequence
spr_plyr_intr_5.x = 163;
spr_plyr_intr_5.y = 134;
spr_plyr_intr_5.w = 30;
spr_plyr_intr_5.h = 16;

SDL_Rect spr_plyr_intr_6; //sprite of stage 6/7 of player intro sequence
spr_plyr_intr_6.x = 205;
spr_plyr_intr_6.y = 132;
spr_plyr_intr_6.w = 28;
spr_plyr_intr_6.h = 16;

SDL_Rect spr_plyr_intr_7; //sprite of stage 7/7 of player intro sequence
spr_plyr_intr_7.x = 241;
spr_plyr_intr_7.y = 130;
spr_plyr_intr_7.w = 24;
spr_plyr_intr_7.h = 15;

SDL_Rect spr_attr_sel; //sprite of attribute selection arrow
spr_attr_sel.x = 442;
spr_attr_sel.y = 155;
spr_attr_sel.w = 7;
spr_attr_sel.h = 7;

SDL_Rect spr_attr_full; //sprite of full attribute level
spr_attr_full.x = 460;
spr_attr_full.y = 155;
spr_attr_full.w = 13;
spr_attr_full.h = 8;

SDL_Rect spr_attr_emp; //sprite of empty attribute level
spr_attr_emp.x = 476;
spr_attr_emp.y = 155;
spr_attr_emp.w = 13;
spr_attr_emp.h = 8;

SDL_Rect spr_blt_nrm; //sprite of normal bullet
spr_blt_nrm.x = 13;
spr_blt_nrm.y = 220;
spr_blt_nrm.w = 2;
spr_blt_nrm.h = 14;

SDL_Rect spr_blt_opn; //sprite of open circle bullet
spr_blt_opn.x = 40;
spr_blt_opn.y = 223;
spr_blt_opn.w = 8;
spr_blt_opn.h = 8;

SDL_Rect spr_blt_rnd; //sprite of rounded bullet
spr_blt_rnd.x = 61;
spr_blt_rnd.y = 220;
spr_blt_rnd.w = 3;
spr_blt_rnd.h = 16;

SDL_Rect spr_blt_clsd; //sprite of closed circle bullet
spr_blt_clsd.x = 85;
spr_blt_clsd.y = 225;
spr_blt_clsd.w = 6;
spr_blt_clsd.h = 6;

SDL_Rect spr_blt_beam; //sprite of beam bullet
spr_blt_beam.x = 98;
spr_blt_beam.y = 200;
spr_blt_beam.w = 5;
spr_blt_beam.h = 44;

SDL_Rect spr_cntr_E; //sprite of counter text “E”
spr_cntr_E.x = 135;
spr_cntr_E.y = 218;
spr_cntr_E.w = 7;
spr_cntr_E.h = 7;

SDL_Rect spr_cntr_0; //sprite of counter text “0”
spr_cntr_0.x = 144;
spr_cntr_0.y = 218;
spr_cntr_0.w = 7;
spr_cntr_0.h = 8;

SDL_Rect spr_cntr_1; //sprite of counter text “1”
spr_cntr_1.x = 189;
spr_cntr_1.y = 217;
spr_cntr_1.w = 5;
spr_cntr_1.h = 8;

SDL_Rect spr_cntr_2; //sprite of counter text “2”
spr_cntr_2.x = 196;
spr_cntr_2.y = 217;
spr_cntr_2.w = 7;
spr_cntr_2.h = 8;

SDL_Rect spr_cntr_3; //sprite of counter text “3”
spr_cntr_3.x = 204;
spr_cntr_3.y = 217;
spr_cntr_3.w = 7;
spr_cntr_3.h = 8;

SDL_Rect spr_cntr_4; //sprite of counter text “4”
spr_cntr_4.x = 211;
spr_cntr_4.y = 217;
spr_cntr_4.w = 8;
spr_cntr_4.h = 8;

SDL_Rect spr_cntr_5; //sprite of counter text “5”
spr_cntr_5.x = 220;
spr_cntr_5.y = 217;
spr_cntr_5.w = 7;
spr_cntr_5.h = 8;

SDL_Rect spr_cntr_6; //sprite of counter text “6”
spr_cntr_6.x = 228;
spr_cntr_6.y = 217;
spr_cntr_6.w = 7;
spr_cntr_6.h = 8;

SDL_Rect spr_cntr_7; //sprite of counter text “7”
spr_cntr_7.x = 236;
spr_cntr_7.y = 217;
spr_cntr_7.w = 7;
spr_cntr_7.h = 8;

SDL_Rect spr_cntr_8; //sprite of counter text “8”
spr_cntr_8.x = 244;
spr_cntr_8.y = 217;
spr_cntr_8.w = 7;
spr_cntr_8.h = 8;

SDL_Rect spr_cntr_9; //sprite of counter text “9”
spr_cntr_9.x = 252;
spr_cntr_9.y = 217;
spr_cntr_9.w = 7;
spr_cntr_9.h = 8;

SDL_Rect spr_expl_1; //sprite of stage 1/6 of explosion
spr_expl_1.x = 11;
spr_expl_1.y = 277;
spr_expl_1.w = 15;
spr_expl_1.h = 15;

SDL_Rect spr_expl_2; //sprite of stage 2/6 of explosion
spr_expl_2.x = 39;
spr_expl_2.y = 279;
spr_expl_2.w = 10;
spr_expl_2.h = 10;

SDL_Rect spr_expl_3; //sprite of stage 3/6 of explosion
spr_expl_3.x = 58;
spr_expl_3.y = 279;
spr_expl_3.w = 11;
spr_expl_3.h = 11;

SDL_Rect spr_expl_4; //sprite of stage 4/6 of explosion
spr_expl_4.x = 80;
spr_expl_4.y = 277;
spr_expl_4.w = 13;
spr_expl_4.h = 13;

SDL_Rect spr_expl_5; //sprite of stage 5/6 of explosion
spr_expl_5.x = 105;
spr_expl_5.y = 277;
spr_expl_5.w = 15;
spr_expl_5.h = 14;

SDL_Rect spr_expl_6; //sprite of stage 6/6 of explosion
spr_expl_6.x = 129;
spr_expl_6.y = 276;
spr_expl_6.w = 16;
spr_expl_6.h = 16;

SDL_Rect spr_pwrup_pow; //sprite of POW powerup
spr_pwrup_pow.x = 10;
spr_pwrup_pow.y = 327;
spr_pwrup_pow.w = 16;
spr_pwrup_pow.h = 16;

SDL_Rect spr_pwrup_sprd; //sprite of spread shot powerup
spr_pwrup_sprd.x = 33;
spr_pwrup_sprd.y = 330;
spr_pwrup_sprd.w = 16;
spr_pwrup_sprd.h = 10;

SDL_Rect spr_pwrup_mssl; //sprite of missile powerup
spr_pwrup_mssl.x = 58;
spr_pwrup_mssl.y = 328;
spr_pwrup_mssl.w = 14;
spr_pwrup_mssl.h = 14;

SDL_Rect spr_pwrup_beam; //sprite of beam powerup
spr_pwrup_beam.x = 79;
spr_pwrup_beam.y = 327;
spr_pwrup_beam.w = 16;
spr_pwrup_beam.h = 16;

SDL_Rect spr_pwrup_auto; //sprite of automatic fire powerup
spr_pwrup_auto.x = 102;
spr_pwrup_auto.y = 327;
spr_pwrup_auto.w = 16;
spr_pwrup_auto.h = 16;

SDL_Rect spr_pwrup_cow; //sprite of cow powerup
spr_pwrup_cow.x = 126;
spr_pwrup_cow.y = 329;
spr_pwrup_cow.w = 16;
spr_pwrup_cow.h = 13;

SDL_Rect spr_red_N; //sprite of red plane heading north
spr_red_N.x = 45;
spr_red_N.y = 373;
spr_red_N.w = 15;
spr_red_N.h = 15;

SDL_Rect spr_red_NE; //sprite of red plane heading northeast
spr_red_NE.x = 69;
spr_red_NE.y = 381;
spr_red_NE.w = 15;
spr_red_NE.h = 15;

SDL_Rect spr_red_E; //sprite of red plane heading east
spr_red_E.x = 75;
spr_red_E.y = 405;
spr_red_E.w = 15;
spr_red_E.h = 15;

SDL_Rect spr_red_SE; //sprite of red plane heading southeast
spr_red_SE.x = 69;
spr_red_SE.y = 429;
spr_red_SE.w = 15;
spr_red_SE.h = 15;

SDL_Rect spr_red_S; //sprite of red plane heading south
spr_red_S.x = 45;
spr_red_S.y = 437;
spr_red_S.w = 15;
spr_red_S.h = 15;

SDL_Rect spr_red_SW; //sprite of red plane heading southwest
spr_red_SW.x = 21;
spr_red_SW.y = 429;
spr_red_SW.w = 15;
spr_red_SW.h = 15;

SDL_Rect spr_red_W; //sprite of red plane heading west
spr_red_W.x = 15;
spr_red_W.y = 405;
spr_red_W.w = 15;
spr_red_W.h = 15;

SDL_Rect spr_red_NW; //sprite of red plane heading northwest
spr_red_NW.x = 21;
spr_red_NW.y = 381;
spr_red_NW.w = 15;
spr_red_NW.h = 15;

SDL_Rect spr_lilGray_N; //sprite of little gray plane heading north
spr_lilGray_N.x = 134;
spr_lilGray_N.y = 382;
spr_lilGray_N.w = 11;
spr_lilGray_N.h = 15;

SDL_Rect spr_lilGray_NE; //sprite of little gray plane heading northeast
spr_lilGray_NE.x = 150;
spr_lilGray_NE.y = 389;
spr_lilGray_NE.w = 13;
spr_lilGray_NE.h = 13;

SDL_Rect spr_lilGray_E; //sprite of little gray plane heading east
spr_lilGray_E.x = 155;
spr_lilGray_E.y = 407;
spr_lilGray_E.w = 15;
spr_lilGray_E.h = 11;

SDL_Rect spr_lilGray_SE; //sprite of little gray plane heading southeast
spr_lilGray_SE.x = 150;
spr_lilGray_SE.y = 423;
spr_lilGray_SE.w = 13;
spr_lilGray_SE.h = 13;

SDL_Rect spr_lilGray_S; //sprite of little gray plane heading south
spr_lilGray_S.x = 134;
spr_lilGray_S.y = 428;
spr_lilGray_S.w = 11;
spr_lilGray_S.h = 15;

SDL_Rect spr_lilGray_SW; //sprite of little gray plane heading southwest
spr_lilGray_SW.x = 116;
spr_lilGray_SW.y = 423;
spr_lilGray_SW.w = 13;
spr_lilGray_SW.h = 13;

SDL_Rect spr_lilGray_W; //sprite of little gray plane heading west
spr_lilGray_W.x = 109;
spr_lilGray_W.y = 407;
spr_lilGray_W.w = 15;
spr_lilGray_W.h = 11;

SDL_Rect spr_lilGray_NW; //sprite of little gray plane heading northwest
spr_lilGray_NW.x = 116;
spr_lilGray_NW.y = 389;
spr_lilGray_NW.w = 13;
spr_lilGray_NW.h = 13;

SDL_Rect spr_singGreen_straight; //sprite of single-engine green plane straight
spr_singGreen_straight.x = 193;
spr_singGreen_straight.y = 276;
spr_singGreen_straight.w = 15;
spr_singGreen_straight.h = 15;

SDL_Rect spr_singGreen_hVert; //sprite of single-engine green plane halfway vertical
spr_singGreen_hVert.x = 217;
spr_singGreen_hVert.y = 278;
spr_singGreen_hVert.w = 15;
spr_singGreen_hVert.h = 12;

SDL_Rect spr_singGreen_fVert; //sprite of single-engine green plane vertical
spr_singGreen_fVert.x = 241;
spr_singGreen_fVert.y = 282;
spr_singGreen_fVert.w = 15;
spr_singGreen_fVert.h = 6;

SDL_Rect spr_singGreen_updown; //sprite of single-engine green plane upside-down
spr_singGreen_updown.x = 263;
spr_singGreen_updown.y = 278;
spr_singGreen_updown.w = 15;
spr_singGreen_updown.h = 15;

SDL_Rect spr_doubGreen_straight; //sprite of double-engine green plane straight
spr_doubGreen_straight.x = 192;
spr_doubGreen_straight.y = 300;
spr_doubGreen_straight.w = 15;
spr_doubGreen_straight.h = 15;

SDL_Rect spr_doubGreen_roll1; //sprite of double-engine green plane in stage 1/7 of barrel roll
spr_doubGreen_roll1.x = 217;
spr_doubGreen_roll1.y = 300;
spr_doubGreen_roll1.w = 8;
spr_doubGreen_roll1.h = 15;

SDL_Rect spr_doubGreen_roll2; //sprite of double-engine green plane in stage 2/7 of barrel roll
spr_doubGreen_roll2.x = 238;
spr_doubGreen_roll2.y = 300;
spr_doubGreen_roll2.w = 8;
spr_doubGreen_roll2.h = 15;

SDL_Rect spr_doubGreen_roll3; //sprite of double-engine green plane in stage 3/7 of barrel roll
spr_doubGreen_roll3.x = 257;
spr_doubGreen_roll3.y = 300;
spr_doubGreen_roll3.w = 9;
spr_doubGreen_roll3.h = 16;

SDL_Rect spr_doubGreen_roll4; //sprite of double-engine green plane in stage 4/7 of barrel roll
spr_doubGreen_roll4.x = 275;
spr_doubGreen_roll4.y = 300;
spr_doubGreen_roll4.w = 15;
spr_doubGreen_roll4.h = 16;

SDL_Rect spr_doubGreen_roll5; //sprite of double-engine green plane in stage 5/7 of barrel roll
spr_doubGreen_roll5.x = 297;
spr_doubGreen_roll5.y = 300;
spr_doubGreen_roll5.w = 9;
spr_doubGreen_roll5.h = 16;

SDL_Rect spr_doubGreen_roll6; //sprite of double-engine green plane in stage 6/7 of barrel roll
spr_doubGreen_roll6.x = 317;
spr_doubGreen_roll6.y = 300;
spr_doubGreen_roll6.w = 8;
spr_doubGreen_roll6.h = 15;

SDL_Rect spr_doubGreen_roll7; //sprite of double-engine green plane in stage 7/7 of barrel roll
spr_doubGreen_roll7.x = 338;
spr_doubGreen_roll7.y = 300;
spr_doubGreen_roll7.w = 8;
spr_doubGreen_roll7.h = 15;

SDL_Rect spr_purp4; //sprite of purple plane 1 (largest of 4)
spr_purp4.x = 192;
spr_purp4.y = 324;
spr_purp4.w = 30;
spr_purp4.h = 28;

SDL_Rect spr_purp3; //sprite of purple plane 2 (second largest of 4)
spr_purp3.x = 236;
spr_purp3.y = 328;
spr_purp3.w = 24;
spr_purp3.h = 21;

SDL_Rect spr_purp2; //sprite of purple plane 3 (second smallest of 4)
spr_purp2.x = 272;
spr_purp2.y = 329;
spr_purp2.w = 16;
spr_purp2.h = 16;

SDL_Rect spr_purp1; //sprite of purple plane 4 (smallest of 4)
spr_purp1.x = 298;
spr_purp1.y = 331;
spr_purp1.w = 16;
spr_purp1.h = 13;

SDL_Rect spr_bigGray; //sprite of big gray plane
spr_bigGray.x = 191;
spr_bigGray.y = 359;
spr_bigGray.w = 32;
spr_bigGray.h = 30;

SDL_Rect spr_greenBoss_rollLeft; //sprite of green boss plane roll left
spr_greenBoss_rollLeft.x = 188;
spr_greenBoss_rollLeft.y = 400;
spr_greenBoss_rollLeft.w = 40;
spr_greenBoss_rollLeft.h = 46;

SDL_Rect spr_greenBoss_straight; //sprite of green boss plane roll straight
spr_greenBoss_straight.x = 241;
spr_greenBoss_straight.y = 399;
spr_greenBoss_straight.w = 48;
spr_greenBoss_straight.h = 46;

SDL_Rect spr_greenBoss_rollRight; //sprite of green boss plane roll right
spr_greenBoss_rollRight.x = 302;
spr_greenBoss_rollRight.y = 400;
spr_greenBoss_rollRight.w = 40;
spr_greenBoss_rollRight.h = 46;

#endif //SPRITEMAPPINGS_H
