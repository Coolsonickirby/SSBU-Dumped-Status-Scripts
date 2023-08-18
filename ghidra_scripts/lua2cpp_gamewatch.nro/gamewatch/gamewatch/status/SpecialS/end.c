
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialS_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HIT_TABEMONO)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_SUB_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_INT_TRICK_SUB);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x5a2add30f);
  lib::L2CValue::L2CValue(aLStack80,0x7018b2e00);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

