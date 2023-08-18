
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwWait_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ShieldStatus SVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar11 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0xefa42dfa9);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_WAIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
LAB_710002ae8c:
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_CATCH);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_REFLECT);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_REFLECT_BREAK);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack96);
            goto LAB_710002b070;
          }
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_END);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_REFLECT);
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_CATCH);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_710002ae8c;
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_LW_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    goto LAB_710002b79c;
  }
LAB_710002b070:
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_WORK_INT_WAIT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_71000288c0(this);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  if ((uVar7 & 1) == 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_710002b0d8;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_710002b0d8;
    }
  }
  else {
LAB_710002b0d8:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GAMEWATCH_SPECIAL_AIR_LW);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xe46c0e666);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar10,-1.0,1.0,0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        fVar13 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar11,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xab6928cf2);
        HVar10 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar11,HVar10,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_ENABLE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_HOLD);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_ABSORBER_GROUP_SPECIAL_LW);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      SVar5 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::AbsorberModule__set_status_impl(*ppBVar11,iVar3,SVar5,0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_REFLECTOR_KIND_SPECIAL_LW);
      lib::L2CValue::L2CValue(aLStack128,_SHIELD_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GAMEWATCH_REFLECTOR_GROUP_SPECIAL_LW);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      SVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar6 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::ReflectorModule__set_status_impl(*ppBVar11,iVar3,SVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_HOLD);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_LW_FLAG_ABSORB_ENABLE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002b79c:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

