
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::SpecialLw_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator_(aLStack64,aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_RAGE_CAPTURE);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ATTACK_RAGE);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue
            (aLStack64,
             _FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_SPECIAL_LW |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | FIGHTER_LOG_MASK_FLAG_ACTION_TRIGGER_ON)
  ;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTR_START_TURN);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POWER_UP_ATTACK_BIT_SPECIAL_LW);
  FUN_710002a3b0(return_value,this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

