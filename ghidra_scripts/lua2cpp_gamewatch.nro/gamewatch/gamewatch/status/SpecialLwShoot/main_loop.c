
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwShoot_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100029340:
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_7100029340;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator_(aLStack112,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,aLStack112);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_7100029c0c;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100029194;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100029194;
    }
  }
  else {
LAB_7100029194:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x14811fd16e);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OIL);
        lib::L2CValue::L2CValue(aLStack112,0x14811fd16e);
        lib::L2CValue::L2CValue(aLStack128,true);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar8,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
        goto LAB_710002958c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x14811fd16e);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar8,HVar7,fVar10,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OIL);
      lib::L2CValue::L2CValue(aLStack112,0x14811fd16e);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      HVar7 = lib::L2CValue::as_hash(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::ArticleModule__change_motion_impl(*ppBVar8,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar8,GVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1000aa5e2e);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar8,HVar7,fVar10,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OIL);
        lib::L2CValue::L2CValue(aLStack112,0x1000aa5e2e);
        lib::L2CValue::L2CValue(aLStack128,false);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar8,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar4);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x1000aa5e2e);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar8,HVar7,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OIL);
        lib::L2CValue::L2CValue(aLStack112,0x1000aa5e2e);
        lib::L2CValue::L2CValue(aLStack128,true);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*ppBVar8,iVar4,HVar7,(bool)(bVar1 & 1),-1.0);
LAB_710002958c:
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_FLOAT_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar8,iVar4,false);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__set_power_impl(*ppBVar8,iVar4,fVar10,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack128,1);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar8,iVar4,false);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,1);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__set_power_impl(*ppBVar8,iVar4,fVar10,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack128,2);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar8,iVar4,false);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,2);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__set_power_impl(*ppBVar8,iVar4,fVar10,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack128,3);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar8,iVar4,false);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,3);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::AttackModule__set_power_impl(*ppBVar8,iVar4,fVar10,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100029c0c:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

