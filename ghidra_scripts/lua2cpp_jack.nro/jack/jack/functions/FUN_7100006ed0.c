
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100006ed0(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  ShieldStatus SVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_SHIELD_GROUP_KIND_SPECIAL_LW);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  SVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ShieldModule__set_status_impl(this->moduleAccessor,iVar1,SVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xc1c440198);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_LW2_REFLECTOR);
  uVar5 = lib::L2CValue::operator==(this_00,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NONE);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_REFLECTOR_KIND_SPECIAL_LW);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    SVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ReflectorModule__set_status_impl(this->moduleAccessor,iVar1,SVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

