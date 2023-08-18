
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterJack::status::Wait_pre(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_Wait_check_interrupt(this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    iVar1 = app::FighterSpecializer_Jack::check_doyle_summon_dispatch(pBVar3,true,true);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lua2cpp::L2CFighterCommon::status_pre_Wait_main(this);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

