
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMewtwoPsychobreak::status::Hit_end(L2CWeaponMewtwoPsychobreak *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MEWTWO_PSYCHOBREAK_INSTANCE_WORK_ID_FLAG_HIT_ABS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    FUN_71000156d0(this);
  }
  lib::L2CValue::L2CValue(aLStack64,5);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::SlowModule__clear_whole_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
