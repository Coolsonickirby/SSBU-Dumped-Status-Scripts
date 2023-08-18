
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KamuiSpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_BITE_HOLD_RATE);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N_BITE);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100178e6c;
    }
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_SHOT_MOTION_FRAME)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack304,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack256);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((bVar2 & 1U) != 0) {
        uVar4 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack96,uVar4);
        lib::L2CValue::operator_(aLStack224,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::operator_(aLStack128,aLStack224);
        fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator_(aLStack208,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack320,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_SHOT_MOTION_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack304,fVar10);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::operator_(aLStack304,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::operator_(aLStack192,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::operator_(aLStack208,aLStack192);
        lib::L2CValue::operator_(aLStack128,aLStack192);
        lib::L2CValue::operator_(aLStack320,aLStack336);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_(aLStack304,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_BITE_HOLD_RATE)
        ;
        fVar10 = (float)lib::L2CValue::as_number(aLStack256);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N_BITE);
        lib::L2CValue::L2CValue(aLStack368,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100178e6c;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack384,aLStack144);
  lib::L2CValue::L2CValue(aLStack400,0xe41920ee8);
  lib::L2CValue::L2CValue(aLStack416,0x1203c0fb27);
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack464,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack480,GROUND_CORRECT_KIND_AIR);
  FUN_7100177570(aLStack256,this,aLStack384,aLStack400,aLStack416,aLStack432,aLStack448,aLStack464,
                 aLStack480);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack304,0x1a82862070);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    uVar6 = lib::L2CValue::as_integer(aLStack304);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack256,fVar10);
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x1203c0fb27);
            lib::L2CValue::L2CValue(aLStack320,true);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0xe41920ee8);
            lib::L2CValue::L2CValue(aLStack320,true);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x14c854e426);
            lib::L2CValue::L2CValue(aLStack320,true);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x1049e16b66);
            lib::L2CValue::L2CValue(aLStack320,true);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      else {
        fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
        lib::L2CValue::L2CValue(aLStack256,fVar10);
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x1203c0fb27);
            lib::L2CValue::L2CValue(aLStack320,false);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0xe41920ee8);
            lib::L2CValue::L2CValue(aLStack320,false);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x14c854e426);
            lib::L2CValue::L2CValue(aLStack320,false);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack304,0x1049e16b66);
            lib::L2CValue::L2CValue(aLStack320,false);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack304);
            bVar1 = lib::L2CValue::as_bool(aLStack320);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*ppBVar9,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
      lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack320,0x1a82862070);
      uVar5 = lib::L2CValue::as_integer(aLStack304);
      uVar6 = lib::L2CValue::as_integer(aLStack320);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack256,fVar10);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::ArticleModule__set_rate_impl(*ppBVar9,iVar3,fVar10);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_HOLD_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator_(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack320,0xec7acfd87);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::operator_(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    uVar5 = lib::L2CValue::operator_(aLStack96,aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_HOLD_RATE);
    fVar10 = (float)lib::L2CValue::as_number(aLStack256);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_RYUSENSYA);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x1670010ab4);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x16ad1efd99);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar7 = aLStack256;
LAB_7100178adc:
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x1a86b4e884);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack304,0x1a5bab1fa9);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack320,0x13e2a4b82f);
        uVar5 = lib::L2CValue::as_integer(aLStack304);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack256,fVar10);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        pLVar7 = aLStack96;
        goto LAB_7100178adc;
      }
    }
    lib::L2CValue::operator_(aLStack160,aLStack176);
    lib::L2CValue::operator_(aLStack336,aLStack240);
    lib::L2CValue::operator_(aLStack176,aLStack320);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::operator_(aLStack304,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack112,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::operator_(aLStack112,aLStack256);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack320,0x15d94f8ec6);
      uVar5 = lib::L2CValue::as_integer(aLStack304);
      uVar6 = lib::L2CValue::as_integer(aLStack320);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack256,fVar10);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack320,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack336,0x15c2e46a2f);
      uVar5 = lib::L2CValue::as_integer(aLStack320);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack304,fVar10);
      lib::L2CValue::operator_(aLStack304);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack304,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack304,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_N_WORK_FLOAT_SHOT_MOTION_FRAME);
    fVar10 = (float)lib::L2CValue::as_number(aLStack256);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100178e6c:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

