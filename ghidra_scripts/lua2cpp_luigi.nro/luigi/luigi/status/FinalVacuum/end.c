
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::FinalVacuum_end(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_FINAL_SHOOT_READY);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_FINAL_FAIL);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x1062ae17ed);
      HVar3 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar3,0);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  FUN_7100006b80(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

