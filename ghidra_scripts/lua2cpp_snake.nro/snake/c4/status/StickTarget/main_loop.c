
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeC4::status::StickTarget_main_loop(L2CWeaponSnakeC4 *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar3 = (float)app::lua_bind::ControlModule__get_clatter_time_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_SNAKE_C4_STATUS_KIND_DROP_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,(uint)bVar1);
  return;
}

