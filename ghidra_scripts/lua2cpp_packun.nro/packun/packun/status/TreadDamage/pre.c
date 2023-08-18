
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::TreadDamage_pre(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  iVar1 = FIGHTER_STATUS_KIND_SQUAT;
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack80,pLVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = _FIGHTER_STATUS_KIND_SQUAT_WAIT;
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    uVar3 = lib::L2CValue::operator__(aLStack80,pLVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar1 = _FIGHTER_STATUS_KIND_SQUAT_RV;
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      uVar3 = lib::L2CValue::operator__(aLStack80,pLVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lua2cpp::L2CFighterCommon::status_pre_TreadDamage(this,return_value);
        return;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_STATUS_KIND_SQUAT_TREAD_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

