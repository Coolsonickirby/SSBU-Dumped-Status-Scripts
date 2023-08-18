
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::SpecialLwAttack_end(L2CFighterRyu *this,L2CValue *return_value)

{
  uchar uVar1;
  signed sVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  
  FUN_7100044300();
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      sVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ControlModule__set_special_command_life_extend_impl(this->moduleAccessor,sVar2)
      ;
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ControlModule__set_special_command_life_count_extend_impl
                (this->moduleAccessor,uVar1);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

