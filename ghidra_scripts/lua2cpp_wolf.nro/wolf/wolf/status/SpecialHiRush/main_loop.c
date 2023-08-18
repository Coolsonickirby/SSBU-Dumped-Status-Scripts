
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWolf::status::SpecialHiRush_main_loop(L2CFighterWolf *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_INT_RUSH_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0xf488f2f96);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    uVar5 = lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack112);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,true);
            lib::L2CValue::operator_(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
      }
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if (((bVar1 & 1U) != 0) ||
         (bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112), (bVar1 & 1U) != 0)) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_FALL._4_4_);
          GVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_BRAKE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
            lib::L2CValue::L2CValue(aLStack144,0.0);
            lib::L2CValue::L2CValue(aLStack160,1.0);
            lib::L2CValue::L2CValue(aLStack176,false);
            HVar8 = lib::L2CValue::as_hash(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack144);
            fVar10 = (float)lib::L2CValue::as_number(aLStack160);
            bVar2 = lib::L2CValue::as_bool(aLStack176);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
            HVar8 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack144,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
          lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0x70);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
          GVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_BRAKE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_CONTINUE);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
            lib::L2CValue::L2CValue(aLStack144,0.0);
            lib::L2CValue::L2CValue(aLStack160,1.0);
            lib::L2CValue::L2CValue(aLStack176,false);
            HVar8 = lib::L2CValue::as_hash(aLStack96);
            fVar9 = (float)lib::L2CValue::as_number(aLStack144);
            fVar10 = (float)lib::L2CValue::as_number(aLStack160);
            bVar2 = lib::L2CValue::as_bool(aLStack176);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar2 & 1),0.0,false,false);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_FIRE_STATUS_WORK_ID_FLAG_CONTINUE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
            HVar8 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                      (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack144,GROUND_CLIFF_CHECK_KIND_NONE);
          lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0x70);
        }
        lib::L2CValue::_L2CValue(aLStack144);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::operator_(pLVar7);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        FUN_710001b5e0(this);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_FOX_STATUS_KIND_SPECIAL_HI_RUSH_END);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

