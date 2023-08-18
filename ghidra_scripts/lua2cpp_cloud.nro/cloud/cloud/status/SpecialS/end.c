
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterCloud::status::SpecialS_end(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_S2);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK_SPECIAL);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x17b1271b6c);
      lib::L2CValue::L2CValue(aLStack80,5);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__end_kind_impl(this->moduleAccessor,HVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x174b28260f);
      lib::L2CValue::L2CValue(aLStack80,5);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__end_kind_impl(this->moduleAccessor,HVar5,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x1abfa4d844);
      lib::L2CValue::L2CValue(aLStack80,5);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__end_kind_impl(this->moduleAccessor,HVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x1a0f62f8e8);
      lib::L2CValue::L2CValue(aLStack80,5);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::EffectModule__end_kind_impl(this->moduleAccessor,HVar5,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_SUB_KIND_NONE);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_INT_TRICK_SUB);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

