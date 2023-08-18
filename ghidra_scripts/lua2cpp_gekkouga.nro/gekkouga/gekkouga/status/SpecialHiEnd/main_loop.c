
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiEnd_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  Hash40 HVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
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
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100026edc;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
LAB_7100026b14:
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_PHASE);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_PHASE);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
        lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack160,0x31d39a761);
        HVar5 = lib::L2CValue::as_hash(aLStack160);
        uVar6 = lib::L2CValue::as_number(aLStack96);
        uVar7 = lib::L2CValue::as_number(aLStack144);
        uVar8 = lib::L2CValue::as_number(aLStack112);
        local_50 = CONCAT44(uVar7,uVar6);
        uStack72 = (ulong)uVar8;
        app::lua_bind::ModelModule__set_joint_rotate_impl
                  (this->moduleAccessor,HVar5,(Vector3f *)&local_50,0,0);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack208,0x31d39a761);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        HVar5 = lib::L2CValue::as_hash(aLStack208);
        uVar6 = lib::L2CValue::as_number(aLStack224);
        uVar7 = lib::L2CValue::as_number(aLStack240);
        uVar8 = lib::L2CValue::as_number(aLStack256);
        local_50 = CONCAT44(uVar7,uVar6);
        uStack72 = (ulong)uVar8;
        app::lua_bind::ModelModule__set_joint_rotate_impl
                  (this->moduleAccessor,HVar5,(Vector3f *)&local_50,0,0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) goto LAB_7100026b14;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100026edc:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

