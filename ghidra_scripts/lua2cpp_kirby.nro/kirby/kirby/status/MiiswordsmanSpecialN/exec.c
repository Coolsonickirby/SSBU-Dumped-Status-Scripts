
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiiswordsmanSpecialN_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_WORK_INT_RECOVER_GRAVITY_COUNTER)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_TORNADO_SHOT_WORK_INT_RECOVER_GRAVITY_COUNTER
              );
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x14);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::operator_(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::operator_(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

