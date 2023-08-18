
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::FinalAttack_exec(L2CFighterChrom *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  Fighter *pFVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_7100005d70();
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROY_STATUS_FINAL_FLAG_FINISH_ABS_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROY_STATUS_FINAL_FLAG_FINISH_ABS_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar4 = (Fighter *)lib::L2CValue::as_pointer(this_00);
    app::FighterSpecializer_Roy::hit_absolute_final_chrom(pFVar4);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

