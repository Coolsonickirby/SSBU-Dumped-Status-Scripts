
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponCloudWave::status::Regular_end(L2CWeaponCloudWave *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  Hash40 HVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_INT_EFFECT_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,lVar2);
  lib::L2CValue::L2CValue(aLStack96,1);
  HVar3 = lib::L2CValue::as_hash(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

