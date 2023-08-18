
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSU_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_REUSE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x16c9c19d84);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x12c20e1e3e);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100026a50(this,aLStack64,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLAG_SITUATION_KEEP);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0xa0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_U_FLAG_SITUATION_KEEP);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

