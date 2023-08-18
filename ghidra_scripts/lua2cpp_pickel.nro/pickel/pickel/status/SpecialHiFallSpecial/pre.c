
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiFallSpecial_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 local_a0;
  ulong uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_fall_special(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112);
    pfVar3 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,*pfVar3);
    lib::L2CValue::L2CValue(aLStack144,pfVar3[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar3[2]);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_a0);
    lib::L2CValue::operator_(aLStack96,aLStack144);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    uVar4 = lib::L2CValue::as_number(aLStack80);
    uVar5 = lib::L2CValue::as_number(aLStack96);
    uVar6 = lib::L2CValue::as_number(aLStack112);
    local_a0 = CONCAT44(uVar5,uVar4);
    uStack152 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_a0,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_GROUND_RHOMBUS_MODIFY_DEFAULT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::GroundModule__set_rhombus_modify_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

