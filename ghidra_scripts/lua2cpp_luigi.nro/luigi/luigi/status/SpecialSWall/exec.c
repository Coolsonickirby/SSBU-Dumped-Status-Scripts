
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::SpecialSWall_exec(L2CFighterLuigi *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  iVar2 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_GROUND_TOUCH_FLAG_LEFT);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_71000027f4:
    lib::L2CValue::L2CValue(aLStack64,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) goto LAB_7100002854;
    }
    app::lua_bind::GroundModule__detach_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,-1.0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) == 0) goto LAB_71000027f4;
LAB_7100002854:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

