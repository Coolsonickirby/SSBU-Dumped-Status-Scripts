
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRoy::status::SpecialNLoop_exit(L2CFighterRoy *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_SPECIAL_N_WORK_INT_CHARGE_SE_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack112,pLVar2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_ROY);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_KIND_SPECIAL_N_TURN);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::SoundModule__stop_se_handle_impl(this->moduleAccessor,iVar1,0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      app::lua_bind::SoundModule__stop_status_se_impl(this->moduleAccessor);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

