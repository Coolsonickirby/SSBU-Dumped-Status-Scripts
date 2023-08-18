
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSVanish_main
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_GAME);
  lib::L2CValue::L2CValue(aLStack80,0xb6e5a0f8a);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar2,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack80,0xd6eaccddc);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar2,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_SOUND);
  lib::L2CValue::L2CValue(aLStack80,0xc4c7dd781);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar2,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialSVanish_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

