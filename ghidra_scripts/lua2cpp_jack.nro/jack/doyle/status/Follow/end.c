
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackDoyle::status::Follow_end(L2CWeaponJackDoyle *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0xd0095ba51);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::MotionModule__remove_motion_partial_impl(this->moduleAccessor,iVar1,false);
    lib::L2CValue::_L2CValue(aLStack64);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    app::WeaponSpecializer_JackDoyle::update_aura_visible(pBVar4);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

