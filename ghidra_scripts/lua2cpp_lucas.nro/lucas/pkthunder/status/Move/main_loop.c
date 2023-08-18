
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkthunder::status::Move_main_loop
          (L2CWeaponLucasPkthunder *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LUCAS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_NUM);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LUCAS_PK_THUNDER_CHILD_MAX);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_LUCAS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_REG_TIMER);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack96,iVar1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,2);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_LUCAS_PK_THUNDER_INSTANCE_WORK_ID_FLAG_CREATE_CHILD);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator_(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack64,_WEAPON_LUCAS_PK_THUNDER_INSTANCE_WORK_ID_INT_CHILD_REG_TIMER);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

