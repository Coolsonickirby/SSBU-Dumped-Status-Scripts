
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanPunch3::status::Damage_main(L2CWeaponTantanPunch3 *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack80,0x1263f13241);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar2,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,Damage_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

