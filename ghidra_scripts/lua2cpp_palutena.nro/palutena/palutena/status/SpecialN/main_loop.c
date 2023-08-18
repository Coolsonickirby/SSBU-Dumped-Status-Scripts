
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPalutena::status::SpecialN_main_loop(L2CFighterPalutena *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) goto LAB_71000181b4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100018b7c;
  }
  lib::L2CValue::_L2CValue(aLStack160);
LAB_71000181b4:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_TARGET_EXIST);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_HAS_TARGET_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack208);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_GENERATE_ARTICLE_AUTORETICLE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_HAS_TARGET_ARTICLE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack224,0x19f404eef0);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x19f0f6bf51);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack208,iVar3);
    lib::L2CValue::operator_(aLStack96,aLStack208);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0x19f0f6bf51);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack208,iVar3);
    lib::L2CValue::operator_(aLStack128,aLStack208);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_7100018668:
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_2ND_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack224);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_2ND_DONE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
          goto LAB_7100018814;
        }
      }
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100018814;
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_3RD_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack224);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_3RD_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        goto LAB_7100018814;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_1ST_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack224);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_7100018668;
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SHOT_1ST_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
LAB_7100018814:
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_GENERATE_ARTICLE_AUTOAIMBULLET);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(*ppBVar9,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_71000188d0:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_7100018940;
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_71000188d0;
LAB_7100018940:
    lib::L2CValue::L2CValue(aLStack208,false);
    FUN_7100009d40(this,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100018aa4;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar9,HVar8,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100018aa4:
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SIGHT_EFFECT_ON);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,0x3002e74dd7);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PALUTENA_STATUS_SPECIAL_N_FLAG_SIGHT_EFFECT_ON);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100018b7c:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

