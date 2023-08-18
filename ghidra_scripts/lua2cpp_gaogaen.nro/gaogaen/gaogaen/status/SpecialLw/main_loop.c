
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialLw_main_loop(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  DamageNoReactionMode DVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) goto LAB_7100015ff4;
    }
    iVar3 = 1;
    goto LAB_71000165ec;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100015ff4:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_START);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack112,0x1925263a0d);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack112);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar11);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x17943918d6);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::DamageModule__set_damage_mul_2nd_impl(*ppBVar10,fVar11);
    fVar11 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::HitModule__set_hit_stop_mul_impl(*ppBVar10,fVar11,3,0.0);
    lib::L2CValue::L2CValue(aLStack112,_DAMAGE_NO_REACTION_MODE_ALWAYS);
    DVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::DamageModule__set_no_reaction_mode_status_impl(*ppBVar10,DVar4,-1.0,-1.0,-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_END);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_LW_FLAG_STANCE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_DAMAGE_NO_REACTION_MODE_NORMAL);
    DVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::DamageModule__set_no_reaction_mode_status_impl(*ppBVar10,DVar4,-1.0,-1.0,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar11 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::DamageModule__set_damage_mul_2nd_impl(*ppBVar10,fVar11);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar11 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::HitModule__set_hit_stop_mul_impl(*ppBVar10,fVar11,3,0.0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  if ((bVar2 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x10ef97f71f);
        HVar9 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        FUN_7100013e50(this,aLStack80);
        goto LAB_71000165dc;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x146e22785f);
        HVar9 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,false);
        FUN_7100013e50(this,aLStack80);
        goto LAB_71000165dc;
      }
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71000165dc:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar3 = 0;
LAB_71000165ec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

